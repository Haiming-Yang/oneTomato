#include <QSettings>
#include "TomatoConfig.h"

static TomatoConfig *gInstance = 0;

TomatoConfig::TomatoConfig()
{
    mWorkLength = 25 * 60;
    mRestLength = 5 * 60;
}

TomatoConfig *TomatoConfig::instance() {
  if ( !gInstance ) {
    gInstance = new TomatoConfig();
    gInstance->load();
  }

  return gInstance;
}

void TomatoConfig::save() const
{
  QSettings s("config.ini", QSettings::IniFormat);

  s.setValue( "WorkLength", mWorkLength );
  s.setValue( "RestLength", mRestLength );
}

void TomatoConfig::load()
{
  QSettings s("config.ini", QSettings::IniFormat);

  mWorkLength = s.value( "WorkLength", mWorkLength ).toInt();
  mRestLength = s.value( "RestLength", mRestLength ).toInt();
}

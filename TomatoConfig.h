#ifndef TOMATOCONFIG_H
#define TOMATOCONFIG_H


class TomatoConfig
{
public:
  static TomatoConfig *instance();

  void save() const;
  void load();

  int mWorkLength;
  int mRestLength;

private:
    TomatoConfig();
};

#endif // TOMATOCONFIG_H

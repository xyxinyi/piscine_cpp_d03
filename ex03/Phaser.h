
# define PHASER_H

class Phaser{
 public:
    enum AmmoType
    {REGULAR, PLASMA, ROCKET};
 public:
    Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
    ~Phaser(){};
    public:
    void fire();
    void ejectClip();
    void changeType(AmmoType newType);
    void reload();
    void addAmmo(AmmoType type);
 public:
    int getCurrentAmmos() const;
 private:
    static const int Empty = 0;
 private:
    //    int _total;
    int _maxAmmo;
    int _magazine[3];
    AmmoType _cur;
};
#endif


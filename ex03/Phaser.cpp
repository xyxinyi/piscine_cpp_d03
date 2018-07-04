#include <iostream>
# include <string>
# include "Sounds.h"

#include "Phaser.h"


Phaser::Phaser(int mA, AmmoType t): _maxAmmo(mA), _cur(t){
  for (int i = 0; i < 3; i++) _magazine[i] = mA;
}

void Phaser::fire(){
  if (_magazine[_cur] == Empty){
    std::cout << "Clip empty, please reload" << std::endl;
    return;
  }
  _magazine[_cur]--;
  std::string un = Sounds::Regular;
  if (_cur == REGULAR) std::cout << un << std::endl;
  else if (_cur == PLASMA) std::cout << Sounds::Plasma << std::endl;
  else if (_cur == ROCKET) std::cout << Sounds::Rocket << std::endl;
}

void Phaser::ejectClip(){
  _magazine[_cur] = 0;
}

void Phaser::changeType(AmmoType n){
  _cur = n;
  std::cout << "Switching ammo to type : ";
  if (n == REGULAR) std::cout << "regular" << std::endl;
  else if (n == PLASMA) std::cout << "plasma" << std::endl;
  else if (n == ROCKET) std::cout << "rocket" << std::endl;
}

void Phaser::reload(){
  std::cout << "Reloading ..." << std::endl;
  _magazine[_cur] = _maxAmmo;
}

void Phaser::addAmmo(AmmoType t){
  if (t != PLASMA || t!=ROCKET || t!=REGULAR)return;
  if (_magazine[t] == _maxAmmo){
    std::cout << "Clip full" << std::endl;
  }
  else{
    _magazine[t]++;
  }
}

int Phaser::getCurrentAmmos() const{
  return _magazine[_cur];
}

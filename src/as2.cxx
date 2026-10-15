#include "as2.hpp"

namespace homework {
    Knight::Knight(const std::string name, std::string weapon)
        : Entity(name), weapon_(weapon) {}



   void Knight::attack() const {
      std::cout << name << " attacks with a " << weapon_ << "!\n";
    };

    std::unique_ptr<Entity> Knight::clone() const {
        return std::make_unique<Knight>(*this);
    };

    void Knight::setWeapon(const std::string newWeapon) {
        weapon_ = newWeapon;
        std::cout << name << " now fights with a " << weapon_ << "!\n";
    }



} // namespace homework


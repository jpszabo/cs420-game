#if !defined PIRATE_HPP
#define PIRATE_HPP

#include "EnemyActor.hpp"

class Pirate : public EnemyActor {
	
public:
	Pirate(ActorId actor_id);
	virtual void checkState(sf::Vector2i ship_pos);
	virtual bool initialize(); 
	virtual void update(const sf::Time& delta_t);
	
private:
	const double FREEZE_TIMER = 2.0;
	double freezeTimer;
};

#endif
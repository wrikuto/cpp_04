#ifndef TUTORIAL_HPP
# define TUTORIAL_HPP

# include <iostream>

class Car
{
	private:
		int	speed;
	
	public:
		Car(int arg)
		{
			speed = arg;
		}

		Car() : speed(0) {}

		void accelerate(int inc)
		{
			speed += inc;
		}

		void brake(int dec)
		{
			if (speed - dec < 0)
				speed = 0;
			else
				speed -= dec;
		}
		
		int get_speed() const
		{
			return (speed);
		}
};

#endif

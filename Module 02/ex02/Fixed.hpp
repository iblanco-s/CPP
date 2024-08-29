#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
		
	public:
		// Constructors and destructor
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();
		
		// Getter and setter
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// Conversion functions
		float toFloat(void) const;
		int toInt(void) const;

		//Min and max
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		// Assignment operator
		Fixed &operator=(const Fixed &other);

		// Comparison operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		// Arithmetic operators
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		// Increment and decrement operators
		Fixed &operator++();    // Pre-increment
		Fixed operator++(int);  // Post-increment
		Fixed &operator--();    // Pre-decrement
		Fixed operator--(int);  // Post-decrement

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
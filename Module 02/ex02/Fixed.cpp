/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:01:53 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/03 16:01:54 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
}

Fixed::Fixed(const int value) {
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << 8; 
}

Fixed::Fixed(const float value) {
	// std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = (int)roundf(value * (1 << 8));
}
	
float Fixed::toFloat( void ) const {
	return ((float)this->_fixedPointValue) * (1.0f / 256.0f);
}

int Fixed::toInt( void ) const {
	int returnValue = this->_fixedPointValue;
	return (returnValue >> 8);
}

bool Fixed::operator>(const Fixed &other) const {
	return this->_fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const {
	return this->_fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &other) const {
	return this->_fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const {
	return this->_fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const {
	return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->_fixedPointValue != other._fixedPointValue;
}


Fixed Fixed::operator+(const Fixed &other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++() {
	this->_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->_fixedPointValue++;
	return temp;
}

Fixed &Fixed::operator--() {
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->_fixedPointValue--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}


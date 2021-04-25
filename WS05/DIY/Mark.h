/**
 * Name:                Angelo Dikon Wong
 * Student ID:          148021199
 * Seneca email:        adikon-wong@myseneca.ca
 * Section:             OOP244 - NGG
 **/

#ifndef SDDS_MARK_H_
#define SDDS_MARK_H_
#include <iostream>

namespace sdds {
	class Mark {
		int m_value;

	public:
		void Validate();
		Mark();
		Mark(int grade);

		operator int() const;
		Mark& operator+=(int plus);
		Mark& operator=(int i);
		operator double() const;
		operator char() const;
	};
	int operator+= (int& val, const Mark& right);
}
#endif
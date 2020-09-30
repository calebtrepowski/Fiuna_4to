#ifndef LIST_H
#define LIST_H

#include <vector>
#include <iostream>
#include <fstream>
#include "NoValidPosition.h"

/**
	 Alumno: Caleb Trepowski Castillo
	 CI: 4635928
 */

template <class E>
class List
{
	public:
		List() {}
		virtual ~List() {}

		void add(E dat){
			elements.push_back(dat);
		}

		E remove(int pos) throw (NoValidPosition)
		{
			if(pos < 1 || pos > elements.size())
				throw NoValidPosition();
			else {
				E aux = elements[pos-1];
				elements.erase(elements.begin()+pos-1);
				return aux;
			}
		}

		int search(E dat) const
		{
			for (unsigned int i=0;i<elements.size();i++)
			{
				if(elements[i] == dat) return i+1;
			}
			return 0;
		}

		E get(int pos) const throw (NoValidPosition)
		{
			if(pos < 1 || pos > elements.size())
				throw NoValidPosition();
			else {
				return elements[pos-1];
			}
		}

		int getSize() const
		{
			return elements.size();
		}

		bool isEmpty() const
		{
			if(elements.size() > 0) return false;
			else return true;
		}

		bool save(const char* file)
		{
			std::ofstream of(file, std::fstream::out);
			if(of.good())
			{
				for(unsigned int i=0; i<elements.size();i++)
				{
					of << elements[i] << '\n';
				}
				of.close();
				return true;
			} else {
				return false;
			}
		}

		const List<E>& operator += (E d)
		{
			this->add(d);
			return *this;
		}

		friend std::ostream& operator<< (std::ostream &os, List<E> list)
		{
			for (unsigned int i=0; i<list.getSize();i++)
			{
				os << list.get(i+1) << '\n';
			}
			return os;
		}
	protected:

	private:
	std::vector<E> elements;
};

#endif // LIST_H

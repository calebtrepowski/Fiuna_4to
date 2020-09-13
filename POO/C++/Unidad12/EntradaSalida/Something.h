#ifndef SOMETHING_H
#define SOMETHING_H

class Something {
private:
    string name;
	float weight;
	int size;

public:
    Something(string n="", float w=0, int s=0) {
        name = n;
        weight = w;
        size = s;
    }

	friend ostream& operator<<(ostream& os, const Something& s)
	{
		// write out individual members of s with an end of line between each one
		os << s.name << enter << s.weight << enter << s.size << enter;
		return os;
	}

	// Extraction operator
	friend istream& operator>>(istream& is, Something& s)
	{
		// read in individual members of s
		is >> s.name >> s.weight >> s.size;
		return is;
	}
	friend void pruebaAlgo();
};

#endif // SOMETHING_H

#include<cstdio>
#include<iostream>

using namespace std;


typedef unsigned short us;


class pixel {
private:
	us r, g, b;
public:

	pixel(): r(0), g(0), b(0) {}
	pixel(us r_,us g_,us b_) : r(r_), g(g_),b(b_){}

	us red()const { return r; }
	us green()const { return g; }
	us blue()const { return b; }
	

	pixel mix(const pixel &p) const {

		us newred = (r + p.r) / 2;
		us newgreen = (g + p.g) / 2;
		us newblue = (b + p.b) / 2;
		pixel newpixel(newred, newgreen, newblue);
		return newpixel;
	}


};


int main() {
	pixel color1(0, 0, 255);
	pixel color2;
	pixel color3(255, 0, 0);
	pixel color4;
	m = color3.mix(color1);
	cout << color3.red() << " " << color3.green() << " " << color3.blue()
		<< endl;
	cout << m.red() << " " << m.green() << " " << m.blue() << endl;
}


int main() {

}
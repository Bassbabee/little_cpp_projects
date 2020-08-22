#include <iostream>

class PoweredDevice {
public:
    PoweredDevice(int power) { std::cout << "PoweredDevice: " << power << '\n'; }
};

class Scanner: virtual public PoweredDevice { // note: PoweredDevice is now a virtual base class
public:
	// this line is required to create Scanner objects, but ignored in this case
    Scanner(int scanner, int power) : PoweredDevice(power) { std::cout << "Scanner: " << scanner << '\n'; }
};

class Printer: virtual public PoweredDevice { // note: PoweredDevice is now a virtual base class
public:
	// this line is required to create Printer objects, but ignored in this case
    Printer(int printer, int power) : PoweredDevice(power) { std::cout << "Printer: " << printer << '\n'; }
};

class Copier: public Scanner, public Printer {
public:
	// PoweredDevice is constructed here
    Copier(int scanner, int printer, int power) : PoweredDevice(power), Scanner(scanner, power), Printer(printer, power) {}
};


// OUTPUT:
// PoweredDevice: 3
// Scanner: 1
// Printer: 2

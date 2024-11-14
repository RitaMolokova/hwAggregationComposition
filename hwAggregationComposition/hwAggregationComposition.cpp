#include <iostream>
#include <string>
using namespace std;

class CPU
{
	string model;
	double Gghz;
public:
	CPU() = default;
	CPU(const char* mod, double ghz) : Gghz(ghz){
		model.append(mod);
	}
	void Print() const{
		cout << "Model CPU: " << model << "\t " << Gghz << " GHz" << endl;
	}
};
class SSD
{
	string model;
	double val;
public:
	SSD() = default;
	SSD(const char* mod, double v) : val(v){
		model.append(mod);
	}
	void Print() const{
		cout << "Model SSD:  " << model << "\t " << val << " GB" << endl;
	}
};
class RAM
{
	string model;
	double memory;
public:
	RAM() = default;
	RAM(const char* mod, double m) : memory(m){
		model.append(mod);
	}
	void Print() const{
		cout << "Model RAM: " << model << "\t " << memory << " GB" << endl;
	}
};
class GPU
{
	string model;
	double val;
public:
	GPU() = default;
	GPU(const char* mod, double v) : val(v){
		model.append(mod);
	}
	void Print() const{
		cout << "Model GPU: " << model << "\t " << val << " GB" << endl;
	}
};
class Mouse
{
	string model;
	double val;
public:
	Mouse() = default;
	Mouse(const char* mod, double v) : val(v){
		model.append(mod);
	}
	void Print() const{
		cout << "Model Mouse: " << model << "\t " << val << " DPI" << endl;
	}
};
class Laptop
{
	CPU cpu;
	SSD ssd;
	RAM ram;
	GPU gpu;
	Mouse mouse;

public:
	Laptop(const CPU& cpu, const SSD& ssd, const RAM& ram, const GPU& gpu, const Mouse& mouse)
		: cpu(cpu), ssd(ssd), ram(ram), gpu(gpu), mouse(mouse)
	{}
	void Print() const{
		cout << "Laptop:" << endl;
		cpu.Print();
		ssd.Print();
		ram.Print();
		gpu.Print();
		mouse.Print();
	}
};

int main()
{
	CPU cpu("AMD Ryzen 5", 4.2);
	SSD ssd("Kingston A2000", 1024);
	RAM ram("G.SKILL Ripjaws", 32);
	GPU gpu("NVIDIA RTX 3070", 8);
	Mouse mouse("Razer DeathAdder", 20000);
	Laptop laptop(cpu, ssd, ram, gpu, mouse);
	laptop.Print();
}

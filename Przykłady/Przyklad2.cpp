#include <iostream>
#include <string>

using namespace std;

class monitor
{

private:
   string model ;
   double cale;

   
public:
   
    monitor(string, double);

    monitor(const monitor &);

    void getinfo(string&,double&);
    void setinfo(string,double);

};
monitor::monitor(string pmodel, double pcale) {
	cout << "zwykły konstruktor z parametrami" << endl;
	model = pmodel;
	cale = pcale;	
}
monitor::monitor(const monitor &monitorek) {
	cout << " konstruktor kopiujący" << endl;
	model = monitorek.model;
	cale = monitorek.cale;	
}
void monitor::getinfo(string &pmodel, double &pcale) {
	pmodel = model;
	pcale = cale;
}
void monitor::setinfo(string pmodel, double pcale) {
	model = pmodel;
	cale = pcale;
}
monitor fCopy(monitor Monitor) {
   return Monitor;
}


int main(){
    string mo;
    double ca;
	

	monitor m1("acer", 30);	
	m1.getinfo(mo, ca);
	cout << "PIERWSZY MONITOR" << endl;	
	cout << "Nazwa = " << mo << endl;
	cout << "Cale = " << ca << endl; 	
		
	monitor m2 = m1; 
	m2.getinfo(mo, ca);
	cout << "DRUGI MONITOR" << endl;	
	cout << "Nazwa = " << mo << endl;
	cout << "Cale = " << ca << endl; 
	
	
	monitor m3(m1); 
	m3.getinfo(mo, ca);
	cout << "TRZECI MONITOR " << endl;	
	cout << "Nazwa = " << mo << endl;
	cout << "Cale = " << ca << endl; 
	
	
	monitor m4; 
	m4 = fCopy(m1);

	m4.getinfo(mo, ca);	
	cout << "CZWARTY MONITOR" << endl;	
	cout << "Nazwa = " << mo << endl;
	cout << "Cale = " << ca << endl; 
	
	return 0;
}


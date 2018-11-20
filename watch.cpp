#include <iostream>
using namespace std;
class watch
{
	public:
		int hour;
		int minute;
		int second;
		void set_watch(int _hour, int _minute, int _second);
		void getTime();
		watch(int _hour, int _minute, int _second){
		       hour = _hour;
		       minute = _minute;
		       second = _second;
		}
};

void watch::set_watch(int _hour, int _minute, int _second){
	hour = _hour;
	minute = _minute;
	second = _second;
}

void watch::getTime(){
	cout<<"현재 시간은"<<hour<<":"<<minute<<":"<<second<<"입니다."<<endl<<endl;
}

int main(){
	watch w(12,34,56);
	w.getTime();
	return 0;
}
		       

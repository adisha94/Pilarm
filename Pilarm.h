class Pilarm
{
private:
	bool digitalSignal;
public:
	bool SignalOn(bool logger);
	bool SignalOff(bool logger);
	bool SignalAutoOn(bool checker);
	bool SignalAutoOff(bool checker);
}

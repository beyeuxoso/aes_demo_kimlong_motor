
#include "Threads.h"
#include "Thread.h"
#include "ThreadController.h"
#include "Dbg.h"
#include "gpio.h"

// Include

// Dành cho quản lý các Thread
ThreadController controller = ThreadController();

// Luồng cho đọc cảm biến
Thread ThreadSensorRead = Thread();

// Luồng cho debug bằng led
Thread ThreadLedDebug = Thread();

// Luồng cho in log test
Thread ThreadTest = Thread();

void Test_Main()
{

}

void LedDebug_Main()
{
	digitalWrite(LED_DEBUG, !digitalRead(LED_DEBUG));
}

void Threads_Init() {

#if 1
	ThreadLedDebug.enabled = true;
	ThreadLedDebug.setInterval(1000);
	ThreadLedDebug.onRun(LedDebug_Main);
	controller.add(&ThreadLedDebug);
#endif

#if 1
	ThreadTest.enabled = true;
	ThreadTest.setInterval(1000);
	ThreadTest.onRun(Test_Main);
	controller.add(&ThreadTest);
#endif
}
void Threads_Run() {
	controller.run();
}

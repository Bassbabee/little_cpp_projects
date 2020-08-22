class IErrorLog
{
public:
    virtual bool openLog(const char *filename) = 0;
    virtual bool closeLog() = 0;

    virtual bool writeError(const char *errorMessage) = 0;

    virtual ~IErrorLog() {} // make a virtual destructor in case we delete an IErrorLog pointer, so the proper derived destructor is called
};


 // You could derive a class named FileErrorLog, where openLog() opens a file on disk,
 // closeLog() closes the file, and writeError() writes the message to the file. You
 // could derive another class called ScreenErrorLog, where openLog() and closeLog()
 // do nothing, and writeError() prints the message in a pop-up message box on the screen.


 // And use this:
 #include <cmath> // for sqrt()
 double mySqrt(double value, IErrorLog &log) //IErrorLog not its deriveds
 {
     if (value < 0.0)
     {
         log.writeError("Tried to take square root of value less than 0");
         return 0.0;
     }
     else
     {
         return std::sqrt(value);
     }
 }


// Now the caller can pass in any class that conforms to the IErrorLog interface.
// If they want the error to go to a file, they can pass in an instance of
// FileErrorLog. If they want it to go to the screen, they can pass in an instance
// of ScreenErrorLog. Or if they want to do something you haven’t even thought of,
// such as sending an email to someone when there’s an error, they can derive a
// new class from IErrorLog (e.g. EmailErrorLog) and use an instance of that!
// By using IErrorLog, your function becomes more independent and flexible.

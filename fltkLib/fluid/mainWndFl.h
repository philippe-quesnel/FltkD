// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef mainWndFl_h
#define mainWndFl_h
#include <FL/Fl.H>
#include "../dndBox.h"
#include "../interfaces/imainWndD.h"
#include "../interfaces/imainWndFl.h"
#include "../interfaces/itextProcess.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Return_Button.H>

class MainWindowFl : public IMainWindowD, IMainWindowFl {
public:
  MainWindowFl(ITextProcessor* textProcessor);
protected:
  Fl_Double_Window *window;
  DndBox *dndBox;
private:
  void cb_Close_i(Fl_Return_Button*, void*);
  static void cb_Close(Fl_Return_Button*, void*);
public:
  virtual ~MainWindowFl();
  virtual void show(int argc, char ** argv);
  virtual void hide();
  virtual void toto(const char* p1, const char* p2, const char* p3);
  virtual const char* getDroppedText();
  virtual ITextProcessor* getTextProcessor();
private:
  ITextProcessor* textProcessor; 
};
#endif
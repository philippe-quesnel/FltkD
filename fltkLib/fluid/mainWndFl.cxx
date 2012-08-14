// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "mainWndFl.h"
#include <Fl/Fl_File_Chooser.H>

void MainWindowFl::cb_Close_i(Fl_Return_Button*, void*) {
  hide();
}
void MainWindowFl::cb_Close(Fl_Return_Button* o, void* v) {
  ((MainWindowFl*)(o->parent()->user_data()))->cb_Close_i(o,v);
}

void MainWindowFl::cb_file_i(Fl_Button*, void*) {
  Fl_File_Chooser* chooser = new Fl_File_Chooser(
".", "*", Fl_File_Chooser::MULTI | Fl_File_Chooser::FILE | Fl_File_Chooser::DIRECTORY, "file chooser");
chooser->show();
}
void MainWindowFl::cb_file(Fl_Button* o, void* v) {
  ((MainWindowFl*)(o->parent()->user_data()))->cb_file_i(o,v);
}

MainWindowFl::MainWindowFl(ITextProcessorD* textProcessor) {
  this->textProcessor = textProcessor;
  { window = new Fl_Double_Window(420, 325);
    window->user_data((void*)(this));
    window->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
    { dndBox = new DndBox(10, 13, 300, 90, "Drop stuff here");
      dndBox->box(FL_UP_BOX);
      dndBox->color(FL_BACKGROUND_COLOR);
      dndBox->selection_color(FL_BACKGROUND_COLOR);
      dndBox->labeltype(FL_SHADOW_LABEL);
      dndBox->labelfont(3);
      dndBox->labelsize(30);
      dndBox->labelcolor(FL_FOREGROUND_COLOR);
      dndBox->user_data((void*)((IMainWindowFl*)this));
      dndBox->align(Fl_Align(FL_ALIGN_CENTER));
      dndBox->when(FL_WHEN_RELEASE);
    } // DndBox* dndBox
    { Fl_Return_Button* o = new Fl_Return_Button(285, 255, 110, 30, "Close");
      o->callback((Fl_Callback*)cb_Close);
    } // Fl_Return_Button* o
    { editor = new Fl_Text_Editor(15, 125, 340, 60);
      editor->buffer(textBuffer);
    } // Fl_Text_Editor* editor
    { Fl_Button* o = new Fl_Button(45, 225, 70, 20, "file");
      o->callback((Fl_Callback*)cb_file);
    } // Fl_Button* o
    window->end();
  } // Fl_Double_Window* window
}

MainWindowFl::~MainWindowFl() {
  puts("~mainWndFl");
  if (window)
    delete window;
  window = 0;
}

void MainWindowFl::show(int argc, char ** argv) {
  window->show(argc, argv);
}

void MainWindowFl::hide() {
  window->hide();
}

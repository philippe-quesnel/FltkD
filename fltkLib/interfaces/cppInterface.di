// the C++ interfaces to our fltk window

// Copyright 2012 Philippe Quesnel
// Licensed under the Academic Free License version 3.0

module cppInterface;

// D interface to call c++ code
extern (C++) {

    // must match IMainWindowD in imainWndD.h!
    interface IMainWindowD {
        void show(int argc, char ** argv);
        void hide();
        void toto(const char*, const char*, const char*);
        const char* getDroppedText();
    }

    IMainWindowD createMainWindow(ITextProcessorD);
    void freeMainWindow(IMainWindowD w);
    void fl_run();
}


// D interface called by c++ code
extern (C++) {
    interface ITextProcessorD {
        void setText(const char*);
        void process();
    }
}

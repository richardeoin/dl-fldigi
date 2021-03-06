// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "gettext.h"
#include "record_browse.h"
#include <config.h>

Fl_Group *tabDataFiles=(Fl_Group *)0;

Fl_Input_Choice *inpDataSources=(Fl_Input_Choice *)0;

Fl_Light_Button *btnDataSourceUpdate=(Fl_Light_Button *)0;

static void cb_btnDataSourceUpdate(Fl_Light_Button*, void*) {
  DerivedRecordLst::cbGuiUpdate();
}

Fl_Button *btnDataSourceReset=(Fl_Button *)0;

static void cb_btnDataSourceReset(Fl_Button*, void*) {
  DerivedRecordLst::cbGuiReset();
}

Fl_Double_Window* make_record_loader_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(540, 280, _("Data files sources"));
    w = o;
    o->tooltip(_("Data files update"));
    { tabDataFiles = new Fl_Group(5, 25, 570, 275);
      tabDataFiles->tooltip(_("Tabular data sources"));
      { DerivedRecordLst* o = new DerivedRecordLst(6, 25, 529, 217, _("Data files sources"));
        o->box(FL_THIN_DOWN_FRAME);
        o->color(FL_BACKGROUND_COLOR);
        o->selection_color(FL_BACKGROUND_COLOR);
        o->labeltype(FL_NO_LABEL);
        o->labelfont(0);
        o->labelsize(14);
        o->labelcolor(FL_FOREGROUND_COLOR);
        o->align(Fl_Align(FL_ALIGN_TOP));
        o->when(FL_WHEN_RELEASE);
        o->end();
        Fl_Group::current()->resizable(o);
      } // DerivedRecordLst* o
      { inpDataSources = new Fl_Input_Choice(6, 254, 284, 21, _("Data source"));
        inpDataSources->tooltip(_("Data files repository"));
        inpDataSources->align(Fl_Align(FL_ALIGN_RIGHT));
      } // Fl_Input_Choice* inpDataSources
      { btnDataSourceUpdate = new Fl_Light_Button(387, 254, 74, 20, _("Update"));
        btnDataSourceUpdate->tooltip(_("Update selected local data files with repository content"));
        btnDataSourceUpdate->callback((Fl_Callback*)cb_btnDataSourceUpdate);
      } // Fl_Light_Button* btnDataSourceUpdate
      { btnDataSourceReset = new Fl_Button(465, 254, 70, 20, _("Reset"));
        btnDataSourceReset->tooltip(_("Delete local data files if selected."));
        btnDataSourceReset->callback((Fl_Callback*)cb_btnDataSourceReset);
      } // Fl_Button* btnDataSourceReset
      tabDataFiles->end();
      Fl_Group::current()->resizable(tabDataFiles);
    } // Fl_Group* tabDataFiles
    o->end();
  } // Fl_Double_Window* o
  return w;
}

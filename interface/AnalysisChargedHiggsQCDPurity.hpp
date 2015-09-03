#ifndef CHARGEDHIGGS_QCDPURITY_H
#define CHARGEDHIGGS_QCDPURITY_H

#include "interface/AnalysisBase.hpp"

class ChargedHiggsQCDPurity:  virtual public AnalysisBase
{
    public:
        virtual void Init();
        virtual int analyze(Event*,string systname);
        virtual const string name(){return "ChargedHiggsQCDPurity";}

        // Configuration
        vector<float> PtBins;

        const string dir="ChargedHiggsQCDPurity/Vars/";
        int FindBin(float pt);
        string HistName(float pt, bool Direct=true, bool FullSelection=false,string var = "EtMiss");

    void Book(string name, string title,int nBins, double xmin, double xmax);
    void Fill(string name, string syst , double value, double weight=1);
};

#endif

// Local Variables:
// mode:c++
// indent-tabs-mode:nil
// tab-width:4
// c-basic-offset:4
// End:
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4 

Int_t loadlibsrec () 
{
  // Macro which loads the libraries needed for reconstruction
  // Possible usage: In a Root session (no AliRoot) one does
  // root [0] .x loadlibsrec.C
  // root [1] gAlice = new AliRun("gAlice","test")           
  // root [2] AliReconstruction rec
  // root [3] rec.Run()

  Int_t ret=-1;

  if ( gSystem->Load("libPhysics") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMinuit") < 0 ) return ret; ret--;
  if ( gSystem->Load("libProof") < 0 ) return ret; ret--;

  if ( gSystem->Load("libGeom") < 0 ) return ret; ret--;
  if ( gSystem->Load("libVMC") < 0 ) return ret; ret--;

  if ( gSystem->Load("libNet") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTree") < 0 ) return ret; ret--;
  if ( gSystem->Load("libGui") < 0 ) return ret; ret--;

  if ( gSystem->Load("libmicrocern") < 0 ) return ret; ret--;
  if ( gSystem->Load("libSTEERBase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libESD") < 0 ) return ret; ret--;
  if ( gSystem->Load("libCDB") < 0 ) return ret; ret--;
  if ( gSystem->Load("libRAWDatabase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libRAWDatarec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libAOD") < 0 ) return ret; ret--;
  if ( gSystem->Load("libANALYSIS") < 0 ) return ret; ret--;
  
  if ( gSystem->Load("libSTEER") < 0 ) return ret; ret--;
  if ( gSystem->Load("libRAWDatasim") < 0 ) return ret; ret--;

  if ( gSystem->Load("libSTRUCT") < 0 ) return ret; ret--;
  if ( gSystem->Load("libPHOSUtils") < 0 ) return ret; ret--;
  if ( gSystem->Load("libPHOSbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libPHOSrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONcore") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONmapping") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONgeometry") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONcalib") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONraw") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONtrigger") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMUONrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libFMDbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libFMDsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libFMDrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libPMDbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libPMDsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libPMDrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libHMPIDbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libHMPIDsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libHMPIDrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libT0base") < 0 ) return ret; ret--;
  if ( gSystem->Load("libT0sim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libT0rec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libZDCbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libZDCsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libZDCrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libACORDEbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libACORDErec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libVZERObase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libVZEROrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libVZEROsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libEMCALraw") < 0 ) return ret; ret--;
  if ( gSystem->Load("libEMCALUtils") < 0 ) return ret; ret--;
  if ( gSystem->Load("libEMCALbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libEMCALsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libEMCALrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTPCbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTPCrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTPCsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libITSbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libITSsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libITSrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libSTAT") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTRDbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTRDsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTRDrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTOFbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTOFsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libTOFrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMFTbase") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMFTrec") < 0 ) return ret; ret--;
  if ( gSystem->Load("libMFTsim") < 0 ) return ret; ret--;
  if ( gSystem->Load("libHLTbase") < 0 ) return ret; ret--;
  
  return 0;
}

#ifndef _FCEUPYTHON_H
#define _FCEUPYTHON_H

void FCEU_PythonFrameBoundary();
int FCEU_LoadPythonCode(const char* filename);

uint8 FCEU_PythonReadJoypad(int,uint8);

void FCEU_PythonStop();

#endif //_FCEUPYTHON_H
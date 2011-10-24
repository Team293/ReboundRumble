#include "Spike.h"
void Spike::ColumnUp()
{
	ColDnSol->Set(false);
	ColUpSol->Set(true);
	col_up=true;
}

void Spike::ColumnDown()
{
	ColDnSol->Set(true);
	ColUpSol->Set(false);
	col_up=false;
}

void Spike::ClawOpen()
{
	GrprClsSol->Set(false);
	GrprOpnSol->Set(true);
	claw_open=true;
}

void Spike::ClawClose()
{
	GrprOpnSol->Set(false);
	GrprClsSol->Set(true);
	claw_open=false;
}

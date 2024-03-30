#include "pch.h"
#include "TxEliminaMascota.h"
#include "PassarellaMascota.h"
using namespace System;
#include "TxEliminaMascota.h"
TxEliminaMascota::TxEliminaMascota() {
}

TxEliminaMascota^ TxEliminaMascota::crear()
{
    return gcnew TxEliminaMascota();
}

void TxEliminaMascota::ejecutar()
{
  int chip;
  PassarellaMascota^ mascota = gcnew PassarellaMascota(chip, "", DateTime::Now, "", "", "");
  if (mascota->GetType()->GetProperty("Chip") != nullptr) {
      chip = mascota->Chip;// Nose si asi puedes sacar el chip correctamente.
  }
  PassarellaMascota::eliminar(chip);
}

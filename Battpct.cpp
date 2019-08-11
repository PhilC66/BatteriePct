
#include "Battpct.h"

int BattLipopct(int vbat) {
  // Batterie Lipo
  // vbat tension batterie 4150 = 4.150V
  // retourn etat batterie en %
  int EtatBat = 0;

  int echelbatt[12] = {4150, 4100, 3970, 3920, 3870, 3830, 3790, 3750, 3700, 3600, 3300, 3000};
  byte pctbatt [12] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 5, 0};

  for (int i = 0; i < 12; i++) {
    if (vbat > echelbatt[i]) {
      EtatBat = pctbatt[i];
      return EtatBat;
    }
  }
  return 0;
}

int BattPBpct(int vbat, int Ncell) {
  // ref : http://www.regenebatt.com/batterie-world/diagnostique-batterie/etat-de-charge-avec-un-multimetre.html
  // Batterie Plomb à Ncellules
  // vbat tension batterie 1215 = 12.15V 6cells, 210 = 2.10V 1cell
  // retourne etat batterie en %
  int EtatBat = 0;

  // int echelbatt[21] = {1260,1255,1250,1246,1242,1237,1232,1226,1220,1213,1206,1198,1190,1183,1175,1167,1158,1145,1131,1100,1050};
  int echelbatt[21] = {2100, 2092, 2083, 2077, 2070, 2062, 2053, 2043, 2033, 2022, 2010, 1997, 1983, 1972, 1958, 1945, 1930, 1908, 1885, 1833, 1750};
  byte pctbatt [21] = {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5, 0};

  for (int i = 0; i < 21; i++) {
    if (vbat * 10 / Ncell > echelbatt[i]) {
      EtatBat = pctbatt[i];
      return EtatBat;
    }
  }
  return 0;
}

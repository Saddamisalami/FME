#include <Arduino.h>

#include "audio\digital\sounds.h"
#include "audio\digital\apager\sounds.h"

int getDigitalFrequency(int alarmSound, int frequencyCounter)
{
    switch (alarmSound)
    {
    case 1:
    {
        return digital01[frequencyCounter];
        break;
    }
    case 2:
    {
        return digital02[frequencyCounter];
        break;
    }
    case 3:
    {
        return digital03[frequencyCounter];
        break;
    }
    case 4:
    {
        return digital04[frequencyCounter];
        break;
    }
    case 5:
    {
        return digital05[frequencyCounter];
        break;
    }
    case 6:
    {
        return digital06[frequencyCounter];
        break;
    }
    case 7:
    {
        return digital07[frequencyCounter];
        break;
    }
    case 8:
    {
        return digital08[frequencyCounter];
        break;
    }
    case 9:
    {
        return digital09[frequencyCounter];
        break;
    }
    case 10:
    {
        return digital10[frequencyCounter];
        break;
    }
    case 11:
    {
        return digital11[frequencyCounter];
        break;
    }
    case 12:
    {
        return digital12[frequencyCounter];
        break;
    }
    case 13:
    {
        return digital13[frequencyCounter];
        break;
    }
    case 14:
    {
        return digital14[frequencyCounter];
        break;
    }
    case 15:
    {
        return digital15[frequencyCounter];
        break;
    }
    case 16:
    {
        return digital16[frequencyCounter];
        break;
    }
    case 17:
    {
        return digital17[frequencyCounter];
        break;
    }
    case 18:
    {
        return digital18[frequencyCounter];
        break;
    }
    case 19:
    {
        return digital19[frequencyCounter];
        break;
    }
    case 20:
    {
        return digital20[frequencyCounter];
        break;
    }
    case 21:
    {
        return digital21[frequencyCounter];
        break;
    }
    case 22:
    {
        return digital22[frequencyCounter];
        break;
    }
    case 23:
    {
        return digital23[frequencyCounter];
        break;
    }
    case 24:
    {
        return digital24[frequencyCounter];
        break;
    }
    case 25:
    {
        return digital25[frequencyCounter];
        break;
    }
    case 26:
    {
        return digital26[frequencyCounter];
        break;
    }
    // Sounds von Apager Pro
    case 30:
    {
        return apager_a_a_bbb_[frequencyCounter];
        break;
    }
    case 31:
    {
        return apager_a_b_b_b[frequencyCounter];
        break;
    }
    case 32:
    {
        return apager_aaaabbbb[frequencyCounter];
        break;
    }
    case 33:
    {
        return apager_aaabbb[frequencyCounter];
        break;
    }
    case 34:
    {
        return apager_ab_ac_a_[frequencyCounter];
        break;
    }
    case 35:
    {
        return apager_ab_ba_ab[frequencyCounter];
        break;
    }
    case 36:
    {
        return apager_abababab[frequencyCounter];
        break;
    }
    case 37:
    {
        return apager_abacabac[frequencyCounter];
        break;
    }
    case 38:
    {
        return apager_abc_abc[frequencyCounter];
        break;
    }
    case 39:
    {
        return apager_abc_a_a[frequencyCounter];
        break;
    }
    case 40:
    {
        return apager_abc_cab[frequencyCounter];
        break;
    }
    case 41:
    {
        return apager_ab__ac[frequencyCounter];
        break;
    }
    case 42:
    {
        return apager_acacaccc[frequencyCounter];
        break;
    }
    case 43:
    {
        return apager_ac_c_a[frequencyCounter];
        break;
    }
    case 44:
    {
        return apager_a_a_a_a[frequencyCounter];
        break;
    }
    case 45:
    {
        return apager_a_a_bbb[frequencyCounter];
        break;
    }
    case 46:
    {
        return apager_b_b[frequencyCounter];
        break;
    }
    case 47:
    {
        return apager_b_b_a_b[frequencyCounter];
        break;
    }
    case 48:
    {
        return apager_c_c_abab[frequencyCounter];
        break;
    }
    case 49:
    {
        return apager_c_c_c_c_[frequencyCounter];
        break;
    }
    case 50:
    {
        return apager_cabcabca[frequencyCounter];
        break;
    }
    case 51:
    {
        return apager_cgec[frequencyCounter];
        break;
    }
    case 52:
    {
        return apager_c_c_b_b[frequencyCounter];
        break;
    }
    case 53:
    {
        return apager_c_____[frequencyCounter];
        break;
    }
    case 54:
    {
        return apager_ggh[frequencyCounter];
        break;
    }
    default:
    {
        return 0;
        break;
    }
    }
}
int getDigitalFrequencyLength(int alarmSound, int frequencyCounter)
{
    switch (alarmSound)
    {
    case 1:
    {
        return sizeof(digital01) / sizeof(digital01[frequencyCounter]);
        break;
    }
    case 2:
    {
        return sizeof(digital02) / sizeof(digital02[frequencyCounter]);
        break;
    }
    case 3:
    {
        return sizeof(digital03) / sizeof(digital03[frequencyCounter]);
        break;
    }
    case 4:
    {
        return sizeof(digital04) / sizeof(digital04[frequencyCounter]);
        break;
    }
    case 5:
    {
        return sizeof(digital05) / sizeof(digital05[frequencyCounter]);
        break;
    }
    case 6:
    {
        return sizeof(digital06) / sizeof(digital06[frequencyCounter]);
        break;
    }
    case 7:
    {
        return sizeof(digital07) / sizeof(digital07[frequencyCounter]);
        break;
    }
    case 8:
    {
        return sizeof(digital08) / sizeof(digital08[frequencyCounter]);
        break;
    }
    case 9:
    {
        return sizeof(digital09) / sizeof(digital09[frequencyCounter]);
        break;
    }
    case 10:
    {
        return sizeof(digital10) / sizeof(digital10[frequencyCounter]);
        break;
    }
    case 11:
    {
        return sizeof(digital11) / sizeof(digital11[frequencyCounter]);
        break;
    }
    case 12:
    {
        return sizeof(digital12) / sizeof(digital12[frequencyCounter]);
        break;
    }
    case 13:
    {
        return sizeof(digital13) / sizeof(digital13[frequencyCounter]);
        break;
    }
    case 14:
    {
        return sizeof(digital14) / sizeof(digital14[frequencyCounter]);
        break;
    }
    case 15:
    {
        return sizeof(digital15) / sizeof(digital15[frequencyCounter]);
        break;
    }
    case 16:
    {
        return sizeof(digital16) / sizeof(digital16[frequencyCounter]);
        break;
    }
    case 17:
    {
        return sizeof(digital17) / sizeof(digital17[frequencyCounter]);
        break;
    }
    case 18:
    {
        return sizeof(digital18) / sizeof(digital18[frequencyCounter]);
        break;
    }
    case 19:
    {
        return sizeof(digital19) / sizeof(digital19[frequencyCounter]);
        break;
    }
    case 20:
    {
        return sizeof(digital20) / sizeof(digital20[frequencyCounter]);
        break;
    }
    case 21:
    {
        return sizeof(digital21) / sizeof(digital21[frequencyCounter]);
        break;
    }
    case 22:
    {
        return sizeof(digital22) / sizeof(digital22[frequencyCounter]);
        break;
    }
    case 23:
    {
        return sizeof(digital23) / sizeof(digital23[frequencyCounter]);
        break;
    }
    case 24:
    {
        return sizeof(digital24) / sizeof(digital24[frequencyCounter]);
        break;
    }
    case 25:
    {
        return sizeof(digital25) / sizeof(digital25[frequencyCounter]);
        break;
    }
    case 26:
    {
        return sizeof(digital26) / sizeof(digital26[frequencyCounter]);
        break;
    }
    // Sounds von Apager Pro
    case 30:
    {
        return sizeof(apager_a_a_bbb_) / sizeof(apager_a_a_bbb_[frequencyCounter]);
        break;
    }
    case 31:
    {
        return sizeof(apager_a_b_b_b) / sizeof(apager_a_b_b_b[frequencyCounter]);
        break;
    }
    case 32:
    {
        return sizeof(apager_aaaabbbb) / sizeof(apager_aaaabbbb[frequencyCounter]);
        break;
    }
    case 33:
    {
        return sizeof(apager_aaabbb) / sizeof(apager_aaabbb[frequencyCounter]);
        break;
    }
    case 34:
    {
        return sizeof(apager_ab_ac_a_) / sizeof(apager_ab_ac_a_[frequencyCounter]);
        break;
    }
    case 35:
    {
        return sizeof(apager_ab_ba_ab) / sizeof(apager_ab_ba_ab[frequencyCounter]);
        break;
    }
    case 36:
    {
        return sizeof(apager_abababab) / sizeof(apager_abababab[frequencyCounter]);
        break;
    }
    case 37:
    {
        return sizeof(apager_abacabac) / sizeof(apager_abacabac[frequencyCounter]);
        break;
    }
    case 38:
    {
        return sizeof(apager_abc_abc) / sizeof(apager_abc_abc[frequencyCounter]);
        break;
    }
    case 39:
    {
        return sizeof(apager_abc_a_a) / sizeof(apager_abc_a_a[frequencyCounter]);
        break;
    }
    case 40:
    {
        return sizeof(apager_abc_cab) / sizeof(apager_abc_cab[frequencyCounter]);
        break;
    }
    case 41:
    {
        return sizeof(apager_ab__ac) / sizeof(apager_ab__ac[frequencyCounter]);
        break;
    }
    case 42:
    {
        return sizeof(apager_acacaccc) / sizeof(apager_acacaccc[frequencyCounter]);
        break;
    }
    case 43:
    {
        return sizeof(apager_ac_c_a) / sizeof(apager_ac_c_a[frequencyCounter]);
        break;
    }
    case 44:
    {
        return sizeof(apager_a_a_a_a) / sizeof(apager_a_a_a_a[frequencyCounter]);
        break;
    }
    case 45:
    {
        return sizeof(apager_a_a_bbb) / sizeof(apager_a_a_bbb[frequencyCounter]);
        break;
    }
    case 46:
    {
        return sizeof(apager_b_b) / sizeof(apager_b_b[frequencyCounter]);
        break;
    }
    case 47:
    {
        return sizeof(apager_b_b_a_b) / sizeof(apager_b_b_a_b[frequencyCounter]);
        break;
    }
    case 48:
    {
        return sizeof(apager_c_c_abab) / sizeof(apager_c_c_abab[frequencyCounter]);
        break;
    }
    case 49:
    {
        return sizeof(apager_c_c_c_c_) / sizeof(apager_c_c_c_c_[frequencyCounter]);
        break;
    }
    case 50:
    {
        return sizeof(apager_cabcabca) / sizeof(apager_cabcabca[frequencyCounter]);
        break;
    }
    case 51:
    {
        return sizeof(apager_cgec) / sizeof(apager_cgec[frequencyCounter]);
        break;
    }
    case 52:
    {
        return sizeof(apager_c_c_b_b) / sizeof(apager_c_c_b_b[frequencyCounter]);
        break;
    }
    case 53:
    {
        return sizeof(apager_c_____) / sizeof(apager_c_____[frequencyCounter]);
        break;
    }
    case 54:
    {
        return sizeof(apager_ggh) / sizeof(apager_ggh[frequencyCounter]);
        break;
    }
    default:
    {
        return 0;
        break;
    }
    }
}
/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   2016-05-28 13:48
   Version 4.11.0 (rev ce980c4)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2016-05-28 on yves.more-magic.net (Linux)
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file extras.c
   unit: extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[136];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,54,32,120,56,56,32,105,56,57,32,120,115,57,48,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,115,108,117,114,112,32,112,111,114,116,56,53,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,102,105,108,101,32,46,32,116,109,112,55,48,55,49,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,17),40,114,97,110,100,111,109,105,122,101,32,46,32,110,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,114,97,110,100,111,109,32,110,49,48,50,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,103,49,49,55,32,114,108,49,49,57,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,50,51,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,49,48,53,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,110,115,49,52,56,32,110,49,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,114,101,97,100,32,112,111,114,116,49,52,54,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,108,105,110,101,115,32,46,32,112,111,114,116,45,97,110,100,45,109,97,120,49,52,48,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,108,105,110,101,32,115,116,114,49,53,56,32,46,32,112,111,114,116,49,53,57,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,55,55,32,110,49,55,56,32,109,49,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,57,50,32,110,49,57,51,32,109,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,49,54,55,32,100,101,115,116,49,54,56,32,112,111,114,116,49,54,57,32,115,116,97,114,116,49,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,39),40,114,101,97,100,45,115,116,114,105,110,103,33,32,110,50,49,51,32,100,101,115,116,50,49,52,32,46,32,116,109,112,50,49,50,50,49,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,50,51,52,32,112,50,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,114,101,97,100,45,115,116,114,105,110,103,32,46,32,116,109,112,50,53,56,50,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,27),40,114,101,97,100,45,98,117,102,102,101,114,101,100,32,46,32,116,109,112,50,55,53,50,55,54,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,50,56,53,32,46,32,112,111,114,116,50,56,54,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,51,48,52,32,110,51,49,51,32,112,111,114,116,51,49,52,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,112,111,114,116,51,48,55,32,37,110,51,48,50,51,50,49,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,51,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,115,116,114,105,110,103,32,115,51,48,48,32,46,32,109,111,114,101,51,48,49,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,23),40,114,101,97,100,45,98,121,116,101,32,46,32,116,109,112,51,51,51,51,51,52,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,51,52,56,32,46,32,116,109,112,51,52,55,51,52,57,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,114,101,97,100,45,109,97,99,114,111,63,32,108,51,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,111,117,116,32,115,116,114,52,48,48,32,99,111,108,52,48,49,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,24),40,119,114,45,101,120,112,114,32,101,120,112,114,52,49,50,32,99,111,108,52,49,51,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,52,49,55,32,99,111,108,52,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,119,114,45,108,115,116,32,108,52,49,52,32,99,111,108,52,49,53,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,103,52,53,48,32,97,52,53,50,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,105,52,50,56,32,106,52,50,57,32,99,111,108,52,51,48,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,12),40,103,52,54,49,32,99,110,52,54,51,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,52,55,48,32,105,52,55,50,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,18),40,119,114,32,111,98,106,52,48,52,32,99,111,108,52,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,115,112,97,99,101,115,32,110,53,48,54,32,99,111,108,53,48,55,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,105,110,100,101,110,116,32,116,111,53,48,56,32,99,111,108,53,48,57,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,14),40,97,50,56,49,53,32,115,116,114,53,50,49,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,38),40,112,114,32,111,98,106,53,49,50,32,99,111,108,53,49,51,32,101,120,116,114,97,53,49,52,32,112,112,45,112,97,105,114,53,49,53,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,33),40,112,112,45,101,120,112,114,32,101,120,112,114,53,50,53,32,99,111,108,53,50,54,32,101,120,116,114,97,53,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,44),40,112,112,45,99,97,108,108,32,101,120,112,114,53,51,48,32,99,111,108,53,51,49,32,101,120,116,114,97,53,51,50,32,112,112,45,105,116,101,109,53,51,51,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,41),40,112,112,45,108,105,115,116,32,108,53,51,54,32,99,111,108,53,51,55,32,101,120,116,114,97,53,51,56,32,112,112,45,105,116,101,109,53,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,53,52,55,32,99,111,108,53,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,50),40,112,112,45,100,111,119,110,32,108,53,52,49,32,99,111,108,49,53,52,50,32,99,111,108,50,53,52,51,32,101,120,116,114,97,53,52,52,32,112,112,45,105,116,101,109,53,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,49,32,114,101,115,116,53,54,55,32,99,111,108,49,53,54,56,32,99,111,108,50,53,54,57,32,99,111,108,51,53,55,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,50,32,114,101,115,116,53,55,53,32,99,111,108,49,53,55,54,32,99,111,108,50,53,55,55,32,99,111,108,51,53,55,56,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,31),40,116,97,105,108,51,32,114,101,115,116,53,56,51,32,99,111,108,49,53,56,52,32,99,111,108,50,53,56,53,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,70),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,53,53,55,32,99,111,108,53,53,56,32,101,120,116,114,97,53,53,57,32,110,97,109,101,100,63,53,54,48,32,112,112,45,49,53,54,49,32,112,112,45,50,53,54,50,32,112,112,45,51,53,54,51,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,53,57,54,32,99,111,108,53,57,55,32,101,120,116,114,97,53,57,56,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,35),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,53,57,57,32,99,111,108,54,48,48,32,101,120,116,114,97,54,48,49,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,112,112,45,105,102,32,101,120,112,114,54,48,50,32,99,111,108,54,48,51,32,101,120,116,114,97,54,48,52,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,111,110,100,32,101,120,112,114,54,48,53,32,99,111,108,54,48,54,32,101,120,116,114,97,54,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,97,115,101,32,101,120,112,114,54,48,56,32,99,111,108,54,48,57,32,101,120,116,114,97,54,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,112,112,45,97,110,100,32,101,120,112,114,54,49,49,32,99,111,108,54,49,50,32,101,120,116,114,97,54,49,51,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,32),40,112,112,45,108,101,116,32,101,120,112,114,54,49,52,32,99,111,108,54,49,53,32,101,120,116,114,97,54,49,54,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,34),40,112,112,45,98,101,103,105,110,32,101,120,112,114,54,50,48,32,99,111,108,54,50,49,32,101,120,116,114,97,54,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,31),40,112,112,45,100,111,32,101,120,112,114,54,50,51,32,99,111,108,54,50,52,32,101,120,116,114,97,54,50,53,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,15),40,115,116,121,108,101,32,104,101,97,100,54,50,54,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,112,112,32,111,98,106,52,56,51,32,99,111,108,52,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,53),40,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,51,53,56,32,100,105,115,112,108,97,121,63,51,53,57,32,119,105,100,116,104,51,54,48,32,111,117,116,112,117,116,51,54,49,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,12),40,97,51,51,56,57,32,115,54,56,51,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,30),40,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,54,56,48,32,46,32,111,112,116,54,56,49,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,109,115,103,54,57,53,32,97,114,103,115,54,57,54,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,40),40,102,112,114,105,110,116,102,48,32,108,111,99,54,56,56,32,112,111,114,116,54,56,57,32,109,115,103,54,57,48,32,97,114,103,115,54,57,49,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,35),40,102,112,114,105,110,116,102,32,112,111,114,116,55,51,56,32,102,115,116,114,55,51,57,32,46,32,97,114,103,115,55,52,48,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,26),40,112,114,105,110,116,102,32,102,115,116,114,55,52,50,32,46,32,97,114,103,115,55,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,27),40,115,112,114,105,110,116,102,32,102,115,116,114,55,52,53,32,46,32,97,114,103,115,55,52,54,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,32),40,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,55,52,56,32,46,32,97,114,103,115,55,52,57,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1893)
static void C_fcall f_1893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word *av) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word *av) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_3025)
static void C_fcall f_3025(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3028)
static void C_fcall f_3028(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word *av) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_2698)
static void C_fcall f_2698(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2695)
static void C_fcall f_2695(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word *av) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word *av) C_noret;
C_noret_decl(f_2731)
static void C_fcall f_2731(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1697)
static void C_fcall f_1697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_2500)
static void C_fcall f_2500(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word *av) C_noret;
C_noret_decl(f_2765)
static void C_fcall f_2765(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word *av) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word *av) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3246)
static void C_fcall f_3246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word *av) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word *av) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word *av) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2400)
static void C_fcall f_2400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3221)
static void C_ccall f_3221(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word *av) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1169)
static void C_ccall f_1169(C_word c,C_word *av) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word *av) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word *av) C_noret;
C_noret_decl(f_3236)
static void C_fcall f_3236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_1181)
static void C_ccall f_1181(C_word c,C_word *av) C_noret;
C_noret_decl(f_1219)
static void C_fcall f_1219(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word *av) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word *av) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word *av) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word *av) C_noret;
C_noret_decl(f_1191)
static void C_fcall f_1191(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_fcall f_2917(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word *av) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word *av) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word *av) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word *av) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word *av) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word *av) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word *av) C_noret;
C_noret_decl(f_2637)
static void C_fcall f_2637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word *av) C_noret;
C_noret_decl(f_2208)
static void C_ccall f_2208(C_word c,C_word *av) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word *av) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word *av) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word *av) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word *av) C_noret;
C_noret_decl(f_1201)
static void C_fcall f_1201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word *av) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word *av) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1232)
static void C_ccall f_1232(C_word c,C_word *av) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word *av) C_noret;
C_noret_decl(f_2103)
static void C_fcall f_2103(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2106)
static void C_fcall f_2106(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word *av) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word *av) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word *av) C_noret;
C_noret_decl(f_1536)
static void C_fcall f_1536(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word *av) C_noret;
C_noret_decl(f_1529)
static void C_fcall f_1529(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word *av) C_noret;
C_noret_decl(f_1283)
static void C_fcall f_1283(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_fcall f_2133(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_2045)
static C_word C_fcall f_2045(C_word t0);
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word *av) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word *av) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word *av) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word *av) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word *av) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word *av) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word *av) C_noret;
C_noret_decl(f_2011)
static void C_fcall f_2011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1621)
static void C_fcall f_1621(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word *av) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_1061)
static void C_fcall f_1061(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word *av) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word *av) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word *av) C_noret;
C_noret_decl(f_1356)
static void C_fcall f_1356(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word *av) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word *av) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word *av) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word *av) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word *av) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word *av) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word *av) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word *av) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word *av) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word *av) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word *av) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word *av) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_2151)
static void C_fcall f_2151(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word *av) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word *av) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word *av) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word *av) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word *av) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word *av) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word *av) C_noret;
C_noret_decl(f_2943)
static void C_fcall f_2943(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word *av) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word *av) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word *av) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word *av) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word *av) C_noret;
C_noret_decl(f_2084)
static void C_fcall f_2084(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2952)
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2958)
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word *av) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3106)
static void C_fcall f_3106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word *av) C_noret;
C_noret_decl(f_3474)
static void C_fcall f_3474(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word *av) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word *av) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3405)
static void C_fcall f_3405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word *av) C_noret;
C_noret_decl(f_3401)
static void C_fcall f_3401(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_1980)
static void C_fcall f_1980(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3455)
static void C_fcall f_3455(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_fcall f_1983(C_word t0,C_word t1) C_noret;
C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word *av) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word *av) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word *av) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word *av) C_noret;
C_noret_decl(f_1470)
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word *av) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word *av) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word *av) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word *av) C_noret;
C_noret_decl(f_3439)
static void C_fcall f_3439(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word *av) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word *av) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word *av) C_noret;
C_noret_decl(f_1804)
static void C_fcall f_1804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word *av) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word *av) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word *av) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word *av) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word *av) C_noret;
C_noret_decl(f_3448)
static C_word C_fcall f_3448(C_word t0);
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word *av) C_noret;
C_noret_decl(f_3381)
static void C_fcall f_3381(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word *av) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word *av) C_noret;
C_noret_decl(f_2334)
static void C_fcall f_2334(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1870)
static void C_fcall f_1870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word *av) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word *av) C_noret;
C_noret_decl(f_3652)
static C_word C_fcall f_3652(C_word t0,C_word t1);
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word *av) C_noret;
C_noret_decl(f_1850)
static void C_fcall f_1850(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_2341)
static void C_fcall f_2341(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word *av) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word *av) C_noret;
C_noret_decl(f_1888)
static void C_fcall f_1888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3067)
static void C_fcall f_3067(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;

C_noret_decl(trf_1893)
static void C_ccall trf_1893(C_word c,C_word *av) C_noret;
static void C_ccall trf_1893(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1893(t0,t1);}

C_noret_decl(trf_3025)
static void C_ccall trf_3025(C_word c,C_word *av) C_noret;
static void C_ccall trf_3025(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_3025(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3028)
static void C_ccall trf_3028(C_word c,C_word *av) C_noret;
static void C_ccall trf_3028(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3028(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2698)
static void C_ccall trf_2698(C_word c,C_word *av) C_noret;
static void C_ccall trf_2698(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2698(t0,t1,t2,t3);}

C_noret_decl(trf_2695)
static void C_ccall trf_2695(C_word c,C_word *av) C_noret;
static void C_ccall trf_2695(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2695(t0,t1,t2,t3);}

C_noret_decl(trf_2731)
static void C_ccall trf_2731(C_word c,C_word *av) C_noret;
static void C_ccall trf_2731(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2731(t0,t1,t2,t3);}

C_noret_decl(trf_1697)
static void C_ccall trf_1697(C_word c,C_word *av) C_noret;
static void C_ccall trf_1697(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1697(t0,t1);}

C_noret_decl(trf_2500)
static void C_ccall trf_2500(C_word c,C_word *av) C_noret;
static void C_ccall trf_2500(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2500(t0,t1,t2);}

C_noret_decl(trf_2765)
static void C_ccall trf_2765(C_word c,C_word *av) C_noret;
static void C_ccall trf_2765(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2765(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3246)
static void C_ccall trf_3246(C_word c,C_word *av) C_noret;
static void C_ccall trf_3246(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3246(t0,t1);}

C_noret_decl(trf_2400)
static void C_ccall trf_2400(C_word c,C_word *av) C_noret;
static void C_ccall trf_2400(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2400(t0,t1,t2);}

C_noret_decl(trf_3236)
static void C_ccall trf_3236(C_word c,C_word *av) C_noret;
static void C_ccall trf_3236(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3236(t0,t1,t2);}

C_noret_decl(trf_1219)
static void C_ccall trf_1219(C_word c,C_word *av) C_noret;
static void C_ccall trf_1219(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1219(t0,t1,t2);}

C_noret_decl(trf_1191)
static void C_ccall trf_1191(C_word c,C_word *av) C_noret;
static void C_ccall trf_1191(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1191(t0,t1);}

C_noret_decl(trf_2917)
static void C_ccall trf_2917(C_word c,C_word *av) C_noret;
static void C_ccall trf_2917(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2917(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2637)
static void C_ccall trf_2637(C_word c,C_word *av) C_noret;
static void C_ccall trf_2637(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2637(t0,t1,t2);}

C_noret_decl(trf_1201)
static void C_ccall trf_1201(C_word c,C_word *av) C_noret;
static void C_ccall trf_1201(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1201(t0,t1,t2);}

C_noret_decl(trf_2103)
static void C_ccall trf_2103(C_word c,C_word *av) C_noret;
static void C_ccall trf_2103(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2103(t0,t1,t2,t3);}

C_noret_decl(trf_2106)
static void C_ccall trf_2106(C_word c,C_word *av) C_noret;
static void C_ccall trf_2106(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2106(t0,t1,t2,t3);}

C_noret_decl(trf_1536)
static void C_ccall trf_1536(C_word c,C_word *av) C_noret;
static void C_ccall trf_1536(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1536(t0,t1);}

C_noret_decl(trf_1529)
static void C_ccall trf_1529(C_word c,C_word *av) C_noret;
static void C_ccall trf_1529(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1529(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1283)
static void C_ccall trf_1283(C_word c,C_word *av) C_noret;
static void C_ccall trf_1283(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1283(t0,t1);}

C_noret_decl(trf_2133)
static void C_ccall trf_2133(C_word c,C_word *av) C_noret;
static void C_ccall trf_2133(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2133(t0,t1,t2,t3);}

C_noret_decl(trf_2011)
static void C_ccall trf_2011(C_word c,C_word *av) C_noret;
static void C_ccall trf_2011(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2011(t0,t1);}

C_noret_decl(trf_1621)
static void C_ccall trf_1621(C_word c,C_word *av) C_noret;
static void C_ccall trf_1621(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1621(t0,t1);}

C_noret_decl(trf_1061)
static void C_ccall trf_1061(C_word c,C_word *av) C_noret;
static void C_ccall trf_1061(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1061(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1356)
static void C_ccall trf_1356(C_word c,C_word *av) C_noret;
static void C_ccall trf_1356(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1356(t0,t1,t2,t3);}

C_noret_decl(trf_2151)
static void C_ccall trf_2151(C_word c,C_word *av) C_noret;
static void C_ccall trf_2151(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2151(t0,t1,t2,t3);}

C_noret_decl(trf_2943)
static void C_ccall trf_2943(C_word c,C_word *av) C_noret;
static void C_ccall trf_2943(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2943(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2084)
static void C_ccall trf_2084(C_word c,C_word *av) C_noret;
static void C_ccall trf_2084(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2084(t0,t1,t2,t3);}

C_noret_decl(trf_2952)
static void C_ccall trf_2952(C_word c,C_word *av) C_noret;
static void C_ccall trf_2952(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2952(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2958)
static void C_ccall trf_2958(C_word c,C_word *av) C_noret;
static void C_ccall trf_2958(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2958(t0,t1,t2,t3);}

C_noret_decl(trf_3106)
static void C_ccall trf_3106(C_word c,C_word *av) C_noret;
static void C_ccall trf_3106(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3106(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3474)
static void C_ccall trf_3474(C_word c,C_word *av) C_noret;
static void C_ccall trf_3474(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3474(t0,t1);}

C_noret_decl(trf_3405)
static void C_ccall trf_3405(C_word c,C_word *av) C_noret;
static void C_ccall trf_3405(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3405(t0,t1);}

C_noret_decl(trf_3401)
static void C_ccall trf_3401(C_word c,C_word *av) C_noret;
static void C_ccall trf_3401(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3401(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1980)
static void C_ccall trf_1980(C_word c,C_word *av) C_noret;
static void C_ccall trf_1980(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1980(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3455)
static void C_ccall trf_3455(C_word c,C_word *av) C_noret;
static void C_ccall trf_3455(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3455(t0,t1);}

C_noret_decl(trf_1983)
static void C_ccall trf_1983(C_word c,C_word *av) C_noret;
static void C_ccall trf_1983(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1983(t0,t1);}

C_noret_decl(trf_1470)
static void C_ccall trf_1470(C_word c,C_word *av) C_noret;
static void C_ccall trf_1470(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1470(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3439)
static void C_ccall trf_3439(C_word c,C_word *av) C_noret;
static void C_ccall trf_3439(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3439(t0,t1,t2,t3);}

C_noret_decl(trf_1804)
static void C_ccall trf_1804(C_word c,C_word *av) C_noret;
static void C_ccall trf_1804(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1804(t0,t1);}

C_noret_decl(trf_3381)
static void C_ccall trf_3381(C_word c,C_word *av) C_noret;
static void C_ccall trf_3381(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3381(t0,t1);}

C_noret_decl(trf_2334)
static void C_ccall trf_2334(C_word c,C_word *av) C_noret;
static void C_ccall trf_2334(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2334(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1870)
static void C_ccall trf_1870(C_word c,C_word *av) C_noret;
static void C_ccall trf_1870(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1870(t0,t1);}

C_noret_decl(trf_1850)
static void C_ccall trf_1850(C_word c,C_word *av) C_noret;
static void C_ccall trf_1850(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1850(t0,t1,t2,t3);}

C_noret_decl(trf_2341)
static void C_ccall trf_2341(C_word c,C_word *av) C_noret;
static void C_ccall trf_2341(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2341(t0,t1);}

C_noret_decl(trf_1888)
static void C_ccall trf_1888(C_word c,C_word *av) C_noret;
static void C_ccall trf_1888(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1888(t0,t1,t2);}

C_noret_decl(trf_3067)
static void C_ccall trf_3067(C_word c,C_word *av) C_noret;
static void C_ccall trf_3067(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3067(t0,t1,t2,t3,t4,t5);}

/* def-n306 in write-string in k1026 in k1023 */
static void C_fcall f_1893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,2))){
C_save_and_reclaim_args((void *)trf_1893,2,t0,t1);}
/* extras.scm:236: def-port307 */
t2=((C_word*)t0)[2];
f_1888(t2,t1,C_SCHEME_FALSE);}

/* k3047 in tail1 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_3049,2,av);}
/* extras.scm:488: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3067(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k1865 in body304 in write-string in k1026 in k1023 */
static void C_ccall f_1867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_1867,2,av);}
/* extras.scm:236: g315 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* pp-let in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,8))){C_save_and_reclaim((void *)f_3201,5,av);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_i_symbolp(t6);
/* extras.scm:533: pp-general */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3025(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:533: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3025(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* k2614 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2616,2,av);}
/* extras.scm:384: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3009 in loop in pp-down in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,5))){C_save_and_reclaim((void *)f_3011,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:476: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2765(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* k3017 in loop in pp-down in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3019,2,av);}
/* extras.scm:477: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2731(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2601 in k2594 in k2591 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2603,2,av);}
/* extras.scm:383: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pp-general in pp in generic-write in k1026 in k1023 */
static void C_fcall f_3025(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(42,0,6))){
C_save_and_reclaim_args((void *)trf_3025,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(42);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3028,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3067,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=t18;
t20=t2;
t21=C_u_i_cdr(t20);
t22=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3117,a[2]=t5,a[3]=t21,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3163,a[2]=((C_word*)t0)[5],a[3]=t22,a[4]=t19,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:504: out */
t24=((C_word*)((C_word*)t0)[6])[1];
f_2084(t24,t23,lf[99],t3);}

/* k3021 in loop in pp-down in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3023,2,av);}
/* extras.scm:477: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[97],t1);}

/* tail1 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_fcall f_3028(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(18,0,5))){
C_save_and_reclaim_args((void *)trf_3028,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(18);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[5],a[3]=t14,a[4]=t8,a[5]=t13,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:488: indent */
t16=((C_word*)((C_word*)t0)[6])[1];
f_2731(t16,t15,t5,t4);}
else{
/* extras.scm:489: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3067(t7,t1,t2,t3,t4,t5);}}

/* k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_2609,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(3));
/* extras.scm:384: string-append */
t4=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[77];
av2[3]=t3;
av2[4]=lf[78];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:386: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2084(t3,t2,lf[81],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:396: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2084(t3,t2,lf[84],((C_word*)t0)[4]);}
else{
/* extras.scm:399: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[85],((C_word*)t0)[4]);}}}}

/* pp-expr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(14,c,2))){C_save_and_reclaim((void *)f_2852,5,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2859,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:433: read-macro? */
f_1983(t5,t2);}

/* k1099 in read-file in k1026 in k1023 */
static void C_ccall f_1101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_1101,2,av);}
if(C_truep(t1)){
/* extras.scm:52: slurp */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
f_1051(3,av2);}}
else{
/* extras.scm:53: call-with-input-file */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2857 in pp-expr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(10,c,5))){C_save_and_reclaim((void *)f_2859,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t6=f_2045(((C_word*)t0)[2]);
/* extras.scm:435: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_2084(t7,t5,t6,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:440: style */
t5=((C_word*)((C_word*)t0)[12])[1];
f_3236(t5,t4,t3);}
else{
/* extras.scm:447: pp-list */
t4=((C_word*)((C_word*)t0)[13])[1];
f_2943(t4,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k2662 in k2648 in doloop470 in k2624 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2664,2,av);}
/* extras.scm:393: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3005 in loop in pp-down in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3007,2,av);}
/* extras.scm:475: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[96],t1);}

/* spaces in pp in generic-write in k1026 in k1023 */
static void C_fcall f_2698(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,0,4))){
C_save_and_reclaim_args((void *)trf_2698,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_a_i_minus(&a,2,t2,C_fix(8));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:406: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2084(t7,t6,lf[87],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:407: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t4;
av2[2]=lf[88];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* pp in generic-write in k1026 in k1023 */
static void C_fcall f_2695(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(152,0,9))){
C_save_and_reclaim_args((void *)trf_2695,4,t0,t1,t2,t3);}
a=C_alloc(152);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2698,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2731,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li42),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2852,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li43),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2917,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2943,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2952,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3025,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3165,a[2]=t15,a[3]=t11,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3171,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3177,a[2]=t19,a[3]=t11,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3183,a[2]=t13,a[3]=t21,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3189,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3195,a[2]=t13,a[3]=t11,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3201,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3221,a[2]=t19,a[3]=t11,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3227,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3236,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li61),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:561: pr */
t58=((C_word*)t9)[1];
f_2765(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* k2752 in indent in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2754,2,av);}
/* extras.scm:413: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2684 in k2674 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2686,2,av);}
/* extras.scm:397: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* indent in pp in generic-write in k1026 in k1023 */
static void C_fcall f_2731(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(10,0,3))){
C_save_and_reclaim_args((void *)trf_2731,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t5;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
t4=C_a_i_minus(&a,2,t2,t3);
/* extras.scm:414: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2698(t5,t1,t4,t3);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in k1690 in k1687 in read-string/port in k1026 in k1023 */
static void C_fcall f_1697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,0,5))){
C_save_and_reclaim_args((void *)trf_1697,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1701,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:192: ##sys#read-string! */
t3=*((C_word*)lf[22]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(2048);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k1690 in k1687 in read-string/port in k1026 in k1023 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_1692,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1697(t6,((C_word*)t0)[4]);}

/* g461 in k2494 in k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2500(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,3))){
C_save_and_reclaim_args((void *)trf_2500,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* extras.scm:368: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2084(t4,t1,t3,((C_word*)t0)[3]);}

/* k3745 in format in k3373 in k1026 in k1023 */
static void C_ccall f_3747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3747,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}

/* pr in pp in generic-write in k1026 in k1023 */
static void C_fcall f_2765(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(26,0,3))){
C_save_and_reclaim_args((void *)trf_2765,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(26);
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2778,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_a_i_minus(&a,2,t11,t4);
t13=C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:419: max */
t14=*((C_word*)lf[91]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t10;
av2[2]=t13;
av2[3]=C_fix(50);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
/* extras.scm:430: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2103(t8,t1,t2,t3);}}

/* format in k3373 in k1026 in k1023 */
static void C_ccall f_3739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,3))){
C_save_and_reclaim((void*)f_3739,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3747,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
if(C_truep(t6)){
if(C_truep(C_booleanp(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[127]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t7=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t8=C_set_block_item(t4,0,t7);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[128]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3772,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:649: output-port? */
t8=*((C_word*)lf[131]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}
else{{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[128]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}}

/* k2573 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2575,2,av);}
/* extras.scm:377: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* randomize in k1026 in k1023 */
static void C_ccall f_1145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,2))){
C_save_and_reclaim((void*)f_1145,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1163,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:60: current-seconds */
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_check_exact_2(t4,lf[6]);
t6=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=C_randomize(t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k2624 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(15,c,3))){C_save_and_reclaim((void *)f_2626,2,av);}
a=C_alloc(15);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2637,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_2637(t8,t4,C_fix(0));}

/* sprintf in k3373 in k1026 in k1023 */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5))){
C_save_and_reclaim((void*)f_3733,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:642: fprintf0 */
f_3401(t1,lf[128],C_SCHEME_FALSE,t2,t3);}

/* k3244 in style in pp in generic-write in k1026 in k1023 */
static void C_fcall f_3246(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,1))){
C_save_and_reclaim_args((void *)trf_3246,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[101]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[102]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[103]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[104]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[105]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[106]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)((C_word*)t0)[8])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[107]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)((C_word*)t0)[9])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[4],lf[108]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=((C_word*)((C_word*)t0)[10])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[109]);
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}}}}

/* k2651 in k2648 in doloop470 in k2624 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_2653,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2637(t3,((C_word*)t0)[4],t2);}

/* k2648 in doloop470 in k2624 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_2650,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2664,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:393: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1147 in randomize in k1026 in k1023 */
static void C_ccall f_1149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_1149,2,av);}
t2=C_i_check_exact_2(t1,lf[6]);
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_randomize(t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2416 in k2392 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_2418,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_u_i_char_lessp(((C_word*)t0)[4],C_make_character(16)))?lf[60]:lf[61]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:358: out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2084(t7,t6,lf[62],((C_word*)t0)[5]);}

/* k1161 in randomize in k1026 in k1023 */
static void C_ccall f_1163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,2))){C_save_and_reclaim((void *)f_1163,2,av);}
a=C_alloc(4);
t2=C_a_i_flonum_quotient(&a,2,t1,lf[7]);
/* extras.scm:60: ##sys#flo2fix */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

/* k2594 in k2591 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_2596,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:383: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2591 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_2593,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:382: ##sys#user-print-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t2;
tp(5,av2);}}

/* g450 in k2392 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2400(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,3))){
C_save_and_reclaim_args((void *)trf_2400,3,t0,t1,t2);}
t3=C_i_cdr(t2);
/* extras.scm:354: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2084(t4,t1,t3,((C_word*)t0)[3]);}

/* pp-begin in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,8))){C_save_and_reclaim((void *)f_3221,5,av);}
/* extras.scm:536: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3025(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-do in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,8))){C_save_and_reclaim((void *)f_3227,5,av);}
/* extras.scm:539: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3025(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k2677 in k2674 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2679,2,av);}
/* extras.scm:398: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[82],((C_word*)t0)[4]);}

/* random in k1026 in k1023 */
static void C_ccall f_1169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_1169,3,av);}
t3=C_i_check_exact_2(t2,lf[10]);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_random_fixnum(t2);
t6=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k2674 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(10,c,2))){C_save_and_reclaim((void *)f_2676,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2686,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:397: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k1212 in k1189 in read-line in k1026 in k1023 */
static void C_ccall f_1214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(12,c,3))){C_save_and_reclaim((void *)f_1214,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1219,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1219(t7,((C_word*)t0)[5],C_fix(0));}

/* style in pp in generic-write in k1026 in k1023 */
static void C_fcall f_3236(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(12,0,2))){
C_save_and_reclaim_args((void *)trf_3236,3,t0,t1,t2);}
a=C_alloc(12);
t3=t2;
t4=C_eqp(t3,lf[100]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3246,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t4)){
t6=t5;
f_3246(t6,t4);}
else{
t6=C_eqp(t3,lf[110]);
if(C_truep(t6)){
t7=t5;
f_3246(t7,t6);}
else{
t7=C_eqp(t3,lf[111]);
if(C_truep(t7)){
t8=t5;
f_3246(t8,t7);}
else{
t8=C_eqp(t3,lf[112]);
t9=t5;
f_3246(t9,(C_truep(t8)?t8:C_eqp(t3,lf[113])));}}}}

/* k2534 in k2494 in k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_2536,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:374: number->string */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* read-line in k1026 in k1023 */
static void C_ccall f_1181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2))){
C_save_and_reclaim((void*)f_1181,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):*((C_word*)lf[2]+1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1191,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=C_i_cdr(t2);
t8=C_i_pairp(t7);
t9=t6;
f_1191(t9,(C_truep(t8)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t7=t6;
f_1191(t7,C_SCHEME_FALSE);}}

/* loop in k1212 in k1189 in read-line in k1026 in k1023 */
static void C_fcall f_1219(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,0,4))){
C_save_and_reclaim_args((void *)trf_1219,3,t0,t1,t2);}
a=C_alloc(8);
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:87: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1232,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:88: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k3086 in tail2 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3088,2,av);}
/* extras.scm:496: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3106(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2460 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2462,2,av);}
/* extras.scm:361: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2518 in k2494 in k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_2520,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:371: number->string */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2525 in k2518 in k2494 in k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2527,2,av);}
/* extras.scm:371: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1189 in read-line in k1026 in k1023 */
static void C_fcall f_1191(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,0,3))){
C_save_and_reclaim_args((void *)trf_1191,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=C_i_check_port_2(((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[11]);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=C_slot(t4,C_fix(8));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1201,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:81: g117 */
t7=t6;
f_1201(t7,((C_word*)t0)[3],t5);}
else{
t6=(C_truep(t2)?t2:C_fix(256));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1214,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:84: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t9;
av2[2]=((C_word*)t8)[1];
tp(3,av2);}}}

/* pp-call in pp in generic-write in k1026 in k1023 */
static void C_fcall f_2917(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(13,0,3))){
C_save_and_reclaim_args((void *)trf_2917,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2921,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2941,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:453: out */
t10=((C_word*)((C_word*)t0)[4])[1];
f_2084(t10,t9,lf[93],t3);}

/* k2910 in k2884 in k2857 in pp-expr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,8))){C_save_and_reclaim((void *)f_2912,2,av);}
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:445: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3025(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:446: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2917(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,c,2))){C_save_and_reclaim((void *)f_2493,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:366: char-name */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2494 in k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_2496,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:366: g461 */
t3=t2;
f_2500(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:370: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2084(t3,t2,lf[66],((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(65535)))){
/* extras.scm:373: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2084(t3,t2,lf[67],((C_word*)t0)[3]);}
else{
/* extras.scm:373: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2084(t3,t2,lf[68],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[6];
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=t3;
tp(4,av2);}}}}}

/* k2555 in k2494 in k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2557,2,av);}
/* extras.scm:375: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2483 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2485,2,av);}
/* extras.scm:363: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2541 in k2534 in k2494 in k2491 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2543,2,av);}
/* extras.scm:374: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2630 in k2624 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2632,2,av);}
/* extras.scm:394: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[79],((C_word*)t0)[4]);}

/* doloop470 in k2624 in k2607 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,0,3))){
C_save_and_reclaim_args((void *)trf_2637,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_subbyte(((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2650,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(16)))){
/* extras.scm:392: out */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2084(t6,t5,lf[80],((C_word*)t0)[6]);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2650(2,av2);}}}}

/* k2428 in k2416 in k2392 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2430,2,av);}
/* extras.scm:357: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2206 in wr-lst in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2208,2,av);}
/* extras.scm:306: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2103(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2420 in k2416 in k2392 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2422,2,av);}
/* extras.scm:356: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2456 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2458,2,av);}
/* extras.scm:360: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[64],t1);}

/* k2919 in pp-call in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,6))){C_save_and_reclaim((void *)f_2921,2,av);}
a=C_alloc(4);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:455: pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2952(t5,((C_word*)t0)[5],t3,t1,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2438 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2440,2,av);}
/* extras.scm:344: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* g117 in k1189 in read-line in k1026 in k1023 */
static void C_fcall f_1201(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,3))){
C_save_and_reclaim_args((void *)trf_1201,3,t0,t1,t2);}
/* extras.scm:81: rl */
t3=t2;{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k1295 in k1230 in loop in k1212 in k1189 in read-line in k1026 in k1023 */
static void C_ccall f_1297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_1297,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
f_1283(t5,t4);}

/* k2279 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2281,2,av);}
/* extras.scm:319: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_2274,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:319: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:321: open-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:324: ##sys#procedure->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:327: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:328: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2084(t3,t2,lf[65],((C_word*)t0)[4]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=t3;
tp(4,av2);}}
else{
t2=C_fix(C_character_code(((C_word*)t0)[5]));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:365: out */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2084(t5,t4,lf[70],((C_word*)t0)[4]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm:376: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[71],((C_word*)t0)[4]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:377: ##sys#pointer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t2=C_slot(lf[73],C_fix(0));
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
/* extras.scm:379: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2084(t4,((C_word*)t0)[3],lf[74],((C_word*)t0)[4]);}
else{
if(C_truep(C_structurep(((C_word*)t0)[5]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:381: open-output-string */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:384: port? */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}}}}}}}}

/* k1230 in loop in k1212 in k1189 in read-line in k1026 in k1023 */
static void C_ccall f_1232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(16,c,4))){C_save_and_reclaim((void *)f_1232,2,av);}
a=C_alloc(16);
t2=t1;
if(C_truep(C_eofp(t2))){
t3=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* extras.scm:92: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}
else{
switch(t2){
case C_make_character(10):
/* extras.scm:94: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}
case C_make_character(13):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:96: peek-char */
t4=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1283,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1297,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1305,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:104: make-string */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=t3;
f_1283(t4,C_SCHEME_UNDEFINED);}}}}

/* k3090 in tail2 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_3092,2,av);}
/* extras.scm:496: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2765(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* wr in generic-write in k1026 in k1023 */
static void C_fcall f_2103(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(22,0,4))){
C_save_and_reclaim_args((void *)trf_2103,4,t0,t1,t2,t3);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li31),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:314: wr-expr */
t9=t4;
f_2106(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:315: wr-lst */
t9=((C_word*)t6)[1];
f_2133(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:316: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2084(t9,t1,lf[50],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2251,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:317: vector->list */
t10=*((C_word*)lf[52]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:318: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2084(t9,t1,lf[53],t3);}
else{
/* extras.scm:318: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2084(t9,t1,lf[54],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2274,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:319: ##sys#number? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[86]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[86]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}}}}}}

/* wr-expr in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2106(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_2106,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2113,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:299: read-macro? */
f_1983(t4,t2);}

/* k2171 in loop in k2147 in wr-lst in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2173,2,av);}
/* extras.scm:309: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2177 in loop in k2147 in wr-lst in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2179,2,av);}
/* extras.scm:309: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2103(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1263 in k1230 in loop in k1212 in k1189 in read-line in k1026 in k1023 */
static void C_ccall f_1265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,4))){C_save_and_reclaim((void *)f_1265,2,av);}
a=C_alloc(5);
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:98: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:100: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* k1303 in k1230 in loop in k1212 in k1189 in read-line in k1026 in k1023 */
static void C_ccall f_1305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_1305,2,av);}
/* extras.scm:104: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
tp(4,av2);}}

/* k1534 in k1531 in loop in read-string! in k1026 in k1023 */
static void C_fcall f_1536(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,4))){
C_save_and_reclaim_args((void *)trf_1536,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[5],t1);
t6=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=C_fixnum_plus(((C_word*)t0)[2],t1);
/* extras.scm:164: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1529(t8,((C_word*)t0)[3],t5,t6,t7);}
else{
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k1531 in loop in read-string! in k1026 in k1023 */
static void C_ccall f_1533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,c,2))){C_save_and_reclaim((void *)f_1533,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1536(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[5],t1);
t4=t2;
f_1536(t4,C_fix(1));}}

/* loop in read-string! in k1026 in k1023 */
static void C_fcall f_1529(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,0,2))){
C_save_and_reclaim_args((void *)trf_1529,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1533,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:156: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1272 in k1263 in k1230 in loop in k1212 in k1189 in read-line in k1026 in k1023 */
static void C_ccall f_1274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_1274,2,av);}
/* extras.scm:99: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k2111 in wr-expr in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_2113,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=f_2045(((C_word*)t0)[2]);
/* extras.scm:300: out */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2084(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* extras.scm:301: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2133(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k1281 in k1230 in loop in k1212 in k1189 in read-line in k1026 in k1023 */
static void C_fcall f_1283(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,2))){
C_save_and_reclaim_args((void *)trf_1283,2,t0,t1);}
t2=C_setsubchar(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:107: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1219(t4,((C_word*)t0)[6],t3);}

/* wr-lst in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2133(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(11,0,3))){
C_save_and_reclaim_args((void *)trf_2133,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=t2;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2208,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:306: out */
t10=((C_word*)((C_word*)t0)[3])[1];
f_2084(t10,t9,lf[48],t3);}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_2149(2,av2);}}}
else{
/* extras.scm:312: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2084(t4,t1,lf[49],t3);}}

/* slurp in read-file in k1026 in k1023 */
static void C_ccall f_1051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,c,2))){C_save_and_reclaim((void *)f_1051,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:47: reader */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1057 in slurp in read-file in k1026 in k1023 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,c,5))){C_save_and_reclaim((void *)f_1059,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1061,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1061(t5,((C_word*)t0)[5],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* read-macro-prefix in generic-write in k1026 in k1023 */
static C_word C_fcall f_2045(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t2=C_i_car(t1);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[36]);
if(C_truep(t5)){
return(lf[40]);}
else{
t6=C_eqp(t2,lf[37]);
if(C_truep(t6)){
return(lf[41]);}
else{
t7=C_eqp(t2,lf[38]);
if(C_truep(t7)){
return(lf[42]);}
else{
t8=C_eqp(t2,lf[39]);
return((C_truep(t8)?lf[43]:C_SCHEME_UNDEFINED));}}}}

/* k2122 in k2111 in wr-expr in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2124,2,av);}
/* extras.scm:300: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2103(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1023 */
static void C_ccall f_1025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_1025,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:37: register-feature! */
t3=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[135];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1026 in k1023 */
static void C_ccall f_1028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(52,c,6))){C_save_and_reclaim((void *)f_1028,2,av);}
a=C_alloc(52);
t2=*((C_word*)lf[0]+1);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! read-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1030,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2((C_word*)lf[6]+1 /* (set! randomize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1145,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[10]+1 /* (set! random ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1169,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[11]+1 /* (set! read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1181,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[18]+1 /* (set! read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1334,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[19]+1 /* (set! write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1424,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1452,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[23]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1584,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[24]+1 /* (set! ##sys#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[25]+1 /* (set! read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[29]+1 /* (set! read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1761,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[31]+1 /* (set! read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1789,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[27]+1 /* (set! write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1845,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[33]+1 /* (set! read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1928,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[34]+1 /* (set! write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1955,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[35] /* (set! generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1980,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:570: make-parameter */
t20=*((C_word*)lf[134]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=C_fix(79);
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}

/* read-string! in k1026 in k1023 */
static void C_ccall f_1584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +10,c,2))){
C_save_and_reclaim((void*)f_1584,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+10);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[2]+1):C_i_car(t4));
t8=t7;
t9=C_i_nullp(t4);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):C_i_car(t10));
t13=t12;
t14=C_i_nullp(t10);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t16=C_i_check_port_2(t8,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[23]);
t17=C_i_check_string_2(t3,lf[23]);
t18=(C_truep(((C_word*)t5)[1])?C_i_check_exact_2(((C_word*)t5)[1],lf[23]):C_SCHEME_UNDEFINED);
t19=C_block_size(t3);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1621,a[2]=t13,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t8,a[7]=t20,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t5)[1])){
t22=C_fixnum_plus(t13,((C_word*)t5)[1]);
t23=t21;
f_1621(t23,C_fixnum_less_or_equal_p(t22,t20));}
else{
t22=t21;
f_1621(t22,C_SCHEME_FALSE);}}

/* k3510 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3512,2,av);}
/* extras.scm:608: write */
t2=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2147 in wr-lst in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,c,4))){C_save_and_reclaim((void *)f_2149,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2151,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2151(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2291 in k2288 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_2293,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:323: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2288 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_2290,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:322: ##sys#print */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2009 in read-macro? in generic-write in k1026 in k1023 */
static void C_fcall f_2011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,1))){
C_save_and_reclaim_args((void *)trf_2011,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_nullp(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1619 in read-string! in k1026 in k1023 */
static void C_fcall f_1621(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,5))){
C_save_and_reclaim_args((void *)trf_1621,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[23]);
/* extras.scm:175: ##sys#read-string! */
t3=*((C_word*)lf[22]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_i_check_exact_2(((C_word*)t0)[2],lf[23]);
/* extras.scm:175: ##sys#read-string! */
t5=*((C_word*)lf[22]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* k2792 in k2779 in k2776 in pr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2794,2,av);}
/* extras.scm:426: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* read-lines in k1026 in k1023 */
static void C_ccall f_1334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3))){
C_save_and_reclaim((void*)f_1334,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_slot(t2,C_fix(0)):*((C_word*)lf[2]+1));
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1346,a[2]=t9,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(t4))){
/* extras.scm:124: call-with-input-file */
t11=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t1;
av2[2]=t4;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t11=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[18]);
/* extras.scm:127: doread */
t12=t10;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t4;
f_1346(3,av2);}}}

/* k3583 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3585,2,av);}
/* extras.scm:613: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* doloop86 in k1057 in slurp in read-file in k1026 in k1023 */
static void C_fcall f_1061(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,0,2))){
C_save_and_reclaim_args((void *)trf_1061,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:50: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1081,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:47: reader */
t8=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}}

/* k3587 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3589,2,av);}
/* extras.scm:613: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(16);
tp(4,av2);}}

/* k2197 in loop in k2147 in wr-lst in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2199,2,av);}
/* extras.scm:311: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2103(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2193 in loop in k2147 in wr-lst in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2195,2,av);}
/* extras.scm:311: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[46],t1);}

/* loop in doread in read-lines in k1026 in k1023 */
static void C_fcall f_1356(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_1356,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:118: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1369,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:119: read-line */
t6=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k2776 in pr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(19,c,5))){C_save_and_reclaim((void *)f_2778,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2781,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:420: generic-write */
f_1980(t4,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t5);}

/* k2249 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_2251,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:317: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2084(t4,t3,lf[51],((C_word*)t0)[5]);}

/* k2253 in k2249 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2255,2,av);}
/* extras.scm:317: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2133(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1079 in doloop86 in k1057 in slurp in read-file in k1026 in k1023 */
static void C_ccall f_1081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(3,c,4))){C_save_and_reclaim((void *)f_1081,2,av);}
a=C_alloc(3);
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[5])[1];
f_1061(t4,((C_word*)t0)[6],t1,t2,t3);}

/* k3566 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3568,2,av);}
/* extras.scm:612: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a2815 in k2776 in pr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,c,1))){C_save_and_reclaim((void *)f_2816,3,av);}
a=C_alloc(7);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t8;
av2[1]=C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k2812 in k2808 in k2779 in k2776 in pr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_2814,2,av);}
/* extras.scm:429: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2943(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k2779 in k2776 in pr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,c,4))){C_save_and_reclaim((void *)f_2781,2,av);}
a=C_alloc(8);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:426: reverse-string-append */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:428: pp-pair */
t2=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2810,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:429: vector->list */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k2808 in k2779 in k2776 in pr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_2810,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:429: out */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2084(t4,t3,lf[90],((C_word*)t0)[7]);}

/* ##sys#read-string/port in k1026 in k1023 */
static void C_ccall f_1661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_1661,4,av);}
a=C_alloc(5);
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[25]);
if(C_truep(t2)){
t6=C_i_check_exact_2(t2,lf[25]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1674,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:183: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1689,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:189: open-output-string */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3570 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3572,2,av);}
/* extras.scm:612: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(8);
tp(4,av2);}}

/* printf in k3373 in k1026 in k1023 */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5))){
C_save_and_reclaim((void*)f_3727,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:639: fprintf0 */
f_3401(t1,lf[127],*((C_word*)lf[20]+1),t2,t3);}

/* fprintf in k3373 in k1026 in k1023 */
static void C_ccall f_3721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,5))){
C_save_and_reclaim((void*)f_3721,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
/* extras.scm:636: fprintf0 */
f_3401(t1,lf[126],t2,t3,t4);}

/* k2745 in indent in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2747,2,av);}
if(C_truep(t1)){
/* extras.scm:413: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2698(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3409 in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,2))){C_save_and_reclaim((void *)f_3411,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:633: get-output-string */
t5=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
/* extras.scm:631: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1672 in read-string/port in k1026 in k1023 */
static void C_ccall f_1674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,5))){C_save_and_reclaim((void *)f_1674,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:184: ##sys#read-string! */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k1675 in k1672 in read-string/port in k1026 in k1023 */
static void C_ccall f_1677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_1677,2,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* extras.scm:187: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* loop in k2147 in wr-lst in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2151(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(10,0,3))){
C_save_and_reclaim_args((void *)trf_2151,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=t3;
if(C_truep(t4)){
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_u_i_car(t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:309: out */
t11=((C_word*)((C_word*)t0)[4])[1];
f_2084(t11,t10,lf[44],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:310: out */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2084(t5,t1,lf[45],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:311: out */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2084(t7,t6,lf[47],t3);}}}
else{
t5=t3;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3708 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3710,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3408(2,av2);}}
else{
/* extras.scm:587: open-output-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1687 in read-string/port in k1026 in k1023 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_1689,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1692,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t3;
av2[2]=C_fix(2048);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3549 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3551,2,av);}
/* extras.scm:611: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3553 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3555,2,av);}
/* extras.scm:611: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k1367 in loop in doread in read-lines in k1026 in k1023 */
static void C_ccall f_1369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(3,c,3))){C_save_and_reclaim((void *)f_1369,2,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
/* extras.scm:121: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm:122: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1356(t4,((C_word*)t0)[2],t2,t3);}}

/* k2727 in spaces in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2729,2,av);}
/* extras.scm:407: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2720 in spaces in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2722,2,av);}
/* extras.scm:406: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2698(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3523 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3525,2,av);}
/* extras.scm:609: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2092 in out in generic-write in k1026 in k1023 */
static void C_ccall f_2094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,1))){C_save_and_reclaim((void *)f_2094,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_a_i_plus(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* pp-list in pp in generic-write in k1026 in k1023 */
static void C_fcall f_2943(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,0,3))){
C_save_and_reclaim_args((void *)trf_2943,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2947,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:461: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2084(t7,t6,lf[94],t3);}

/* k2945 in pp-list in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,6))){C_save_and_reclaim((void *)f_2947,2,av);}
/* extras.scm:462: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2952(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2983 in loop in pp-down in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_2985,2,av);}
/* extras.scm:471: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2765(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* read-byte in k1026 in k1023 */
static void C_ccall f_1928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2))){
C_save_and_reclaim((void*)f_1928,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[33]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1938,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:250: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=t4;
tp(3,av2);}}

/* k2939 in pp-call in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2941,2,av);}
/* extras.scm:453: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2103(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3536 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3538,2,av);}
/* extras.scm:610: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1797 in read-token in k1026 in k1023 */
static void C_ccall f_1799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_1799,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1804,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1804(t6,((C_word*)t0)[4]);}

/* write-line in k1026 in k1023 */
static void C_ccall f_1424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3))){
C_save_and_reclaim((void*)f_1424,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[20]+1):C_slot(t3,C_fix(0)));
t5=t4;
t6=C_i_check_port_2(t5,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);
t7=C_i_check_string_2(t2,lf[19]);
t8=C_slot(t5,C_fix(2));
t9=C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1440,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:130: g161 */
t11=t9;{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t5;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t11))(4,av2);}}

/* out in generic-write in k1026 in k1023 */
static void C_fcall f_2084(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_2084,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2094,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:294: output */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* pp-down in pp in generic-write in k1026 in k1023 */
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(12,0,4))){
C_save_and_reclaim_args((void *)trf_2952,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2958,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2958(t10,t1,t2,t3);}

/* loop in pp-down in pp in generic-write in k1026 in k1023 */
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(20,0,3))){
C_save_and_reclaim_args((void *)trf_2958,4,t0,t1,t2,t3);}
a=C_alloc(20);
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t2;
t11=C_u_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[4],a[3]=t9,a[4]=t11,a[5]=t8,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:471: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_2731(t13,t12,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:473: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2084(t4,t1,lf[95],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3007,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:477: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2731(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1936 in read-byte in k1026 in k1023 */
static void C_ccall f_1938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_1938,2,av);}
t2=C_eofp(t1);
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=(C_truep(t2)?t1:C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* read-file in k1026 in k1023 */
static void C_ccall f_1030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,3))){
C_save_and_reclaim((void*)f_1030,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+10);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?((C_word*)t0)[2]:C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=t14;
t16=C_i_nullp(t12);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1051,a[2]=t15,a[3]=t10,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1101,a[2]=t18,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:51: port? */
t20=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}

/* tail3 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_fcall f_3106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,6))){
C_save_and_reclaim_args((void *)trf_3106,5,t0,t1,t2,t3,t4);}
/* extras.scm:500: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2952(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1438 in write-line in k1026 in k1023 */
static void C_ccall f_1440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_1440,2,av);}
/* extras.scm:137: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_fcall f_3474(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
loop:
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(11,0,4))){
C_save_and_reclaim_args((void *)trf_3474,2,t0,t1);}
a=C_alloc(11);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=f_3448(((C_word*)((C_word*)t0)[4])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3487,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_3448(((C_word*)((C_word*)t0)[4])[1]);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3512,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:608: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3455(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3525,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:609: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3455(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3538,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:610: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3455(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3551,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3555,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:611: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3455(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3568,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3572,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:612: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3455(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3585,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3589,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:613: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3455(t10,t9);
case C_make_character(33):
/* extras.scm:614: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[122]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[122]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3607,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:616: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3455(t9,t8);
case C_make_character(126):
/* extras.scm:620: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t3;
av2[2]=C_make_character(126);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:621: newline */
t10=*((C_word*)lf[123]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=f_3448(((C_word*)((C_word*)t0)[4])[1]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3652,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t12=f_3652(t11,t10);
/* extras.scm:630: loop */
t24=t1;
t1=t24;
goto loop;}
else{
/* extras.scm:628: ##sys#error */
t10=*((C_word*)lf[119]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[124];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}
else{
/* extras.scm:629: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}

/* k1699 in loop in k1690 in k1687 in read-string/port in k1026 in k1023 */
static void C_ccall f_1701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,4))){C_save_and_reclaim((void *)f_1701,2,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:195: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1713,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:197: write-string */
t4=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* read-string in k1026 in k1023 */
static void C_ccall f_1719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,3))){
C_save_and_reclaim((void*)f_1719,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[2]+1):C_i_car(t6));
if(C_truep(C_i_nullp(t6))){
/* extras.scm:201: ##sys#read-string/port */
t9=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t4;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t9=C_i_cdr(t6);
/* extras.scm:201: ##sys#read-string/port */
t10=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t1;
av2[2]=t4;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* write-byte in k1026 in k1023 */
static void C_ccall f_1955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,3))){
C_save_and_reclaim((void*)f_1955,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[20]+1):C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[34]);
t7=C_i_check_port_2(t5,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[34]);
t8=C_make_character(C_unfix(t2));
/* extras.scm:258: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t1;
av2[2]=t8;
av2[3]=t5;
tp(4,av2);}}

/* k2977 in loop in pp-down in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2979,2,av);}
/* extras.scm:470: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2958(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#read-string! in k1026 in k1023 */
static void C_ccall f_1452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,c,5))){C_save_and_reclaim((void *)f_1452,6,av);}
a=C_alloc(9);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_slot(t4,C_fix(2));
t8=C_slot(t7,C_fix(7));
t9=t8;
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1470,a[2]=t4,a[3]=t11,a[4]=t9,a[5]=t3,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1470(t13,t1,t5,t2,C_fix(0));}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1529,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1529(t13,t1,t5,t2,C_fix(0));}}}

/* k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_fcall f_3405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(11,0,2))){
C_save_and_reclaim_args((void *)trf_3405,2,t0,t1);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3710,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:585: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[125]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
/* extras.scm:587: open-output-string */
t4=*((C_word*)lf[28]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(13,c,4))){C_save_and_reclaim((void *)f_3408,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3411,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3439,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t5,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3439(t7,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* fprintf0 in k3373 in k1026 in k1023 */
static void C_fcall f_3401(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,0,2))){
C_save_and_reclaim_args((void *)trf_3401,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3405,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t7=t3;
t8=t2;
t9=t6;
f_3405(t9,C_i_check_port_2(t7,C_SCHEME_FALSE,C_SCHEME_TRUE,t8));}
else{
t7=t6;
f_3405(t7,C_SCHEME_UNDEFINED);}}

/* k1711 in k1699 in loop in k1690 in k1687 in read-string/port in k1026 in k1023 */
static void C_ccall f_1713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_1713,2,av);}
/* extras.scm:198: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1697(t2,((C_word*)t0)[3]);}

/* k3605 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,c,2))){C_save_and_reclaim((void *)f_3607,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:617: next */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3455(t4,t3);}

/* generic-write in k1026 in k1023 */
static void C_fcall f_1980(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(43,0,4))){
C_save_and_reclaim_args((void *)trf_1980,5,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1983,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2045,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2084,a[2]=t5,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2103,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2695,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li62),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3362,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t21;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
/* extras.scm:565: wr */
t21=((C_word*)t13)[1];
f_2103(t21,t1,t2,C_fix(0));}}

/* next in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_fcall f_3455(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,3))){
C_save_and_reclaim_args((void *)trf_3455,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:598: ##sys#error */
t2=*((C_word*)lf[119]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[120];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* read-macro? in generic-write in k1026 in k1023 */
static void C_fcall f_1983(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,0,2))){
C_save_and_reclaim_args((void *)trf_1983,2,t1,t2);}
a=C_alloc(4);
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(t3,lf[36]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2011,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_2011(t8,t6);}
else{
t8=C_eqp(t3,lf[37]);
if(C_truep(t8)){
t9=t7;
f_2011(t9,t8);}
else{
t9=C_eqp(t3,lf[38]);
t10=t7;
f_2011(t10,(C_truep(t9)?t9:C_eqp(t3,lf[39])));}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_extras_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(!C_demand(C_calculate_demand(3,c,2))){
C_save_and_reclaim((void*)C_extras_toplevel,c,av);}
toplevel_initialized=1;
if(!C_demand_2(634)){
C_save(t1);
C_rereclaim2(634*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,136);
lf[0]=C_h_intern(&lf[0],4,"read");
lf[1]=C_h_intern(&lf[1],9,"read-file");
lf[2]=C_h_intern(&lf[2],18,"\003sysstandard-input");
lf[3]=C_h_intern(&lf[3],16,"\003sysfast-reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],5,"port\077");
lf[6]=C_h_intern(&lf[6],9,"randomize");
lf[7]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[8]=C_h_intern(&lf[8],11,"\003sysflo2fix");
lf[9]=C_h_intern(&lf[9],15,"current-seconds");
lf[10]=C_h_intern(&lf[10],6,"random");
lf[11]=C_h_intern(&lf[11],9,"read-line");
lf[12]=C_h_intern(&lf[12],13,"\003syssubstring");
lf[13]=C_h_intern(&lf[13],15,"\003sysread-char-0");
lf[14]=C_h_intern(&lf[14],9,"peek-char");
lf[15]=C_h_intern(&lf[15],17,"\003sysstring-append");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-string");
lf[18]=C_h_intern(&lf[18],10,"read-lines");
lf[19]=C_h_intern(&lf[19],10,"write-line");
lf[20]=C_h_intern(&lf[20],19,"\003sysstandard-output");
lf[21]=C_h_intern(&lf[21],16,"\003syswrite-char-0");
lf[22]=C_h_intern(&lf[22],16,"\003sysread-string!");
lf[23]=C_h_intern(&lf[23],12,"read-string!");
lf[24]=C_h_intern(&lf[24],20,"\003sysread-string/port");
lf[25]=C_h_intern(&lf[25],11,"read-string");
lf[26]=C_h_intern(&lf[26],17,"get-output-string");
lf[27]=C_h_intern(&lf[27],12,"write-string");
lf[28]=C_h_intern(&lf[28],18,"open-output-string");
lf[29]=C_h_intern(&lf[29],13,"read-buffered");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[31]=C_h_intern(&lf[31],10,"read-token");
lf[32]=C_h_intern(&lf[32],15,"\003syspeek-char-0");
lf[33]=C_h_intern(&lf[33],9,"read-byte");
lf[34]=C_h_intern(&lf[34],10,"write-byte");
lf[36]=C_h_intern(&lf[36],5,"quote");
lf[37]=C_h_intern(&lf[37],10,"quasiquote");
lf[38]=C_h_intern(&lf[38],7,"unquote");
lf[39]=C_h_intern(&lf[39],16,"unquote-splicing");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001`");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\002,@");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\003 . ");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\002()");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\005#!eof");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[52]=C_h_intern(&lf[52],12,"vector->list");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\002#t");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[55]=C_h_intern(&lf[55],18,"\003sysnumber->string");
lf[56]=C_h_intern(&lf[56],9,"\003sysprint");
lf[57]=C_h_intern(&lf[57],21,"\003sysprocedure->string");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\003\000\000\002\376\003\000\000\002\376"
"\377\012\000\000\013\376B\000\000\002\134v\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\014\376B\000\000\002\134f\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\007\376B\000\000\002\134a\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\010\376B\000\000\002\134"
"b\376\377\016");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\002\134x");
lf[63]=C_h_intern(&lf[63],14,"number->string");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001x");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\001u");
lf[69]=C_h_intern(&lf[69],9,"char-name");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\002#\134");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\016#<unspecified>");
lf[72]=C_h_intern(&lf[72],19,"\003syspointer->string");
lf[73]=C_h_intern(&lf[73],28,"\003sysarbitrary-unbound-symbol");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\020#<unbound value>");
lf[75]=C_h_intern(&lf[75],19,"\003sysuser-print-hook");
lf[76]=C_h_intern(&lf[76],13,"string-append");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\007#<port ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\003#${");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[83]=C_h_intern(&lf[83],23,"\003syslambda-info->string");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\016#<lambda info ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\025#<unprintable object>");
lf[86]=C_h_intern(&lf[86],11,"\003sysnumber\077");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[89]=C_h_intern(&lf[89],21,"reverse-string-append");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[91]=C_h_intern(&lf[91],3,"max");
lf[92]=C_h_intern(&lf[92],28,"\003syssymbol->qualified-string");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[100]=C_h_intern(&lf[100],6,"lambda");
lf[101]=C_h_intern(&lf[101],2,"if");
lf[102]=C_h_intern(&lf[102],4,"set!");
lf[103]=C_h_intern(&lf[103],4,"cond");
lf[104]=C_h_intern(&lf[104],4,"case");
lf[105]=C_h_intern(&lf[105],3,"and");
lf[106]=C_h_intern(&lf[106],2,"or");
lf[107]=C_h_intern(&lf[107],3,"let");
lf[108]=C_h_intern(&lf[108],5,"begin");
lf[109]=C_h_intern(&lf[109],2,"do");
lf[110]=C_h_intern(&lf[110],4,"let\052");
lf[111]=C_h_intern(&lf[111],6,"letrec");
lf[112]=C_h_intern(&lf[112],7,"letrec\052");
lf[113]=C_h_intern(&lf[113],6,"define");
lf[114]=C_h_intern(&lf[114],18,"pretty-print-width");
lf[115]=C_h_intern(&lf[115],12,"pretty-print");
lf[116]=C_h_intern(&lf[116],7,"display");
lf[117]=C_h_intern(&lf[117],2,"pp");
lf[119]=C_h_intern(&lf[119],9,"\003syserror");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[121]=C_h_intern(&lf[121],5,"write");
lf[122]=C_h_intern(&lf[122],16,"\003sysflush-output");
lf[123]=C_h_intern(&lf[123],7,"newline");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\037illegal format-string character");
lf[125]=C_h_intern(&lf[125],13,"\003systty-port\077");
lf[126]=C_h_intern(&lf[126],7,"fprintf");
lf[127]=C_h_intern(&lf[127],6,"printf");
lf[128]=C_h_intern(&lf[128],7,"sprintf");
lf[129]=C_h_intern(&lf[129],6,"format");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\023illegal destination");
lf[131]=C_h_intern(&lf[131],12,"output-port\077");
lf[132]=C_h_intern(&lf[132],17,"register-feature!");
lf[133]=C_h_intern(&lf[133],7,"srfi-28");
lf[134]=C_h_intern(&lf[134],14,"make-parameter");
lf[135]=C_h_intern(&lf[135],6,"extras");
C_register_lf2(lf,136,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k3614 in k3608 in k3605 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3616,2,av);}
/* extras.scm:630: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3474(t2,((C_word*)t0)[3]);}

/* k3608 in k3605 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,3))){C_save_and_reclaim((void *)f_3610,2,av);}
a=C_alloc(4);
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3616,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:619: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3439(t4,t3,((C_word*)t0)[6],t1);}

/* pp-lambda in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,8))){C_save_and_reclaim((void *)f_3171,5,av);}
/* extras.scm:516: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3025(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-if in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,8))){C_save_and_reclaim((void *)f_3177,5,av);}
/* extras.scm:519: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3025(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* doread in read-lines in k1026 in k1023 */
static void C_ccall f_1346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,c,4))){C_save_and_reclaim((void *)f_1346,3,av);}
a=C_alloc(7);
t3=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_fix(1000000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1356,a[2]=t5,a[3]=t2,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1356(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* loop in read-string! in k1026 in k1023 */
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,0,5))){
C_save_and_reclaim_args((void *)trf_1470,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1474,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:148: rdstring */
t6=((C_word*)t0)[4];{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=((C_word*)t0)[5];
av2[5]=t2;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}

/* k1472 in loop in read-string! in k1026 in k1023 */
static void C_ccall f_1474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_1474,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_i_not(((C_word*)t0)[5]);
t7=(C_truep(t6)?t6:C_fixnum_lessp(t1,((C_word*)t0)[5]));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_truep(((C_word*)t0)[5])?C_fixnum_difference(((C_word*)t0)[5],t1):C_SCHEME_FALSE);
t10=C_fixnum_plus(((C_word*)t0)[3],t1);
/* extras.scm:153: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_1470(t11,((C_word*)t0)[4],t8,t9,t10);}
else{
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t8;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k2884 in k2857 in pp-expr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,c,4))){C_save_and_reclaim((void *)f_2886,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* extras.scm:442: proc */
t2=t1;{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:443: ##sys#symbol->qualified-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[92]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}}

/* k3780 in k3373 in k1026 in k1023 */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3782,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* pp-cond in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_3183,5,av);}
/* extras.scm:522: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2917(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k2311 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2313,2,av);}
/* extras.scm:324: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pp-case in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,8))){C_save_and_reclaim((void *)f_3189,5,av);}
/* extras.scm:525: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3025(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* k3431 in k3409 in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3433,2,av);}
/* extras.scm:633: ##sys#print */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_fcall f_3439(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(30,0,2))){
C_save_and_reclaim_args((void *)trf_3439,4,t0,t1,t2,t3);}
a=C_alloc(30);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_block_size(t2);
t9=t8;
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3448,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3455,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3474,a[2]=t7,a[3]=t9,a[4]=t11,a[5]=t17,a[6]=((C_word*)t0)[3],a[7]=t13,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li68),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_3474(t19,t1);}

/* k3770 in format in k3373 in k1026 in k1023 */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(3,c,5))){C_save_and_reclaim((void *)f_3772,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[126]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}
else{
/* extras.scm:651: ##sys#error */
t2=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[129];
av2[3]=lf[130];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k2298 in k2291 in k2288 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2300,2,av);}
/* extras.scm:323: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3485 in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static void C_ccall f_3487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3487,2,av);}
/* extras.scm:630: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3474(t2,((C_word*)t0)[3]);}

/* k2369 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2371,2,av);}
/* extras.scm:337: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* read-buffered in k1026 in k1023 */
static void C_ccall f_1761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2))){
C_save_and_reclaim((void*)f_1761,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[29]);
t6=C_slot(t4,C_fix(2));
t7=C_slot(t6,C_fix(9));
if(C_truep(t7)){
/* extras.scm:214: rb */
t8=t7;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}
else{
t8=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t8;
av2[1]=lf[30];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2868 in k2857 in pp-expr in pp in generic-write in k1026 in k1023 */
static void C_ccall f_2870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_2870,2,av);}
/* extras.scm:434: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2765(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k3128 in k3115 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,c,5))){C_save_and_reclaim((void *)f_3130,2,av);}
a=C_alloc(8);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:509: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3028(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* k2365 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_2367,2,av);}
/* extras.scm:336: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],lf[58],t1);}

/* k2361 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_2363,2,av);}
/* extras.scm:334: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2334(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in k1797 in read-token in k1026 in k1023 */
static void C_fcall f_1804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(7,0,2))){
C_save_and_reclaim_args((void *)trf_1804,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:226: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* read-token in k1026 in k1023 */
static void C_ccall f_1789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2))){
C_save_and_reclaim((void*)f_1789,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[2]+1):C_i_car(t3));
t6=t5;
t7=C_i_check_port_2(t6,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[31]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1799,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:224: open-output-string */
t9=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k1806 in loop in k1797 in read-token in k1026 in k1023 */
static void C_ccall f_1808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(6,c,2))){C_save_and_reclaim((void *)f_1808,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_1814(2,av2);}}
else{
/* extras.scm:227: pred */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k3143 in k3115 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3145,2,av);}
/* extras.scm:508: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2103(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2397 in k2392 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_2399,2,av);}
/* extras.scm:341: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2334(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2392 in k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(12,c,3))){C_save_and_reclaim((void *)f_2394,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_u_i_assq(((C_word*)t0)[2],lf[59]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2399,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:343: g450 */
t6=t5;
f_2400(t6,t4,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_fix(C_character_code(((C_word*)t0)[2]));
/* extras.scm:356: number->string */
t7=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k1812 in k1806 in loop in k1797 in read-token in k1026 in k1023 */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,c,2))){C_save_and_reclaim((void *)f_1814,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1824,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:229: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:231: get-output-string */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k1815 in k1812 in k1806 in loop in k1797 in read-token in k1026 in k1023 */
static void C_ccall f_1817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_1817,2,av);}
/* extras.scm:230: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1804(t2,((C_word*)t0)[3]);}

/* k3115 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(11,c,5))){C_save_and_reclaim((void *)f_3117,2,av);}
a=C_alloc(11);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=t3;
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3145,a[2]=((C_word*)t0)[7],a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:508: out */
t8=((C_word*)((C_word*)t0)[8])[1];
f_2084(t8,t7,lf[98],t1);}
else{
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:510: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3028(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* fetch in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static C_word C_fcall f_3448(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
return(t1);}

/* k3382 in k3379 in pretty-print in k3373 in k1026 in k1023 */
static void C_ccall f_3384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3384,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3379 in pretty-print in k3373 in k1026 in k1023 */
static void C_fcall f_3381(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,0,2))){
C_save_and_reclaim_args((void *)trf_3381,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3388,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:574: pretty-print-width */
t5=*((C_word*)lf[114]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3386 in k3379 in pretty-print in k3373 in k1026 in k1023 */
static void C_ccall f_3388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(4,c,5))){C_save_and_reclaim((void *)f_3388,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[2],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:574: generic-write */
f_1980(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_ccall f_2332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(8,c,5))){C_save_and_reclaim((void *)f_2332,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2334(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2334(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_2334,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2341,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=C_i_string_length(((C_word*)t0)[2]);
t7=t5;
f_2341(t7,C_fixnum_lessp(t3,t6));}
else{
t6=t5;
f_2341(t6,C_SCHEME_FALSE);}}

/* k1868 in body304 in write-string in k1026 in k1023 */
static void C_fcall f_1870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,4))){
C_save_and_reclaim_args((void *)trf_1870,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm:242: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];
/* extras.scm:236: g315 */
t3=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k3392 in a3389 in k3386 in k3379 in pretty-print in k3373 in k1026 in k1023 */
static void C_ccall f_3394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3394,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3389 in k3386 in k3379 in pretty-print in k3373 in k1026 in k1023 */
static void C_ccall f_3390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(3,c,3))){C_save_and_reclaim((void *)f_3390,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3394,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:574: display */
t4=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* skip in loop in rec in k3406 in k3403 in fprintf0 in k3373 in k1026 in k1023 */
static C_word C_fcall f_3652(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=f_3448(((C_word*)((C_word*)t0)[2])[1]);
t5=t2;
t1=t5;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
return(t3);}}

/* k3364 in k3360 in generic-write in k1026 in k1023 */
static void C_ccall f_3366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3366,2,av);}
/* extras.scm:564: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2084(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3360 in generic-write in k1026 in k1023 */
static void C_ccall f_3362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_3362,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:564: pp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2695(t4,t3,((C_word*)t0)[5],C_fix(0));}

/* write-string in k1026 in k1023 */
static void C_ccall f_1845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,4))){
C_save_and_reclaim((void*)f_1845,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t4=C_i_check_string_2(t2,lf[27]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1850,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1888,a[2]=t5,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1893,a[2]=t6,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* extras.scm:236: def-n306 */
t8=t7;
f_1893(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* extras.scm:236: def-port307 */
t10=t6;
f_1888(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* extras.scm:236: body304 */
t12=t5;
f_1850(t12,t1,t8,t10);}}}

/* body304 in write-string in k1026 in k1023 */
static void C_fcall f_1850(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(13,0,2))){
C_save_and_reclaim_args((void *)trf_1850,4,t0,t1,t2,t3);}
a=C_alloc(13);
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[27]);
t6=(C_truep(t2)?C_i_check_exact_2(t2,lf[27]):C_SCHEME_UNDEFINED);
t7=C_slot(t3,C_fix(2));
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1867,a[2]=t9,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1870,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t9,a[6]=t1,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t12=C_block_size(((C_word*)t0)[2]);
t13=t11;
f_1870(t13,C_fixnum_lessp(t2,t12));}
else{
t12=t11;
f_1870(t12,C_SCHEME_FALSE);}}

/* k3373 in k1026 in k1023 */
static void C_ccall f_3375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(21,c,6))){C_save_and_reclaim((void *)f_3375,2,av);}
a=C_alloc(21);
t2=C_mutate2((C_word*)lf[114]+1 /* (set! pretty-print-width ...) */,t1);
t3=C_mutate2((C_word*)lf[115]+1 /* (set! pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3377,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[117]+1 /* (set! pp ...) */,*((C_word*)lf[115]+1));
t5=C_mutate2(&lf[118] /* (set! fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3401,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[126]+1 /* (set! fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3721,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[127]+1 /* (set! printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3727,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[128]+1 /* (set! sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3733,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[129]+1 /* (set! format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3739,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3782,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:654: register-feature! */
t11=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[133];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* pp-and in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_3195,5,av);}
/* extras.scm:528: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2917(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pretty-print in k3373 in k1026 in k1023 */
static void C_ccall f_3377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2))){
C_save_and_reclaim((void*)f_3377,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3381,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_3381(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3381(t5,*((C_word*)lf[20]+1));}}

/* k2339 in loop in k2330 in k2272 in wr in generic-write in k1026 in k1023 */
static void C_fcall f_2341(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(19,0,4))){
C_save_and_reclaim_args((void *)trf_2341,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_u_i_char_equalp(t3,C_make_character(92));
t5=(C_truep(t4)?t4:C_u_i_char_equalp(t3,C_make_character(34)));
if(C_truep(t5)){
t6=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2363,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[6],a[3]=t9,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:337: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t6=C_u_i_char_lessp(t3,C_make_character(32));
t7=(C_truep(t6)?t6:C_u_i_char_equalp(t3,C_make_character(127)));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t9=t8;
t10=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2394,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[6],a[3]=t12,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:344: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t8=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:359: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2334(t9,((C_word*)t0)[5],((C_word*)t0)[8],t8,((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:361: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k1822 in k1812 in k1806 in loop in k1797 in read-token in k1026 in k1023 */
static void C_ccall f_1824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_1824,2,av);}
/* extras.scm:229: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3161 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3163,2,av);}
/* extras.scm:504: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2103(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-expr-list in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_3165,5,av);}
/* extras.scm:513: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2943(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k3051 in tail1 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_ccall f_3053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_3053,2,av);}
/* extras.scm:488: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2765(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* def-port307 in write-string in k1026 in k1023 */
static void C_fcall f_1888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(0,0,3))){
C_save_and_reclaim_args((void *)trf_1888,3,t0,t1,t2);}
/* extras.scm:236: body304 */
t3=((C_word*)t0)[2];
f_1850(t3,t1,t2,*((C_word*)lf[20]+1));}

/* tail2 in pp-general in pp in generic-write in k1026 in k1023 */
static void C_fcall f_3067(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
C_check_for_interrupt;
if(!C_demand(C_calculate_demand(17,0,4))){
C_save_and_reclaim_args((void *)trf_3067,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(17);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t13=t12;
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3088,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[5],a[3]=t14,a[4]=t8,a[5]=t13,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:496: indent */
t16=((C_word*)((C_word*)t0)[6])[1];
f_2731(t16,t15,t5,t4);}
else{
/* extras.scm:497: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3106(t7,t1,t2,t3,t4);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[225] = {
{"f_1893:extras_2escm",(void*)f_1893},
{"f_3049:extras_2escm",(void*)f_3049},
{"f_1867:extras_2escm",(void*)f_1867},
{"f_3201:extras_2escm",(void*)f_3201},
{"f_2616:extras_2escm",(void*)f_2616},
{"f_3011:extras_2escm",(void*)f_3011},
{"f_3019:extras_2escm",(void*)f_3019},
{"f_2603:extras_2escm",(void*)f_2603},
{"f_3025:extras_2escm",(void*)f_3025},
{"f_3023:extras_2escm",(void*)f_3023},
{"f_3028:extras_2escm",(void*)f_3028},
{"f_2609:extras_2escm",(void*)f_2609},
{"f_2852:extras_2escm",(void*)f_2852},
{"f_1101:extras_2escm",(void*)f_1101},
{"f_2859:extras_2escm",(void*)f_2859},
{"f_2664:extras_2escm",(void*)f_2664},
{"f_3007:extras_2escm",(void*)f_3007},
{"f_2698:extras_2escm",(void*)f_2698},
{"f_2695:extras_2escm",(void*)f_2695},
{"f_2754:extras_2escm",(void*)f_2754},
{"f_2686:extras_2escm",(void*)f_2686},
{"f_2731:extras_2escm",(void*)f_2731},
{"f_1697:extras_2escm",(void*)f_1697},
{"f_1692:extras_2escm",(void*)f_1692},
{"f_2500:extras_2escm",(void*)f_2500},
{"f_3747:extras_2escm",(void*)f_3747},
{"f_2765:extras_2escm",(void*)f_2765},
{"f_3739:extras_2escm",(void*)f_3739},
{"f_2575:extras_2escm",(void*)f_2575},
{"f_1145:extras_2escm",(void*)f_1145},
{"f_2626:extras_2escm",(void*)f_2626},
{"f_3733:extras_2escm",(void*)f_3733},
{"f_3246:extras_2escm",(void*)f_3246},
{"f_2653:extras_2escm",(void*)f_2653},
{"f_2650:extras_2escm",(void*)f_2650},
{"f_1149:extras_2escm",(void*)f_1149},
{"f_2418:extras_2escm",(void*)f_2418},
{"f_1163:extras_2escm",(void*)f_1163},
{"f_2596:extras_2escm",(void*)f_2596},
{"f_2593:extras_2escm",(void*)f_2593},
{"f_2400:extras_2escm",(void*)f_2400},
{"f_3221:extras_2escm",(void*)f_3221},
{"f_3227:extras_2escm",(void*)f_3227},
{"f_2679:extras_2escm",(void*)f_2679},
{"f_1169:extras_2escm",(void*)f_1169},
{"f_2676:extras_2escm",(void*)f_2676},
{"f_1214:extras_2escm",(void*)f_1214},
{"f_3236:extras_2escm",(void*)f_3236},
{"f_2536:extras_2escm",(void*)f_2536},
{"f_1181:extras_2escm",(void*)f_1181},
{"f_1219:extras_2escm",(void*)f_1219},
{"f_3088:extras_2escm",(void*)f_3088},
{"f_2462:extras_2escm",(void*)f_2462},
{"f_2520:extras_2escm",(void*)f_2520},
{"f_2527:extras_2escm",(void*)f_2527},
{"f_1191:extras_2escm",(void*)f_1191},
{"f_2917:extras_2escm",(void*)f_2917},
{"f_2912:extras_2escm",(void*)f_2912},
{"f_2493:extras_2escm",(void*)f_2493},
{"f_2496:extras_2escm",(void*)f_2496},
{"f_2557:extras_2escm",(void*)f_2557},
{"f_2485:extras_2escm",(void*)f_2485},
{"f_2543:extras_2escm",(void*)f_2543},
{"f_2632:extras_2escm",(void*)f_2632},
{"f_2637:extras_2escm",(void*)f_2637},
{"f_2430:extras_2escm",(void*)f_2430},
{"f_2208:extras_2escm",(void*)f_2208},
{"f_2422:extras_2escm",(void*)f_2422},
{"f_2458:extras_2escm",(void*)f_2458},
{"f_2921:extras_2escm",(void*)f_2921},
{"f_2440:extras_2escm",(void*)f_2440},
{"f_1201:extras_2escm",(void*)f_1201},
{"f_1297:extras_2escm",(void*)f_1297},
{"f_2281:extras_2escm",(void*)f_2281},
{"f_2274:extras_2escm",(void*)f_2274},
{"f_1232:extras_2escm",(void*)f_1232},
{"f_3092:extras_2escm",(void*)f_3092},
{"f_2103:extras_2escm",(void*)f_2103},
{"f_2106:extras_2escm",(void*)f_2106},
{"f_2173:extras_2escm",(void*)f_2173},
{"f_2179:extras_2escm",(void*)f_2179},
{"f_1265:extras_2escm",(void*)f_1265},
{"f_1305:extras_2escm",(void*)f_1305},
{"f_1536:extras_2escm",(void*)f_1536},
{"f_1533:extras_2escm",(void*)f_1533},
{"f_1529:extras_2escm",(void*)f_1529},
{"f_1274:extras_2escm",(void*)f_1274},
{"f_2113:extras_2escm",(void*)f_2113},
{"f_1283:extras_2escm",(void*)f_1283},
{"f_2133:extras_2escm",(void*)f_2133},
{"f_1051:extras_2escm",(void*)f_1051},
{"f_1059:extras_2escm",(void*)f_1059},
{"f_2045:extras_2escm",(void*)f_2045},
{"f_2124:extras_2escm",(void*)f_2124},
{"f_1025:extras_2escm",(void*)f_1025},
{"f_1028:extras_2escm",(void*)f_1028},
{"f_1584:extras_2escm",(void*)f_1584},
{"f_3512:extras_2escm",(void*)f_3512},
{"f_2149:extras_2escm",(void*)f_2149},
{"f_2293:extras_2escm",(void*)f_2293},
{"f_2290:extras_2escm",(void*)f_2290},
{"f_2011:extras_2escm",(void*)f_2011},
{"f_1621:extras_2escm",(void*)f_1621},
{"f_2794:extras_2escm",(void*)f_2794},
{"f_1334:extras_2escm",(void*)f_1334},
{"f_3585:extras_2escm",(void*)f_3585},
{"f_1061:extras_2escm",(void*)f_1061},
{"f_3589:extras_2escm",(void*)f_3589},
{"f_2199:extras_2escm",(void*)f_2199},
{"f_2195:extras_2escm",(void*)f_2195},
{"f_1356:extras_2escm",(void*)f_1356},
{"f_2778:extras_2escm",(void*)f_2778},
{"f_2251:extras_2escm",(void*)f_2251},
{"f_2255:extras_2escm",(void*)f_2255},
{"f_1081:extras_2escm",(void*)f_1081},
{"f_3568:extras_2escm",(void*)f_3568},
{"f_2816:extras_2escm",(void*)f_2816},
{"f_2814:extras_2escm",(void*)f_2814},
{"f_2781:extras_2escm",(void*)f_2781},
{"f_2810:extras_2escm",(void*)f_2810},
{"f_1661:extras_2escm",(void*)f_1661},
{"f_3572:extras_2escm",(void*)f_3572},
{"f_3727:extras_2escm",(void*)f_3727},
{"f_3721:extras_2escm",(void*)f_3721},
{"f_2747:extras_2escm",(void*)f_2747},
{"f_3411:extras_2escm",(void*)f_3411},
{"f_1674:extras_2escm",(void*)f_1674},
{"f_1677:extras_2escm",(void*)f_1677},
{"f_2151:extras_2escm",(void*)f_2151},
{"f_3710:extras_2escm",(void*)f_3710},
{"f_1689:extras_2escm",(void*)f_1689},
{"f_3551:extras_2escm",(void*)f_3551},
{"f_3555:extras_2escm",(void*)f_3555},
{"f_1369:extras_2escm",(void*)f_1369},
{"f_2729:extras_2escm",(void*)f_2729},
{"f_2722:extras_2escm",(void*)f_2722},
{"f_3525:extras_2escm",(void*)f_3525},
{"f_2094:extras_2escm",(void*)f_2094},
{"f_2943:extras_2escm",(void*)f_2943},
{"f_2947:extras_2escm",(void*)f_2947},
{"f_2985:extras_2escm",(void*)f_2985},
{"f_1928:extras_2escm",(void*)f_1928},
{"f_2941:extras_2escm",(void*)f_2941},
{"f_3538:extras_2escm",(void*)f_3538},
{"f_1799:extras_2escm",(void*)f_1799},
{"f_1424:extras_2escm",(void*)f_1424},
{"f_2084:extras_2escm",(void*)f_2084},
{"f_2952:extras_2escm",(void*)f_2952},
{"f_2958:extras_2escm",(void*)f_2958},
{"f_1938:extras_2escm",(void*)f_1938},
{"f_1030:extras_2escm",(void*)f_1030},
{"f_3106:extras_2escm",(void*)f_3106},
{"f_1440:extras_2escm",(void*)f_1440},
{"f_3474:extras_2escm",(void*)f_3474},
{"f_1701:extras_2escm",(void*)f_1701},
{"f_1719:extras_2escm",(void*)f_1719},
{"f_1955:extras_2escm",(void*)f_1955},
{"f_2979:extras_2escm",(void*)f_2979},
{"f_1452:extras_2escm",(void*)f_1452},
{"f_3405:extras_2escm",(void*)f_3405},
{"f_3408:extras_2escm",(void*)f_3408},
{"f_3401:extras_2escm",(void*)f_3401},
{"f_1713:extras_2escm",(void*)f_1713},
{"f_3607:extras_2escm",(void*)f_3607},
{"f_1980:extras_2escm",(void*)f_1980},
{"f_3455:extras_2escm",(void*)f_3455},
{"f_1983:extras_2escm",(void*)f_1983},
{"toplevel:extras_2escm",(void*)C_extras_toplevel},
{"f_3616:extras_2escm",(void*)f_3616},
{"f_3610:extras_2escm",(void*)f_3610},
{"f_3171:extras_2escm",(void*)f_3171},
{"f_3177:extras_2escm",(void*)f_3177},
{"f_1346:extras_2escm",(void*)f_1346},
{"f_1470:extras_2escm",(void*)f_1470},
{"f_1474:extras_2escm",(void*)f_1474},
{"f_2886:extras_2escm",(void*)f_2886},
{"f_3782:extras_2escm",(void*)f_3782},
{"f_3183:extras_2escm",(void*)f_3183},
{"f_2313:extras_2escm",(void*)f_2313},
{"f_3189:extras_2escm",(void*)f_3189},
{"f_3433:extras_2escm",(void*)f_3433},
{"f_3439:extras_2escm",(void*)f_3439},
{"f_3772:extras_2escm",(void*)f_3772},
{"f_2300:extras_2escm",(void*)f_2300},
{"f_3487:extras_2escm",(void*)f_3487},
{"f_2371:extras_2escm",(void*)f_2371},
{"f_1761:extras_2escm",(void*)f_1761},
{"f_2870:extras_2escm",(void*)f_2870},
{"f_3130:extras_2escm",(void*)f_3130},
{"f_2367:extras_2escm",(void*)f_2367},
{"f_2363:extras_2escm",(void*)f_2363},
{"f_1804:extras_2escm",(void*)f_1804},
{"f_1789:extras_2escm",(void*)f_1789},
{"f_1808:extras_2escm",(void*)f_1808},
{"f_3145:extras_2escm",(void*)f_3145},
{"f_2399:extras_2escm",(void*)f_2399},
{"f_2394:extras_2escm",(void*)f_2394},
{"f_1814:extras_2escm",(void*)f_1814},
{"f_1817:extras_2escm",(void*)f_1817},
{"f_3117:extras_2escm",(void*)f_3117},
{"f_3448:extras_2escm",(void*)f_3448},
{"f_3384:extras_2escm",(void*)f_3384},
{"f_3381:extras_2escm",(void*)f_3381},
{"f_3388:extras_2escm",(void*)f_3388},
{"f_2332:extras_2escm",(void*)f_2332},
{"f_2334:extras_2escm",(void*)f_2334},
{"f_1870:extras_2escm",(void*)f_1870},
{"f_3394:extras_2escm",(void*)f_3394},
{"f_3390:extras_2escm",(void*)f_3390},
{"f_3652:extras_2escm",(void*)f_3652},
{"f_3366:extras_2escm",(void*)f_3366},
{"f_3362:extras_2escm",(void*)f_3362},
{"f_1845:extras_2escm",(void*)f_1845},
{"f_1850:extras_2escm",(void*)f_1850},
{"f_3375:extras_2escm",(void*)f_3375},
{"f_3195:extras_2escm",(void*)f_3195},
{"f_3377:extras_2escm",(void*)f_3377},
{"f_2341:extras_2escm",(void*)f_2341},
{"f_1824:extras_2escm",(void*)f_1824},
{"f_3163:extras_2escm",(void*)f_3163},
{"f_3165:extras_2escm",(void*)f_3165},
{"f_3053:extras_2escm",(void*)f_3053},
{"f_1888:extras_2escm",(void*)f_1888},
{"f_3067:extras_2escm",(void*)f_3067},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|eliminated procedure checks: 37 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (current-output-port)
o|  4 (make-string fixnum char)
o|  1 (assq * (list-of pair))
o|  2 (char<? char char)
o|  3 (char=? char char)
o|  5 (car pair)
o|  13 (cdr pair)
o|  1 (make-string fixnum)
o|  4 (##sys#check-output-port * * *)
o|  24 (eqv? * (not float))
o|  7 (##sys#check-input-port * * *)
o|  1 (fp/ float float)
(o e)|safe calls: 309 
o|Removed `not' forms: 5 
o|inlining procedure: k1063 
o|inlining procedure: k1063 
o|inlining procedure: k1090 
o|inlining procedure: k1090 
o|inlining procedure: k1096 
o|inlining procedure: k1096 
o|substituted constant variable: a1164 
o|inlining procedure: k1174 
o|inlining procedure: k1174 
o|substituted constant variable: a1193 
o|substituted constant variable: a1194 
o|inlining procedure: k1198 
o|inlining procedure: k1198 
o|inlining procedure: k1221 
o|inlining procedure: k1221 
o|inlining procedure: k1239 
o|inlining procedure: k1239 
o|inlining procedure: k1248 
o|inlining procedure: k1248 
o|inlining procedure: k1266 
o|inlining procedure: k1266 
o|substituted constant variable: a1307 
o|substituted constant variable: a1309 
o|inlining procedure: k1317 
o|inlining procedure: k1317 
o|inlining procedure: k1358 
o|inlining procedure: k1358 
o|inlining procedure: k1390 
o|substituted constant variable: a1400 
o|substituted constant variable: a1401 
o|inlining procedure: k1390 
o|substituted constant variable: a1430 
o|substituted constant variable: a1431 
o|inlining procedure: k1454 
o|inlining procedure: k1454 
o|inlining procedure: k1478 
o|inlining procedure: k1478 
o|inlining procedure: k1537 
o|inlining procedure: k1537 
o|substituted constant variable: a1599 
o|substituted constant variable: a1600 
o|substituted constant variable: a1664 
o|substituted constant variable: a1665 
o|inlining procedure: k1666 
o|inlining procedure: k1666 
o|inlining procedure: k1702 
o|inlining procedure: k1702 
o|substituted constant variable: a1717 
o|inlining procedure: k1730 
o|inlining procedure: k1730 
o|substituted constant variable: a1767 
o|substituted constant variable: a1768 
o|inlining procedure: k1772 
o|inlining procedure: k1772 
o|substituted constant variable: a1795 
o|substituted constant variable: a1796 
o|inlining procedure: k1809 
o|inlining procedure: k1809 
o|contracted procedure: k1828 
o|substituted constant variable: a1853 
o|substituted constant variable: a1854 
o|inlining procedure: k1865 
o|inlining procedure: k1865 
o|inlining procedure: k1898 
o|inlining procedure: k1898 
o|substituted constant variable: a1934 
o|substituted constant variable: a1935 
o|inlining procedure: k1939 
o|inlining procedure: k1939 
o|substituted constant variable: a1964 
o|substituted constant variable: a1965 
o|inlining procedure: k2003 
o|contracted procedure: "(extras.scm:279) length1?369" 
o|inlining procedure: k1988 
o|inlining procedure: k1988 
o|inlining procedure: k2003 
o|inlining procedure: k2018 
o|inlining procedure: k2018 
o|substituted constant variable: a2031 
o|substituted constant variable: a2033 
o|substituted constant variable: a2035 
o|substituted constant variable: a2037 
o|inlining procedure: k2051 
o|inlining procedure: k2051 
o|inlining procedure: k2063 
o|inlining procedure: k2063 
o|substituted constant variable: a2076 
o|substituted constant variable: a2078 
o|substituted constant variable: a2080 
o|substituted constant variable: a2082 
o|inlining procedure: k2086 
o|inlining procedure: k2086 
o|inlining procedure: k2108 
o|inlining procedure: "(extras.scm:300) read-macro-body363" 
o|inlining procedure: k2108 
o|inlining procedure: k2135 
o|contracted procedure: k2156 
o|inlining procedure: k2153 
o|inlining procedure: k2180 
o|inlining procedure: k2180 
o|inlining procedure: k2153 
o|inlining procedure: k2135 
o|inlining procedure: k2212 
o|inlining procedure: k2212 
o|inlining procedure: k2230 
o|inlining procedure: k2230 
o|inlining procedure: k2256 
o|inlining procedure: k2266 
o|inlining procedure: k2266 
o|inlining procedure: k2256 
o|inlining procedure: k2282 
o|inlining procedure: k2282 
o|inlining procedure: k2314 
o|inlining procedure: k2336 
o|substituted constant variable: a2349 
o|substituted constant variable: a2376 
o|inlining procedure: k2372 
o|substituted constant variable: a2396 
o|inlining procedure: k2397 
o|inlining procedure: k2397 
o|substituted constant variable: a2432 
o|inlining procedure: k2372 
o|substituted constant variable: a2449 
o|substituted constant variable: a2451 
o|inlining procedure: k2336 
o|inlining procedure: k2314 
o|inlining procedure: k2476 
o|substituted constant variable: a2486 
o|inlining procedure: k2476 
o|inlining procedure: k2512 
o|inlining procedure: k2512 
o|inlining procedure: k2545 
o|inlining procedure: k2545 
o|substituted constant variable: a2558 
o|inlining procedure: k2560 
o|inlining procedure: k2560 
o|inlining procedure: k2576 
o|inlining procedure: k2576 
o|inlining procedure: k2604 
o|inlining procedure: k2604 
o|inlining procedure: k2639 
o|inlining procedure: k2639 
o|inlining procedure: k2671 
o|inlining procedure: k2671 
o|inlining procedure: k2700 
o|inlining procedure: k2700 
o|inlining procedure: k2733 
o|inlining procedure: k2742 
o|inlining procedure: k2742 
o|substituted constant variable: a2755 
o|substituted constant variable: a2756 
o|inlining procedure: k2733 
o|inlining procedure: k2767 
o|inlining procedure: k2795 
o|inlining procedure: k2795 
o|substituted constant variable: max-expr-width504 
o|inlining procedure: k2767 
o|inlining procedure: k2854 
o|inlining procedure: "(extras.scm:434) read-macro-body363" 
o|inlining procedure: k2854 
o|inlining procedure: k2887 
o|inlining procedure: k2887 
o|substituted constant variable: max-call-head-width503 
o|inlining procedure: k2922 
o|inlining procedure: k2922 
o|inlining procedure: k2960 
o|inlining procedure: k2992 
o|inlining procedure: k2992 
o|inlining procedure: k2960 
o|inlining procedure: k3030 
o|inlining procedure: k3030 
o|inlining procedure: k3069 
o|inlining procedure: k3069 
o|inlining procedure: k3118 
o|substituted constant variable: indent-general502 
o|inlining procedure: k3118 
o|substituted constant variable: indent-general502 
o|inlining procedure: k3238 
o|inlining procedure: k3238 
o|inlining procedure: k3256 
o|inlining procedure: k3256 
o|inlining procedure: k3268 
o|inlining procedure: k3268 
o|inlining procedure: k3283 
o|inlining procedure: k3283 
o|substituted constant variable: a3296 
o|substituted constant variable: a3298 
o|substituted constant variable: a3300 
o|substituted constant variable: a3305 
o|substituted constant variable: a3307 
o|substituted constant variable: a3309 
o|substituted constant variable: a3311 
o|substituted constant variable: a3316 
o|substituted constant variable: a3318 
o|inlining procedure: k3322 
o|inlining procedure: k3322 
o|inlining procedure: k3334 
o|inlining procedure: k3334 
o|substituted constant variable: a3341 
o|substituted constant variable: a3343 
o|substituted constant variable: a3345 
o|substituted constant variable: a3347 
o|substituted constant variable: a3349 
o|inlining procedure: k3353 
o|substituted constant variable: a3367 
o|substituted constant variable: a3368 
o|inlining procedure: k3353 
o|contracted procedure: k3415 
o|inlining procedure: k3412 
o|contracted procedure: k3424 
o|inlining procedure: k3412 
o|inlining procedure: k3457 
o|inlining procedure: k3457 
o|inlining procedure: k3476 
o|inlining procedure: k3476 
o|inlining procedure: k3500 
o|inlining procedure: k3500 
o|inlining procedure: k3526 
o|inlining procedure: k3526 
o|inlining procedure: k3556 
o|inlining procedure: k3556 
o|inlining procedure: k3590 
o|inlining procedure: k3590 
o|inlining procedure: k3617 
o|inlining procedure: k3617 
o|inlining procedure: k3638 
o|inlining procedure: k3654 
o|inlining procedure: k3654 
o|inlining procedure: k3638 
o|substituted constant variable: a3678 
o|substituted constant variable: a3680 
o|substituted constant variable: a3682 
o|substituted constant variable: a3684 
o|substituted constant variable: a3686 
o|substituted constant variable: a3688 
o|substituted constant variable: a3690 
o|substituted constant variable: a3692 
o|substituted constant variable: a3694 
o|substituted constant variable: a3696 
o|substituted constant variable: a3698 
o|substituted constant variable: a3718 
o|contracted procedure: k3748 
o|inlining procedure: k3745 
o|inlining procedure: k3757 
o|propagated global variable: r37583971 sprintf 
o|inlining procedure: k3757 
o|inlining procedure: k3745 
o|propagated global variable: r37463973 sprintf 
o|replaced variables: 575 
o|removed binding forms: 131 
o|substituted constant variable: r10913786 
o|converted assignments to bindings: (slurp84) 
o|substituted constant variable: r11753789 
o|substituted constant variable: r13183802 
o|converted assignments to bindings: (doread145) 
o|substituted constant variable: r14553807 
o|substituted constant variable: r17733828 
o|substituted constant variable: r19893841 
o|substituted constant variable: r20043842 
o|removed side-effect free assignment to unused variable: read-macro-body363 
o|substituted constant variable: r20523845 
o|substituted constant variable: r20643847 
o|substituted constant variable: r20873850 
o|substituted constant variable: r22673869 
o|substituted constant variable: r22673869 
o|substituted constant variable: r22673871 
o|substituted constant variable: r22673871 
o|substituted constant variable: r25463890 
o|substituted constant variable: r25463890 
o|substituted constant variable: r25463892 
o|substituted constant variable: r25463892 
o|substituted constant variable: r27433908 
o|substituted constant variable: r27343909 
o|substituted constant variable: r29233924 
o|substituted constant variable: r29613928 
o|removed side-effect free assignment to unused variable: indent-general502 
o|removed side-effect free assignment to unused variable: max-call-head-width503 
o|removed side-effect free assignment to unused variable: max-expr-width504 
o|inlining procedure: k3485 
o|inlining procedure: k3745 
o|propagated global variable: r37464034 printf 
o|propagated global variable: r37464034 printf 
o|inlining procedure: k3745 
o|propagated global variable: r37464036 sprintf 
o|propagated global variable: r37464036 sprintf 
o|inlining procedure: k3745 
o|propagated global variable: r37464038 fprintf 
o|propagated global variable: r37464038 fprintf 
o|propagated global variable: a37443974 sprintf 
o|simplifications: ((let . 2)) 
o|replaced variables: 13 
o|removed binding forms: 592 
o|inlining procedure: k3206 
o|inlining procedure: k3708 
o|replaced variables: 2 
o|removed binding forms: 53 
o|substituted constant variable: r32074062 
o|substituted constant variable: r37094069 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed conditional forms: 1 
o|removed binding forms: 4 
o|simplifications: ((if . 52) (##core#call . 269)) 
o|  call simplifications:
o|    apply	5
o|    char-upcase
o|    char-whitespace?	2
o|    ##sys#check-list
o|    <
o|    >	5
o|    -	5
o|    vector?	2
o|    boolean?	2
o|    symbol?	3
o|    procedure?
o|    char?
o|    ##sys#generic-structure?
o|    ##sys#byte
o|    fx>	2
o|    string-ref
o|    string-length	4
o|    +	12
o|    integer->char
o|    char->integer	3
o|    ##sys#size	4
o|    fx<=
o|    ##sys#setislot
o|    not	2
o|    fx<	7
o|    ##sys#check-string	4
o|    string?	3
o|    fx-	5
o|    pair?	17
o|    cadr	3
o|    ##sys#slot	20
o|    char=?
o|    fx=
o|    eq?	45
o|    ##sys#check-exact	7
o|    car	23
o|    null?	28
o|    cdr	10
o|    eof-object?	7
o|    fx>=	5
o|    fx+	16
o|    cons	5
o|contracted procedure: k1138 
o|contracted procedure: k1032 
o|contracted procedure: k1132 
o|contracted procedure: k1035 
o|contracted procedure: k1126 
o|contracted procedure: k1038 
o|contracted procedure: k1120 
o|contracted procedure: k1041 
o|contracted procedure: k1114 
o|contracted procedure: k1044 
o|contracted procedure: k1108 
o|contracted procedure: k1047 
o|contracted procedure: k1066 
o|contracted procedure: k1069 
o|contracted procedure: k1083 
o|contracted procedure: k1087 
o|contracted procedure: k1150 
o|contracted procedure: k1153 
o|contracted procedure: k1171 
o|contracted procedure: k1177 
o|contracted procedure: k1183 
o|contracted procedure: k1186 
o|contracted procedure: k1314 
o|contracted procedure: k1195 
o|contracted procedure: k1209 
o|contracted procedure: k1224 
o|contracted procedure: k1236 
o|contracted procedure: k1242 
o|contracted procedure: k1251 
o|contracted procedure: k1260 
o|contracted procedure: k1269 
o|contracted procedure: k1288 
o|contracted procedure: k1291 
o|contracted procedure: k1299 
o|contracted procedure: k1327 
o|contracted procedure: k1320 
o|contracted procedure: k1417 
o|contracted procedure: k1336 
o|contracted procedure: k1411 
o|contracted procedure: k1339 
o|contracted procedure: k1405 
o|contracted procedure: k1342 
o|contracted procedure: k1352 
o|contracted procedure: k1361 
o|contracted procedure: k1373 
o|contracted procedure: k1383 
o|contracted procedure: k1387 
o|contracted procedure: k1393 
o|contracted procedure: k1426 
o|contracted procedure: k1432 
o|contracted procedure: k1445 
o|contracted procedure: k1435 
o|contracted procedure: k1457 
o|contracted procedure: k1580 
o|contracted procedure: k1460 
o|contracted procedure: k1522 
o|contracted procedure: k1518 
o|contracted procedure: k1475 
o|contracted procedure: k1481 
o|contracted procedure: k1487 
o|contracted procedure: k1490 
o|contracted procedure: k1497 
o|contracted procedure: k1501 
o|contracted procedure: k1505 
o|contracted procedure: k1540 
o|contracted procedure: k1546 
o|contracted procedure: k1549 
o|contracted procedure: k1556 
o|contracted procedure: k1560 
o|contracted procedure: k1564 
o|contracted procedure: k1576 
o|contracted procedure: k1654 
o|contracted procedure: k1586 
o|contracted procedure: k1648 
o|contracted procedure: k1589 
o|contracted procedure: k1642 
o|contracted procedure: k1592 
o|contracted procedure: k1636 
o|contracted procedure: k1595 
o|contracted procedure: k1601 
o|contracted procedure: k1604 
o|contracted procedure: k1607 
o|contracted procedure: k1613 
o|contracted procedure: k1623 
o|contracted procedure: k1630 
o|contracted procedure: k1669 
o|contracted procedure: k1681 
o|contracted procedure: k1705 
o|contracted procedure: k1754 
o|contracted procedure: k1721 
o|contracted procedure: k1748 
o|contracted procedure: k1724 
o|contracted procedure: k1742 
o|contracted procedure: k1727 
o|contracted procedure: k1736 
o|contracted procedure: k1730 
o|contracted procedure: k1782 
o|contracted procedure: k1763 
o|contracted procedure: k1779 
o|contracted procedure: k1769 
o|contracted procedure: k1838 
o|contracted procedure: k1791 
o|contracted procedure: k1835 
o|contracted procedure: k1847 
o|contracted procedure: k1855 
o|contracted procedure: k1882 
o|contracted procedure: k1858 
o|contracted procedure: k1878 
o|contracted procedure: k1901 
o|contracted procedure: k1907 
o|contracted procedure: k1914 
o|contracted procedure: k1920 
o|contracted procedure: k1948 
o|contracted procedure: k1930 
o|contracted procedure: k1942 
o|contracted procedure: k1973 
o|contracted procedure: k1957 
o|contracted procedure: k1960 
o|contracted procedure: k1970 
o|contracted procedure: k1999 
o|contracted procedure: k2006 
o|contracted procedure: k1991 
o|contracted procedure: k2015 
o|contracted procedure: k2021 
o|contracted procedure: k2047 
o|contracted procedure: k2054 
o|contracted procedure: k2060 
o|contracted procedure: k2066 
o|contracted procedure: k2072 
o|contracted procedure: k2099 
o|contracted procedure: k2118 
o|contracted procedure: k2138 
o|contracted procedure: k2162 
o|contracted procedure: k2183 
o|contracted procedure: k2215 
o|contracted procedure: k2224 
o|contracted procedure: k2233 
o|contracted procedure: k2242 
o|contracted procedure: k2259 
o|contracted procedure: k2285 
o|contracted procedure: k2304 
o|contracted procedure: k2317 
o|contracted procedure: k2342 
o|contracted procedure: k2350 
o|contracted procedure: k2357 
o|contracted procedure: k2377 
o|contracted procedure: k2384 
o|contracted procedure: k2388 
o|contracted procedure: k2406 
o|contracted procedure: k2424 
o|contracted procedure: k2434 
o|contracted procedure: k2445 
o|contracted procedure: k2467 
o|contracted procedure: k2473 
o|contracted procedure: k2488 
o|contracted procedure: k2506 
o|contracted procedure: k2515 
o|contracted procedure: k2531 
o|contracted procedure: k2548 
o|contracted procedure: k2691 
o|contracted procedure: k2579 
o|contracted procedure: k2588 
o|contracted procedure: k2618 
o|contracted procedure: k2627 
o|contracted procedure: k2642 
o|contracted procedure: k2645 
o|contracted procedure: k2658 
o|contracted procedure: k2665 
o|contracted procedure: k2703 
o|contracted procedure: k2709 
o|contracted procedure: k2716 
o|contracted procedure: k2739 
o|contracted procedure: k2761 
o|contracted procedure: k2770 
o|contracted procedure: k2773 
o|contracted procedure: k2785 
o|contracted procedure: k2798 
o|contracted procedure: k2819 
o|contracted procedure: k2830 
o|contracted procedure: k2823 
o|contracted procedure: k2842 
o|contracted procedure: k2838 
o|contracted procedure: k2834 
o|contracted procedure: k2864 
o|contracted procedure: k2875 
o|contracted procedure: k2881 
o|contracted procedure: k2906 
o|contracted procedure: k2896 
o|contracted procedure: k2931 
o|contracted procedure: k2935 
o|contracted procedure: k2966 
o|contracted procedure: k2986 
o|contracted procedure: k2970 
o|contracted procedure: k2995 
o|contracted procedure: k3013 
o|contracted procedure: k3033 
o|contracted procedure: k3036 
o|contracted procedure: k3054 
o|contracted procedure: k3040 
o|contracted procedure: k3072 
o|contracted procedure: k3075 
o|contracted procedure: k3093 
o|contracted procedure: k3079 
o|contracted procedure: k3111 
o|contracted procedure: k3121 
o|contracted procedure: k3124 
o|contracted procedure: k3135 
o|contracted procedure: k3139 
o|contracted procedure: k3150 
o|contracted procedure: k3154 
o|contracted procedure: k3203 
o|contracted procedure: k3212 
o|contracted procedure: k3206 
o|contracted procedure: k3241 
o|contracted procedure: k3250 
o|contracted procedure: k3253 
o|contracted procedure: k3259 
o|contracted procedure: k3265 
o|contracted procedure: k3271 
o|contracted procedure: k3274 
o|contracted procedure: k3280 
o|contracted procedure: k3286 
o|contracted procedure: k3292 
o|contracted procedure: k3319 
o|contracted procedure: k3325 
o|contracted procedure: k3331 
o|contracted procedure: k3395 
o|contracted procedure: k3435 
o|contracted procedure: k3441 
o|contracted procedure: k3444 
o|contracted procedure: k3451 
o|contracted procedure: k3463 
o|contracted procedure: k3467 
o|contracted procedure: k3479 
o|contracted procedure: k3702 
o|contracted procedure: k3491 
o|contracted procedure: k3497 
o|contracted procedure: k3503 
o|contracted procedure: k3516 
o|contracted procedure: k3529 
o|contracted procedure: k3542 
o|contracted procedure: k3559 
o|contracted procedure: k3576 
o|contracted procedure: k3593 
o|contracted procedure: k3602 
o|contracted procedure: k3611 
o|contracted procedure: k3620 
o|contracted procedure: k3629 
o|contracted procedure: k3632 
o|contracted procedure: k3641 
o|contracted procedure: k3657 
o|contracted procedure: k3668 
o|contracted procedure: k3754 
o|contracted procedure: k3760 
o|contracted procedure: k3764 
o|contracted procedure: k3774 
o|simplifications: ((let . 55)) 
o|removed binding forms: 256 
o|inlining procedure: k1147 
o|inlining procedure: k1610 
o|inlining procedure: k1610 
o|replaced variables: 130 
o|simplifications: ((if . 1)) 
o|replaced variables: 2 
o|removed binding forms: 58 
o|removed binding forms: 1 
o|direct leaf routine/allocation: read-macro-prefix364 0 
o|direct leaf routine/allocation: fetch699 0 
o|contracted procedure: "(extras.scm:300) k2126" 
o|contracted procedure: "(extras.scm:435) k2872" 
o|contracted procedure: "(extras.scm:604) k3482" 
o|contracted procedure: "(extras.scm:606) k3494" 
o|contracted procedure: "(extras.scm:624) k3648" 
o|contracted procedure: "(extras.scm:626) k3664" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip722 0 
o|inlining procedure: k3485 
o|converted assignments to bindings: (skip722) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (fprintf0 k3403 rec694 next700 loop705 k3379 pp367 k3244 tail1564 tail3566 tail2565 indent486 loop546 pp-down491 style505 pp-call489 pp-general492 pr487 generic-write pp-list490 spaces485 doloop470471 g461462 k2339 g450451 loop427 wr-expr410 loop416 read-macro?362 wr-lst411 out365 wr366 k2009 def-n306322 def-port307320 body304312 k1868 loop293 loop244 k1619 k1534 loop191 loop176 loop147 k1189 k1281 loop122 g117118 doloop8687) 
o|calls to known targets: 195 
o|identified direct recursive calls: f_3652 1 
o|identified direct recursive calls: f_3474 1 
o|fast box initializations: 43 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2045 
o|dropping unused closure argument: f_3401 
o|dropping unused closure argument: f_1980 
o|dropping unused closure argument: f_1983 
*/
/* end of file */

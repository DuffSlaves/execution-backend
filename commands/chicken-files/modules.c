/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   2016-05-28 13:49
   Version 4.11.0 (rev ce980c4)
   linux-unix-gnu-x86-64 [ 64bit manyargs ptables ]
   compiled 2016-05-28 on yves.more-magic.net (Linux)
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[183];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,110,97,109,101,32,120,50,52,49,50,54,48,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,31),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,50,52,49,50,57,49,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,44),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,50,52,49,50,57,52,32,121,50,52,50,50,57,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,51,55,52,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,51,56,50,32,110,97,109,101,51,56,51,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,7),40,97,51,50,53,52,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,51,50,55,49,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,97,51,50,55,55,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,48,48,32,103,52,49,50,52,49,57,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,51,56,53,32,116,104,117,110,107,51,56,54,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,103,52,52,49,32,97,52,52,51,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,110,52,51,51,32,100,111,110,101,52,51,52,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,52,51,48,32,108,111,99,52,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,52,53,50,32,46,32,116,109,112,52,53,49,52,53,51,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,11),40,103,52,56,48,32,109,52,56,50,41,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,52,55,50,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,103,53,49,51,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,103,52,57,55,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,57,54,32,103,53,48,51,53,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,52,56,56,32,101,120,112,115,52,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,60),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,53,50,52,32,109,111,100,53,50,53,32,101,120,112,53,50,54,32,118,97,108,53,50,55,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,53,50,57,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,39),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,53,51,50,32,101,110,118,53,51,51,32,115,101,110,118,53,51,52,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,53,51,57,32,109,111,100,53,52,48,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,51),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,53,53,53,32,109,111,100,53,53,54,32,118,97,108,53,53,55,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,103,53,56,49,32,97,53,56,51,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,117,110,100,101,102,105,110,101,100,32,115,121,109,53,55,49,32,109,111,100,53,55,50,32,119,104,101,114,101,53,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,53,57,49,32,101,120,112,108,105,115,116,53,57,50,32,46,32,116,109,112,53,57,48,53,57,51,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,48,32,103,54,49,55,54,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,109,97,114,107,45,105,109,112,111,114,116,101,100,45,115,121,109,98,111,108,115,32,115,101,54,48,55,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,54,57,53,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,109,101,114,103,101,45,115,101,32,115,101,115,54,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,103,55,56,56,32,115,101,120,112,111,114,116,55,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,100,56,50,51,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,56,50,32,103,55,57,52,56,49,54,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,52,57,32,103,55,54,49,55,55,52,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,50,51,32,103,55,51,53,55,52,49,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,55,48,54,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,14),40,103,57,52,50,32,115,101,120,112,57,53,49,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,14),40,103,57,54,51,32,105,101,120,112,57,55,50,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,14),40,103,57,56,52,32,110,101,120,112,57,57,51,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,56,51,32,103,57,57,48,57,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,54,50,32,103,57,54,57,57,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,52,49,32,103,57,52,56,57,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,49,50,32,103,57,50,52,57,51,49,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,56,52,32,103,56,57,54,57,48,51,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,53,54,32,103,56,54,56,56,55,53,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,88),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,56,51,57,32,105,101,120,112,111,114,116,115,56,52,48,32,118,101,120,112,111,114,116,115,56,52,49,32,115,101,120,112,111,114,116,115,56,52,50,32,46,32,116,109,112,56,51,56,56,52,51,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,112,114,105,109,105,116,105,118,101,45,97,108,105,97,115,32,115,121,109,49,48,49,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,14),40,103,49,48,54,57,32,115,101,49,48,56,48,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,54,51,32,103,49,48,55,53,49,48,56,53,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,51,54,32,103,49,48,52,56,49,48,53,53,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,69),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,49,48,50,52,32,118,101,120,112,111,114,116,115,49,48,50,53,32,46,32,116,109,112,49,48,50,51,49,48,50,54,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,48,57,57,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,49,48,57,52,32,109,111,100,49,48,57,53,32,105,110,100,105,114,101,99,116,49,48,57,54,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,103,49,50,50,57,32,97,49,50,51,56,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,50,56,32,103,49,50,51,53,49,50,52,50,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,103,49,49,57,56,32,115,121,109,49,50,48,55,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,57,55,32,103,49,50,48,52,49,50,49,48,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,13),40,103,49,49,56,50,32,117,49,49,57,49,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,103,49,50,57,55,32,109,49,51,48,54,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,57,54,32,103,49,51,48,51,49,51,49,50,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,54,49,32,103,49,50,55,51,49,50,56,55,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,19),40,119,97,114,110,32,109,115,103,54,53,49,32,105,100,54,53,50,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,103,54,54,56,32,97,54,55,48,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,103,54,55,53,32,97,54,55,55,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,54,54,48,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,101,120,112,111,114,116,115,54,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,56,49,32,103,49,49,56,56,49,50,53,52,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,49,54,50,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,49,49,53,52,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,50,55,32,103,49,49,51,57,49,49,52,54,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,49,49,49,56,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,7),40,97,54,48,52,49,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,54,49,48,51,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,54,49,48,56,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,54,49,49,52,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,54,48,57,55,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,54,49,49,57,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,109,110,97,109,101,49,51,50,56,32,108,111,99,49,51,50,57,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,17),40,114,101,115,111,108,118,101,32,115,121,109,49,52,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,116,111,115,116,114,32,120,49,52,50,54,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,110,97,109,101,32,115,112,101,99,49,52,51,49,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,54,51,48,55,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,14),40,103,49,53,49,51,32,105,100,49,53,50,50,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,49,50,32,103,49,53,49,57,49,53,50,52,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,13),40,103,49,53,51,51,32,97,49,53,51,53,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,13),40,103,49,53,51,55,32,97,49,53,51,57,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,38),40,108,111,111,112,32,105,100,115,49,53,48,49,32,118,49,53,48,50,32,115,49,53,48,51,32,109,105,115,115,105,110,103,49,53,48,52,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,55,54,32,103,49,52,56,56,49,52,57,52,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,14),40,103,49,53,57,48,32,105,100,49,53,57,57,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,56,57,32,103,49,53,57,54,49,54,48,49,41,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,14),40,103,49,54,49,48,32,105,100,49,54,49,50,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,115,49,53,55,57,32,115,49,53,56,48,32,105,100,115,49,53,56,49,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,14),40,103,49,54,49,53,32,105,100,49,54,49,55,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,118,49,53,55,48,32,118,49,53,55,49,32,105,100,115,49,53,55,50,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,52,53,32,103,49,53,53,55,49,53,54,51,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,14),40,103,49,54,52,49,32,105,100,49,54,53,48,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,52,48,32,103,49,54,52,55,49,54,55,56,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,53,51,32,103,49,54,54,53,49,54,55,49,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,13),40,103,49,54,56,55,32,97,49,54,56,57,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,115,49,54,51,48,32,115,49,54,51,49,32,105,100,115,49,54,51,50,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,13),40,103,49,54,57,50,32,97,49,54,57,52,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,118,49,54,50,49,32,118,49,54,50,50,32,105,100,115,49,54,50,51,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,13),40,114,101,110,32,105,109,112,49,54,57,57,41,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,51,49,32,103,49,55,52,51,49,55,52,57,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,48,53,32,103,49,55,49,55,49,55,50,51,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,92),40,97,54,51,49,55,32,110,97,109,101,49,52,52,57,49,52,53,48,49,52,53,57,32,102,111,114,109,49,52,53,49,49,52,53,50,49,52,54,48,32,105,109,112,118,49,52,53,51,49,52,53,52,49,52,54,49,32,105,109,112,115,49,52,53,53,49,52,53,54,49,52,54,50,32,105,109,112,105,49,52,53,55,49,52,53,56,49,52,54,51,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,115,112,101,99,32,115,112,101,99,49,52,51,55,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,7),40,97,55,49,48,52,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,15),40,103,49,56,48,48,32,105,109,112,49,56,48,57,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,15),40,103,49,56,50,49,32,105,109,112,49,56,51,48,41,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,55,48,32,103,49,56,56,50,49,56,56,56,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,52,52,32,103,49,56,53,54,49,56,54,50,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,50,52,32,103,49,57,51,54,49,57,52,50,41};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,57,56,32,103,49,57,49,48,49,57,49,54,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,50,48,32,103,49,56,50,55,49,56,51,51,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,57,57,32,103,49,56,48,54,49,56,49,52,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,89),40,97,55,49,49,48,32,110,97,109,101,49,55,55,49,49,55,55,50,49,55,56,49,32,102,111,114,109,49,55,55,51,49,55,55,52,49,55,56,50,32,118,115,118,49,55,55,53,49,55,55,54,49,55,56,51,32,118,115,115,49,55,55,55,49,55,55,56,49,55,56,52,32,118,115,105,49,55,55,57,49,55,56,48,49,55,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,16),40,103,49,55,54,49,32,115,112,101,99,49,55,55,48,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,54,48,32,103,49,55,54,55,49,57,54,51,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,49,52,48,48,32,114,49,52,48,49,32,99,49,52,48,50,32,105,109,112,111,114,116,45,101,110,118,49,52,48,51,32,109,97,99,114,111,45,101,110,118,49,52,48,52,32,109,101,116,97,63,49,52,48,53,32,114,101,101,120,112,63,49,52,48,54,32,108,111,99,49,52,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,49,57,55,53,32,112,114,101,102,105,120,49,57,55,54,41};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,15),40,103,49,57,57,52,32,109,111,100,49,57,57,54,41,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,17),40,109,114,101,110,97,109,101,32,115,121,109,49,57,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,13),40,103,50,48,50,50,32,97,50,48,50,52,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,49,57,55,56,32,97,115,115,105,103,110,49,57,55,57,32,119,104,101,114,101,49,57,56,48,41,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,105,110,116,101,114,102,97,99,101,32,110,97,109,101,50,48,51,56,32,101,120,112,115,50,48,51,57,41,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,50,48,53,52,41,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,16),40,105,102,97,99,101,32,110,97,109,101,50,48,53,53,41};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,50,32,108,115,116,50,48,55,54,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,112,115,50,48,54,52,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,50,48,52,54,32,108,111,99,50,48,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,50,48,56,54,32,102,97,114,103,115,50,48,56,55,32,102,101,120,112,115,50,48,56,56,32,98,111,100,121,50,48,56,57,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,50,49,48,53,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,49,53,32,103,50,49,50,55,50,49,51,51,41};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,50,32,102,97,115,50,49,52,55,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,97,115,50,49,52,48,32,102,97,115,50,49,52,49,41,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,50,48,57,54,32,102,110,97,109,101,50,48,57,55,32,97,114,103,115,50,48,57,56,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,15),40,103,50,49,55,54,32,101,120,112,50,49,56,53,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,57,55,32,103,50,50,48,57,50,50,49,54,41};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,55,53,32,103,50,49,56,50,50,49,57,49,41,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,78),40,35,35,115,121,115,35,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,97,108,105,97,115,50,49,54,54,32,110,97,109,101,50,49,54,55,32,109,110,97,109,101,50,49,54,56,32,101,120,112,115,50,49,54,57,32,102,110,97,109,101,50,49,55,48,41,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,44),40,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,50,50,51,52,32,46,32,116,109,112,50,50,51,51,50,50,51,53,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word *av) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word *av) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word *av) C_noret;
C_noret_decl(f_4325)
static void C_fcall f_4325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4125)
static void C_fcall f_4125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word *av) C_noret;
C_noret_decl(f_7236)
static void C_ccall f_7236(C_word c,C_word *av) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word *av) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word *av) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word *av) C_noret;
C_noret_decl(f_3812)
static void C_fcall f_3812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3819)
static void C_fcall f_3819(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word *av) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word *av) C_noret;
C_noret_decl(f_7243)
static void C_ccall f_7243(C_word c,C_word *av) C_noret;
C_noret_decl(f_7240)
static void C_ccall f_7240(C_word c,C_word *av) C_noret;
C_noret_decl(f_7099)
static void C_fcall f_7099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7098)
static void C_ccall f_7098(C_word c,C_word *av) C_noret;
C_noret_decl(f_7095)
static void C_ccall f_7095(C_word c,C_word *av) C_noret;
C_noret_decl(f_7249)
static void C_ccall f_7249(C_word c,C_word *av) C_noret;
C_noret_decl(f_7215)
static void C_ccall f_7215(C_word c,C_word *av) C_noret;
C_noret_decl(f_7218)
static void C_fcall f_7218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4165)
static void C_fcall f_4165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7022)
static void C_fcall f_7022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7228)
static void C_ccall f_7228(C_word c,C_word *av) C_noret;
C_noret_decl(f_7221)
static void C_ccall f_7221(C_word c,C_word *av) C_noret;
C_noret_decl(f_5182)
static void C_ccall f_5182(C_word c,C_word *av) C_noret;
C_noret_decl(f_4194)
static void C_ccall f_4194(C_word c,C_word *av) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word *av) C_noret;
C_noret_decl(f_7276)
static void C_ccall f_7276(C_word c,C_word *av) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word *av) C_noret;
C_noret_decl(f_5244)
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139(C_word c,C_word *av) C_noret;
C_noret_decl(f_5220)
static void C_fcall f_5220(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word *av) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word *av) C_noret;
C_noret_decl(f_6507)
static void C_ccall f_6507(C_word c,C_word *av) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word *av) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word *av) C_noret;
C_noret_decl(f_6512)
static void C_fcall f_6512(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word *av) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word *av) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word *av) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word *av) C_noret;
C_noret_decl(f_5638)
static void C_ccall f_5638(C_word c,C_word *av) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060(C_word c,C_word *av) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word *av) C_noret;
C_noret_decl(f_6524)
static void C_fcall f_6524(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word *av) C_noret;
C_noret_decl(f_4941)
static void C_fcall f_4941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5644)
static void C_ccall f_5644(C_word c,C_word *av) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word *av) C_noret;
C_noret_decl(f_6532)
static void C_fcall f_6532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7400)
static void C_fcall f_7400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word *av) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4377)
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5651)
static void C_fcall f_5651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word *av) C_noret;
C_noret_decl(f_7434)
static void C_fcall f_7434(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word *av) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5278)
static void C_fcall f_5278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7013)
static void C_ccall f_7013(C_word c,C_word *av) C_noret;
C_noret_decl(f_4133)
static void C_fcall f_4133(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6555)
static void C_fcall f_6555(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word *av) C_noret;
C_noret_decl(f_7614)
static void C_fcall f_7614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7610)
static void C_ccall f_7610(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_fcall f_4987(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6565)
static void C_ccall f_6565(C_word c,C_word *av) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word *av) C_noret;
C_noret_decl(f_7621)
static void C_ccall f_7621(C_word c,C_word *av) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word *av) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word *av) C_noret;
C_noret_decl(f_4964)
static void C_fcall f_4964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7603)
static void C_ccall f_7603(C_word c,C_word *av) C_noret;
C_noret_decl(f_7606)
static void C_fcall f_7606(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word *av) C_noret;
C_noret_decl(f_6318)
static void C_ccall f_6318(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_6383)
static void C_ccall f_6383(C_word c,C_word *av) C_noret;
C_noret_decl(f_5570)
static void C_fcall f_5570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8364)
static void C_ccall f_8364(C_word c,C_word *av) C_noret;
C_noret_decl(f_6342)
static void C_fcall f_6342(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6360)
static void C_ccall f_6360(C_word c,C_word *av) C_noret;
C_noret_decl(f_6337)
static void C_ccall f_6337(C_word c,C_word *av) C_noret;
C_noret_decl(f8830)
static void C_ccall f8830(C_word c,C_word *av) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word *av) C_noret;
C_noret_decl(f_8320)
static void C_ccall f_8320(C_word c,C_word *av) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word *av) C_noret;
C_noret_decl(f_6947)
static void C_ccall f_6947(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word *av) C_noret;
C_noret_decl(f_8317)
static void C_ccall f_8317(C_word c,C_word *av) C_noret;
C_noret_decl(f_7926)
static void C_ccall f_7926(C_word c,C_word *av) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word *av) C_noret;
C_noret_decl(f_6350)
static void C_fcall f_6350(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6951)
static void C_ccall f_6951(C_word c,C_word *av) C_noret;
C_noret_decl(f_8329)
static void C_ccall f_8329(C_word c,C_word *av) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_8344)
static void C_ccall f_8344(C_word c,C_word *av) C_noret;
C_noret_decl(f_8337)
static void C_ccall f_8337(C_word c,C_word *av) C_noret;
C_noret_decl(f_8335)
static void C_ccall f_8335(C_word c,C_word *av) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word *av) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word *av) C_noret;
C_noret_decl(f_6583)
static void C_fcall f_6583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_7957)
static void C_ccall f_7957(C_word c,C_word *av) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word *av) C_noret;
C_noret_decl(f_7950)
static void C_fcall f_7950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6595)
static void C_ccall f_6595(C_word c,C_word *av) C_noret;
C_noret_decl(f_6986)
static void C_ccall f_6986(C_word c,C_word *av) C_noret;
C_noret_decl(f_6988)
static void C_fcall f_6988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_7967)
static void C_fcall f_7967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8302)
static void C_ccall f_8302(C_word c,C_word *av) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word *av) C_noret;
C_noret_decl(f_3959)
static void C_fcall f_3959(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7942)
static void C_ccall f_7942(C_word c,C_word *av) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word *av) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5329)
static void C_fcall f_5329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word *av) C_noret;
C_noret_decl(f_4616)
static void C_fcall f_4616(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f8869)
static void C_ccall f8869(C_word c,C_word *av) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word *av) C_noret;
C_noret_decl(f_3923)
static void C_fcall f_3923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f8856)
static void C_ccall f8856(C_word c,C_word *av) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word *av) C_noret;
C_noret_decl(f8884)
static void C_ccall f8884(C_word c,C_word *av) C_noret;
C_noret_decl(f_5976)
static void C_fcall f_5976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6976)
static void C_ccall f_6976(C_word c,C_word *av) C_noret;
C_noret_decl(f_6726)
static void C_fcall f_6726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word *av) C_noret;
C_noret_decl(f_6373)
static void C_fcall f_6373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word *av) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word *av) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word *av) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word *av) C_noret;
C_noret_decl(f_6928)
static void C_ccall f_6928(C_word c,C_word *av) C_noret;
C_noret_decl(f_6758)
static void C_fcall f_6758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word *av) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word *av) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word *av) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word *av) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word *av) C_noret;
C_noret_decl(f_5745)
static void C_fcall f_5745(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5743)
static void C_ccall f_5743(C_word c,C_word *av) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word *av) C_noret;
C_noret_decl(f_8184)
static void C_fcall f_8184(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5331)
static void C_fcall f_5331(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6706)
static void C_fcall f_6706(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6701)
static void C_ccall f_6701(C_word c,C_word *av) C_noret;
C_noret_decl(f_6718)
static void C_fcall f_6718(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5359)
static void C_fcall f_5359(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7474)
static void C_fcall f_7474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8171)
static void C_fcall f_8171(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5704)
static void C_ccall f_5704(C_word c,C_word *av) C_noret;
C_noret_decl(f_8148)
static void C_ccall f_8148(C_word c,C_word *av) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word *av) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word *av) C_noret;
C_noret_decl(f_5714)
static void C_fcall f_5714(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word *av) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word *av) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word *av) C_noret;
C_noret_decl(f_7593)
static void C_ccall f_7593(C_word c,C_word *av) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word *av) C_noret;
C_noret_decl(f_8164)
static void C_ccall f_8164(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word *av) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_6768)
static void C_ccall f_6768(C_word c,C_word *av) C_noret;
C_noret_decl(f_7640)
static void C_ccall f_7640(C_word c,C_word *av) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word *av) C_noret;
C_noret_decl(f_5941)
static void C_fcall f_5941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8100)
static void C_ccall f_8100(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_7585)
static void C_ccall f_7585(C_word c,C_word *av) C_noret;
C_noret_decl(f_6781)
static void C_fcall f_6781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7674)
static void C_fcall f_7674(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word *av) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word *av) C_noret;
C_noret_decl(f_6140)
static void C_ccall f_6140(C_word c,C_word *av) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word *av) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word *av) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6151)
static void C_ccall f_6151(C_word c,C_word *av) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word *av) C_noret;
C_noret_decl(f_6001)
static void C_ccall f_6001(C_word c,C_word *av) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word *av) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word *av) C_noret;
C_noret_decl(f_6015)
static void C_ccall f_6015(C_word c,C_word *av) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word *av) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_7991)
static void C_fcall f_7991(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6184)
static void C_fcall f_6184(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3520)
static C_word C_fcall f_3520(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word *av) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word *av) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word *av) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word *av) C_noret;
C_noret_decl(f_3512)
static C_word C_fcall f_3512(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word *av) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word *av) C_noret;
C_noret_decl(f_6120)
static void C_ccall f_6120(C_word c,C_word *av) C_noret;
C_noret_decl(f_6124)
static void C_ccall f_6124(C_word c,C_word *av) C_noret;
C_noret_decl(f_7989)
static void C_ccall f_7989(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899(C_word c,C_word *av) C_noret;
C_noret_decl(f_5506)
static void C_fcall f_5506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word *av) C_noret;
C_noret_decl(f_4257)
static void C_fcall f_4257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word *av) C_noret;
C_noret_decl(f_4887)
static void C_fcall f_4887(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_4242)
static void C_fcall f_4242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word *av) C_noret;
C_noret_decl(f_4434)
static void C_fcall f_4434(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7391)
static void C_ccall f_7391(C_word c,C_word *av) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word *av) C_noret;
C_noret_decl(f_5525)
static void C_fcall f_5525(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word *av) C_noret;
C_noret_decl(f_6165)
static void C_ccall f_6165(C_word c,C_word *av) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word *av) C_noret;
C_noret_decl(f_6160)
static void C_ccall f_6160(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_fcall f_3359(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word *av) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3351)
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word *av) C_noret;
C_noret_decl(f_7173)
static void C_fcall f_7173(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7172)
static void C_ccall f_7172(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word *av) C_noret;
C_noret_decl(f_4853)
static void C_fcall f_4853(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word *av) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word *av) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word *av) C_noret;
C_noret_decl(f_5086)
static void C_fcall f_5086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word *av) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word *av) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word *av) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word *av) C_noret;
C_noret_decl(f_6063)
static void C_ccall f_6063(C_word c,C_word *av) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word *av) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word *av) C_noret;
C_noret_decl(f_6077)
static void C_ccall f_6077(C_word c,C_word *av) C_noret;
C_noret_decl(f_6071)
static void C_ccall f_6071(C_word c,C_word *av) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word *av) C_noret;
C_noret_decl(f_6115)
static void C_ccall f_6115(C_word c,C_word *av) C_noret;
C_noret_decl(f_4839)
static void C_ccall f_4839(C_word c,C_word *av) C_noret;
C_noret_decl(f_6204)
static void C_ccall f_6204(C_word c,C_word *av) C_noret;
C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word *av) C_noret;
C_noret_decl(f_6046)
static void C_ccall f_6046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3311)
static void C_fcall f_3311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word *av) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word *av) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word *av) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word *av) C_noret;
C_noret_decl(f_4827)
static void C_fcall f_4827(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5052)
static void C_fcall f_5052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word *av) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word *av) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word *av) C_noret;
C_noret_decl(f_7330)
static void C_fcall f_7330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word *av) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_5043)
static void C_ccall f_5043(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5558)
static void C_fcall f_5558(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word *av) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word *av) C_noret;
C_noret_decl(f_6271)
static void C_fcall f_6271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word *av) C_noret;
C_noret_decl(f_6030)
static void C_ccall f_6030(C_word c,C_word *av) C_noret;
C_noret_decl(f_6033)
static void C_ccall f_6033(C_word c,C_word *av) C_noret;
C_noret_decl(f_7127)
static void C_ccall f_7127(C_word c,C_word *av) C_noret;
C_noret_decl(f_7128)
static void C_fcall f_7128(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3554)
static void C_fcall f_3554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word *av) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5018)
static void C_fcall f_5018(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word *av) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word *av) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word *av) C_noret;
C_noret_decl(f_6252)
static void C_fcall f_6252(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7377)
static void C_ccall f_7377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word *av) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_fcall f_6227(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7528)
static void C_ccall f_7528(C_word c,C_word *av) C_noret;
C_noret_decl(f_7105)
static void C_ccall f_7105(C_word c,C_word *av) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word *av) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510(C_word c,C_word *av) C_noret;
C_noret_decl(f_3477)
static void C_fcall f_3477(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4476)
static void C_fcall f_4476(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word *av) C_noret;
C_noret_decl(f_7730)
static void C_fcall f_7730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6231)
static void C_ccall f_6231(C_word c,C_word *av) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word *av) C_noret;
C_noret_decl(f_7708)
static void C_ccall f_7708(C_word c,C_word *av) C_noret;
C_noret_decl(f_7166)
static void C_ccall f_7166(C_word c,C_word *av) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word *av) C_noret;
C_noret_decl(f_6280)
static void C_fcall f_6280(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_7713)
static void C_ccall f_7713(C_word c,C_word *av) C_noret;
C_noret_decl(f_7711)
static void C_ccall f_7711(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_6423)
static void C_fcall f_6423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6401)
static void C_fcall f_6401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_5495)
static void C_ccall f_5495(C_word c,C_word *av) C_noret;
C_noret_decl(f_5492)
static void C_ccall f_5492(C_word c,C_word *av) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word *av) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word *av) C_noret;
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word *av) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word *av) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word *av) C_noret;
C_noret_decl(f_6698)
static void C_ccall f_6698(C_word c,C_word *av) C_noret;
C_noret_decl(C_modules_toplevel)
C_externexport void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_6457)
static void C_fcall f_6457(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5425)
static void C_ccall f_5425(C_word c,C_word *av) C_noret;
C_noret_decl(f_6660)
static void C_fcall f_6660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word *av) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word *av) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_7829)
static void C_ccall f_7829(C_word c,C_word *av) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word *av) C_noret;
C_noret_decl(f_6624)
static void C_fcall f_6624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7803)
static void C_ccall f_7803(C_word c,C_word *av) C_noret;
C_noret_decl(f_8051)
static void C_fcall f_8051(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4565)
static void C_fcall f_4565(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word *av) C_noret;
C_noret_decl(f_8063)
static void C_fcall f_8063(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8030)
static void C_ccall f_8030(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_fcall f_7843(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6482)
static void C_ccall f_6482(C_word c,C_word *av) C_noret;
C_noret_decl(f_5440)
static void C_ccall f_5440(C_word c,C_word *av) C_noret;
C_noret_decl(f_5441)
static void C_fcall f_5441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word *av) C_noret;
C_noret_decl(f_5840)
static void C_fcall f_5840(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7572)
static void C_ccall f_7572(C_word c,C_word *av) C_noret;
C_noret_decl(f_6498)
static void C_ccall f_6498(C_word c,C_word *av) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word *av) C_noret;
C_noret_decl(f_5856)
static void C_fcall f_5856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_6820)
static void C_fcall f_6820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7507)
static void C_ccall f_7507(C_word c,C_word *av) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word *av) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word *av) C_noret;
C_noret_decl(f_6836)
static void C_ccall f_6836(C_word c,C_word *av) C_noret;
C_noret_decl(f_7484)
static void C_ccall f_7484(C_word c,C_word *av) C_noret;
C_noret_decl(f_8085)
static void C_ccall f_8085(C_word c,C_word *av) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word *av) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word *av) C_noret;
C_noret_decl(f_8089)
static void C_ccall f_8089(C_word c,C_word *av) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_7497)
static void C_fcall f_7497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7562)
static void C_fcall f_7562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7560)
static void C_ccall f_7560(C_word c,C_word *av) C_noret;
C_noret_decl(f_6685)
static void C_ccall f_6685(C_word c,C_word *av) C_noret;
C_noret_decl(f_5809)
static void C_fcall f_5809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7771)
static void C_fcall f_7771(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word *av) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word *av) C_noret;
C_noret_decl(f_8292)
static void C_fcall f_8292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word *av) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word *av) C_noret;
C_noret_decl(f_7543)
static void C_ccall f_7543(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word *av) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209(C_word c,C_word *av) C_noret;
C_noret_decl(f_7724)
static void C_fcall f_7724(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4038)
static void C_fcall f_4038(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7721)
static void C_ccall f_7721(C_word c,C_word *av) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word *av) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word *av) C_noret;
C_noret_decl(f_4317)
static void C_fcall f_4317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8250)
static void C_ccall f_8250(C_word c,C_word *av) C_noret;
C_noret_decl(f_8256)
static void C_ccall f_8256(C_word c,C_word *av) C_noret;
C_noret_decl(f_8258)
static void C_fcall f_8258(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5868)
static void C_fcall f_5868(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4088)
static void C_fcall f_4088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word *av) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word *av) C_noret;
C_noret_decl(f_6889)
static void C_ccall f_6889(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word *av) C_noret;
C_noret_decl(f_8211)
static void C_ccall f_8211(C_word c,C_word *av) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word *av) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word *av) C_noret;
C_noret_decl(f_5782)
static void C_fcall f_5782(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8224)
static void C_ccall f_8224(C_word c,C_word *av) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3455)
static void C_fcall f_3455(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8228)
static void C_ccall f_8228(C_word c,C_word *av) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word *av) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396(C_word c,C_word *av) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word *av) C_noret;
C_noret_decl(f_6873)
static void C_fcall f_6873(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7252)
static void C_ccall f_7252(C_word c,C_word *av) C_noret;
C_noret_decl(f_7259)
static void C_ccall f_7259(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_fcall f_4590(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7269)
static void C_ccall f_7269(C_word c,C_word *av) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word *av) C_noret;
C_noret_decl(f_7870)
static void C_fcall f_7870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word *av) C_noret;
C_noret_decl(f_4791)
static void C_ccall f_4791(C_word c,C_word *av) C_noret;
C_noret_decl(f_7884)
static void C_ccall f_7884(C_word c,C_word *av) C_noret;
C_noret_decl(f_4361)
static void C_fcall f_4361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word *av) C_noret;
C_noret_decl(f_8232)
static void C_ccall f_8232(C_word c,C_word *av) C_noret;
C_noret_decl(f_8236)
static void C_ccall f_8236(C_word c,C_word *av) C_noret;
C_noret_decl(f_4061)
static void C_fcall f_4061(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7294)
static void C_ccall f_7294(C_word c,C_word *av) C_noret;
C_noret_decl(f_7296)
static void C_fcall f_7296(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4775)
static void C_ccall f_4775(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_5603)
static void C_ccall f_5603(C_word c,C_word *av) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word *av) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word *av) C_noret;

C_noret_decl(trf_4325)
static void C_ccall trf_4325(C_word c,C_word *av) C_noret;
static void C_ccall trf_4325(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4325(t0,t1);}

C_noret_decl(trf_4125)
static void C_ccall trf_4125(C_word c,C_word *av) C_noret;
static void C_ccall trf_4125(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4125(t0,t1,t2);}

C_noret_decl(trf_3812)
static void C_ccall trf_3812(C_word c,C_word *av) C_noret;
static void C_ccall trf_3812(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3812(t0,t1,t2);}

C_noret_decl(trf_3819)
static void C_ccall trf_3819(C_word c,C_word *av) C_noret;
static void C_ccall trf_3819(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3819(t0,t1);}

C_noret_decl(trf_7099)
static void C_ccall trf_7099(C_word c,C_word *av) C_noret;
static void C_ccall trf_7099(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7099(t0,t1,t2);}

C_noret_decl(trf_7218)
static void C_ccall trf_7218(C_word c,C_word *av) C_noret;
static void C_ccall trf_7218(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7218(t0,t1);}

C_noret_decl(trf_4165)
static void C_ccall trf_4165(C_word c,C_word *av) C_noret;
static void C_ccall trf_4165(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4165(t0,t1,t2);}

C_noret_decl(trf_7022)
static void C_ccall trf_7022(C_word c,C_word *av) C_noret;
static void C_ccall trf_7022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7022(t0,t1,t2);}

C_noret_decl(trf_5244)
static void C_ccall trf_5244(C_word c,C_word *av) C_noret;
static void C_ccall trf_5244(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5244(t0,t1,t2);}

C_noret_decl(trf_5220)
static void C_ccall trf_5220(C_word c,C_word *av) C_noret;
static void C_ccall trf_5220(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5220(t0,t1,t2);}

C_noret_decl(trf_6512)
static void C_ccall trf_6512(C_word c,C_word *av) C_noret;
static void C_ccall trf_6512(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6512(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6524)
static void C_ccall trf_6524(C_word c,C_word *av) C_noret;
static void C_ccall trf_6524(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6524(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4941)
static void C_ccall trf_4941(C_word c,C_word *av) C_noret;
static void C_ccall trf_4941(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4941(t0,t1,t2);}

C_noret_decl(trf_6532)
static void C_ccall trf_6532(C_word c,C_word *av) C_noret;
static void C_ccall trf_6532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6532(t0,t1,t2);}

C_noret_decl(trf_7400)
static void C_ccall trf_7400(C_word c,C_word *av) C_noret;
static void C_ccall trf_7400(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7400(t0,t1,t2);}

C_noret_decl(trf_4377)
static void C_ccall trf_4377(C_word c,C_word *av) C_noret;
static void C_ccall trf_4377(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4377(t0,t1,t2);}

C_noret_decl(trf_5651)
static void C_ccall trf_5651(C_word c,C_word *av) C_noret;
static void C_ccall trf_5651(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5651(t0,t1,t2);}

C_noret_decl(trf_7434)
static void C_ccall trf_7434(C_word c,C_word *av) C_noret;
static void C_ccall trf_7434(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7434(t0,t1,t2);}

C_noret_decl(trf_5278)
static void C_ccall trf_5278(C_word c,C_word *av) C_noret;
static void C_ccall trf_5278(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5278(t0,t1,t2);}

C_noret_decl(trf_4133)
static void C_ccall trf_4133(C_word c,C_word *av) C_noret;
static void C_ccall trf_4133(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4133(t0,t1);}

C_noret_decl(trf_6555)
static void C_ccall trf_6555(C_word c,C_word *av) C_noret;
static void C_ccall trf_6555(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6555(t0,t1,t2);}

C_noret_decl(trf_7614)
static void C_ccall trf_7614(C_word c,C_word *av) C_noret;
static void C_ccall trf_7614(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7614(t0,t1,t2);}

C_noret_decl(trf_4987)
static void C_ccall trf_4987(C_word c,C_word *av) C_noret;
static void C_ccall trf_4987(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4987(t0,t1,t2);}

C_noret_decl(trf_4964)
static void C_ccall trf_4964(C_word c,C_word *av) C_noret;
static void C_ccall trf_4964(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4964(t0,t1,t2);}

C_noret_decl(trf_7606)
static void C_ccall trf_7606(C_word c,C_word *av) C_noret;
static void C_ccall trf_7606(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7606(t0,t1,t2);}

C_noret_decl(trf_5570)
static void C_ccall trf_5570(C_word c,C_word *av) C_noret;
static void C_ccall trf_5570(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5570(t0,t1,t2);}

C_noret_decl(trf_6342)
static void C_ccall trf_6342(C_word c,C_word *av) C_noret;
static void C_ccall trf_6342(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6342(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6350)
static void C_ccall trf_6350(C_word c,C_word *av) C_noret;
static void C_ccall trf_6350(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6350(t0,t1,t2);}

C_noret_decl(trf_6583)
static void C_ccall trf_6583(C_word c,C_word *av) C_noret;
static void C_ccall trf_6583(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6583(t0,t1,t2);}

C_noret_decl(trf_7950)
static void C_ccall trf_7950(C_word c,C_word *av) C_noret;
static void C_ccall trf_7950(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7950(t0,t1,t2);}

C_noret_decl(trf_6988)
static void C_ccall trf_6988(C_word c,C_word *av) C_noret;
static void C_ccall trf_6988(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6988(t0,t1,t2);}

C_noret_decl(trf_7967)
static void C_ccall trf_7967(C_word c,C_word *av) C_noret;
static void C_ccall trf_7967(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7967(t0,t1);}

C_noret_decl(trf_3959)
static void C_ccall trf_3959(C_word c,C_word *av) C_noret;
static void C_ccall trf_3959(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3959(t0,t1,t2);}

C_noret_decl(trf_5329)
static void C_ccall trf_5329(C_word c,C_word *av) C_noret;
static void C_ccall trf_5329(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5329(t0,t1);}

C_noret_decl(trf_4616)
static void C_ccall trf_4616(C_word c,C_word *av) C_noret;
static void C_ccall trf_4616(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4616(t0,t1,t2);}

C_noret_decl(trf_3923)
static void C_ccall trf_3923(C_word c,C_word *av) C_noret;
static void C_ccall trf_3923(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3923(t0,t1);}

C_noret_decl(trf_5976)
static void C_ccall trf_5976(C_word c,C_word *av) C_noret;
static void C_ccall trf_5976(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5976(t0,t1,t2);}

C_noret_decl(trf_6726)
static void C_ccall trf_6726(C_word c,C_word *av) C_noret;
static void C_ccall trf_6726(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6726(t0,t1,t2);}

C_noret_decl(trf_6373)
static void C_ccall trf_6373(C_word c,C_word *av) C_noret;
static void C_ccall trf_6373(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6373(t0,t1,t2);}

C_noret_decl(trf_6758)
static void C_ccall trf_6758(C_word c,C_word *av) C_noret;
static void C_ccall trf_6758(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6758(t0,t1,t2);}

C_noret_decl(trf_5745)
static void C_ccall trf_5745(C_word c,C_word *av) C_noret;
static void C_ccall trf_5745(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5745(t0,t1,t2);}

C_noret_decl(trf_8184)
static void C_ccall trf_8184(C_word c,C_word *av) C_noret;
static void C_ccall trf_8184(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8184(t0,t1);}

C_noret_decl(trf_5331)
static void C_ccall trf_5331(C_word c,C_word *av) C_noret;
static void C_ccall trf_5331(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5331(t0,t1,t2);}

C_noret_decl(trf_6706)
static void C_ccall trf_6706(C_word c,C_word *av) C_noret;
static void C_ccall trf_6706(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6706(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6718)
static void C_ccall trf_6718(C_word c,C_word *av) C_noret;
static void C_ccall trf_6718(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6718(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5359)
static void C_ccall trf_5359(C_word c,C_word *av) C_noret;
static void C_ccall trf_5359(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5359(t0,t1);}

C_noret_decl(trf_7474)
static void C_ccall trf_7474(C_word c,C_word *av) C_noret;
static void C_ccall trf_7474(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7474(t0,t1,t2);}

C_noret_decl(trf_8171)
static void C_ccall trf_8171(C_word c,C_word *av) C_noret;
static void C_ccall trf_8171(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8171(t0,t1,t2);}

C_noret_decl(trf_5714)
static void C_ccall trf_5714(C_word c,C_word *av) C_noret;
static void C_ccall trf_5714(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5714(t0,t1,t2);}

C_noret_decl(trf_5941)
static void C_ccall trf_5941(C_word c,C_word *av) C_noret;
static void C_ccall trf_5941(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5941(t0,t1,t2);}

C_noret_decl(trf_6781)
static void C_ccall trf_6781(C_word c,C_word *av) C_noret;
static void C_ccall trf_6781(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6781(t0,t1,t2);}

C_noret_decl(trf_7674)
static void C_ccall trf_7674(C_word c,C_word *av) C_noret;
static void C_ccall trf_7674(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7674(t0,t1,t2);}

C_noret_decl(trf_7991)
static void C_ccall trf_7991(C_word c,C_word *av) C_noret;
static void C_ccall trf_7991(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7991(t0,t1,t2);}

C_noret_decl(trf_6184)
static void C_ccall trf_6184(C_word c,C_word *av) C_noret;
static void C_ccall trf_6184(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6184(t0,t1,t2);}

C_noret_decl(trf_5506)
static void C_ccall trf_5506(C_word c,C_word *av) C_noret;
static void C_ccall trf_5506(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5506(t0,t1,t2);}

C_noret_decl(trf_4257)
static void C_ccall trf_4257(C_word c,C_word *av) C_noret;
static void C_ccall trf_4257(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4257(t0,t1,t2);}

C_noret_decl(trf_4887)
static void C_ccall trf_4887(C_word c,C_word *av) C_noret;
static void C_ccall trf_4887(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4887(t0,t1,t2);}

C_noret_decl(trf_4242)
static void C_ccall trf_4242(C_word c,C_word *av) C_noret;
static void C_ccall trf_4242(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4242(t0,t1);}

C_noret_decl(trf_4434)
static void C_ccall trf_4434(C_word c,C_word *av) C_noret;
static void C_ccall trf_4434(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4434(t0,t1,t2);}

C_noret_decl(trf_5525)
static void C_ccall trf_5525(C_word c,C_word *av) C_noret;
static void C_ccall trf_5525(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5525(t0,t1,t2);}

C_noret_decl(trf_3359)
static void C_ccall trf_3359(C_word c,C_word *av) C_noret;
static void C_ccall trf_3359(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3359(t0,t1,t2);}

C_noret_decl(trf_3351)
static void C_ccall trf_3351(C_word c,C_word *av) C_noret;
static void C_ccall trf_3351(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3351(t0,t1,t2,t3);}

C_noret_decl(trf_7173)
static void C_ccall trf_7173(C_word c,C_word *av) C_noret;
static void C_ccall trf_7173(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7173(t0,t1,t2);}

C_noret_decl(trf_4853)
static void C_ccall trf_4853(C_word c,C_word *av) C_noret;
static void C_ccall trf_4853(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4853(t0,t1,t2);}

C_noret_decl(trf_5086)
static void C_ccall trf_5086(C_word c,C_word *av) C_noret;
static void C_ccall trf_5086(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5086(t0,t1,t2);}

C_noret_decl(trf_3311)
static void C_ccall trf_3311(C_word c,C_word *av) C_noret;
static void C_ccall trf_3311(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3311(t0,t1,t2);}

C_noret_decl(trf_4827)
static void C_ccall trf_4827(C_word c,C_word *av) C_noret;
static void C_ccall trf_4827(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4827(t0,t1,t2);}

C_noret_decl(trf_5052)
static void C_ccall trf_5052(C_word c,C_word *av) C_noret;
static void C_ccall trf_5052(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5052(t0,t1,t2);}

C_noret_decl(trf_7330)
static void C_ccall trf_7330(C_word c,C_word *av) C_noret;
static void C_ccall trf_7330(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7330(t0,t1,t2);}

C_noret_decl(trf_5558)
static void C_ccall trf_5558(C_word c,C_word *av) C_noret;
static void C_ccall trf_5558(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5558(t0,t1,t2);}

C_noret_decl(trf_6271)
static void C_ccall trf_6271(C_word c,C_word *av) C_noret;
static void C_ccall trf_6271(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6271(t0,t1);}

C_noret_decl(trf_7128)
static void C_ccall trf_7128(C_word c,C_word *av) C_noret;
static void C_ccall trf_7128(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7128(t0,t1,t2);}

C_noret_decl(trf_3554)
static void C_ccall trf_3554(C_word c,C_word *av) C_noret;
static void C_ccall trf_3554(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3554(t0,t1,t2);}

C_noret_decl(trf_5018)
static void C_ccall trf_5018(C_word c,C_word *av) C_noret;
static void C_ccall trf_5018(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5018(t0,t1,t2);}

C_noret_decl(trf_6252)
static void C_ccall trf_6252(C_word c,C_word *av) C_noret;
static void C_ccall trf_6252(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6252(t0,t1,t2);}

C_noret_decl(trf_6227)
static void C_ccall trf_6227(C_word c,C_word *av) C_noret;
static void C_ccall trf_6227(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6227(t0,t1);}

C_noret_decl(trf_3477)
static void C_ccall trf_3477(C_word c,C_word *av) C_noret;
static void C_ccall trf_3477(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3477(t0,t1,t2);}

C_noret_decl(trf_4476)
static void C_ccall trf_4476(C_word c,C_word *av) C_noret;
static void C_ccall trf_4476(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4476(t0,t1,t2);}

C_noret_decl(trf_7730)
static void C_ccall trf_7730(C_word c,C_word *av) C_noret;
static void C_ccall trf_7730(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7730(t0,t1,t2);}

C_noret_decl(trf_6280)
static void C_ccall trf_6280(C_word c,C_word *av) C_noret;
static void C_ccall trf_6280(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6280(t0,t1);}

C_noret_decl(trf_6423)
static void C_ccall trf_6423(C_word c,C_word *av) C_noret;
static void C_ccall trf_6423(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6423(t0,t1,t2);}

C_noret_decl(trf_6401)
static void C_ccall trf_6401(C_word c,C_word *av) C_noret;
static void C_ccall trf_6401(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6401(t0,t1,t2);}

C_noret_decl(trf_6457)
static void C_ccall trf_6457(C_word c,C_word *av) C_noret;
static void C_ccall trf_6457(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6457(t0,t1,t2);}

C_noret_decl(trf_6660)
static void C_ccall trf_6660(C_word c,C_word *av) C_noret;
static void C_ccall trf_6660(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6660(t0,t1,t2);}

C_noret_decl(trf_6624)
static void C_ccall trf_6624(C_word c,C_word *av) C_noret;
static void C_ccall trf_6624(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6624(t0,t1,t2);}

C_noret_decl(trf_8051)
static void C_ccall trf_8051(C_word c,C_word *av) C_noret;
static void C_ccall trf_8051(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8051(t0,t1,t2,t3);}

C_noret_decl(trf_4565)
static void C_ccall trf_4565(C_word c,C_word *av) C_noret;
static void C_ccall trf_4565(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4565(t0,t1,t2);}

C_noret_decl(trf_8063)
static void C_ccall trf_8063(C_word c,C_word *av) C_noret;
static void C_ccall trf_8063(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8063(t0,t1,t2);}

C_noret_decl(trf_7843)
static void C_ccall trf_7843(C_word c,C_word *av) C_noret;
static void C_ccall trf_7843(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7843(t0,t1);}

C_noret_decl(trf_5441)
static void C_ccall trf_5441(C_word c,C_word *av) C_noret;
static void C_ccall trf_5441(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5441(t0,t1,t2);}

C_noret_decl(trf_5840)
static void C_ccall trf_5840(C_word c,C_word *av) C_noret;
static void C_ccall trf_5840(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5840(t0,t1);}

C_noret_decl(trf_5856)
static void C_ccall trf_5856(C_word c,C_word *av) C_noret;
static void C_ccall trf_5856(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5856(t0,t1);}

C_noret_decl(trf_6820)
static void C_ccall trf_6820(C_word c,C_word *av) C_noret;
static void C_ccall trf_6820(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6820(t0,t1,t2);}

C_noret_decl(trf_7497)
static void C_ccall trf_7497(C_word c,C_word *av) C_noret;
static void C_ccall trf_7497(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7497(t0,t1,t2);}

C_noret_decl(trf_7562)
static void C_ccall trf_7562(C_word c,C_word *av) C_noret;
static void C_ccall trf_7562(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7562(t0,t1,t2);}

C_noret_decl(trf_5809)
static void C_ccall trf_5809(C_word c,C_word *av) C_noret;
static void C_ccall trf_5809(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5809(t0,t1,t2);}

C_noret_decl(trf_7771)
static void C_ccall trf_7771(C_word c,C_word *av) C_noret;
static void C_ccall trf_7771(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7771(t0,t1,t2);}

C_noret_decl(trf_8292)
static void C_ccall trf_8292(C_word c,C_word *av) C_noret;
static void C_ccall trf_8292(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8292(t0,t1,t2);}

C_noret_decl(trf_7724)
static void C_ccall trf_7724(C_word c,C_word *av) C_noret;
static void C_ccall trf_7724(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7724(t0,t1,t2);}

C_noret_decl(trf_4038)
static void C_ccall trf_4038(C_word c,C_word *av) C_noret;
static void C_ccall trf_4038(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4038(t0,t1,t2,t3);}

C_noret_decl(trf_4317)
static void C_ccall trf_4317(C_word c,C_word *av) C_noret;
static void C_ccall trf_4317(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4317(t0,t1);}

C_noret_decl(trf_8258)
static void C_ccall trf_8258(C_word c,C_word *av) C_noret;
static void C_ccall trf_8258(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8258(t0,t1,t2);}

C_noret_decl(trf_5868)
static void C_ccall trf_5868(C_word c,C_word *av) C_noret;
static void C_ccall trf_5868(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5868(t0,t1);}

C_noret_decl(trf_4088)
static void C_ccall trf_4088(C_word c,C_word *av) C_noret;
static void C_ccall trf_4088(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4088(t0,t1,t2);}

C_noret_decl(trf_5782)
static void C_ccall trf_5782(C_word c,C_word *av) C_noret;
static void C_ccall trf_5782(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5782(t0,t1,t2);}

C_noret_decl(trf_3455)
static void C_ccall trf_3455(C_word c,C_word *av) C_noret;
static void C_ccall trf_3455(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3455(t0,t1);}

C_noret_decl(trf_6873)
static void C_ccall trf_6873(C_word c,C_word *av) C_noret;
static void C_ccall trf_6873(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6873(t0,t1,t2);}

C_noret_decl(trf_4590)
static void C_ccall trf_4590(C_word c,C_word *av) C_noret;
static void C_ccall trf_4590(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4590(t0,t1);}

C_noret_decl(trf_7870)
static void C_ccall trf_7870(C_word c,C_word *av) C_noret;
static void C_ccall trf_7870(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7870(t0,t1,t2);}

C_noret_decl(trf_4361)
static void C_ccall trf_4361(C_word c,C_word *av) C_noret;
static void C_ccall trf_4361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4361(t0,t1);}

C_noret_decl(trf_4061)
static void C_ccall trf_4061(C_word c,C_word *av) C_noret;
static void C_ccall trf_4061(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4061(t0,t1,t2);}

C_noret_decl(trf_7296)
static void C_ccall trf_7296(C_word c,C_word *av) C_noret;
static void C_ccall trf_7296(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7296(t0,t1,t2);}

/* k4739 in map-loop856 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,1))){C_save_and_reclaim((void *)f_4741,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5594(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(16,c,3))){C_save_and_reclaim((void *)f_5594,2,av);}
a=C_alloc(16);
t2=C_i_check_list_2(t1,lf[30]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5782,a[2]=t5,a[3]=((C_word*)t0)[9],a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5782(t7,t3,t1);}

/* k4327 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_4329,2,av);}
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3803 in register-undefined in k2962 in k2958 */
static void C_ccall f_3805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,3))){C_save_and_reclaim((void *)f_3805,2,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[3],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:229: g581 */
t4=t3;
f_3812(t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:235: set-module-undefined-list! */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,t1);
/* modules.scm:235: set-module-undefined-list! */
t5=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4325(C_word t0,C_word t1){
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
C_word *a;
if(!C_demand(C_calculate_demand(27,0,3))){
C_save_and_reclaim_args((void *)trf_4325,2,t0,t1);}
a=C_alloc(27);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4329,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=*((C_word*)lf[59]+1);
t10=((C_word*)t0)[3];
t11=C_i_check_structure_2(t10,lf[3],lf[33]);
t12=C_i_block_ref(t10,C_fix(9));
t13=C_i_check_list_2(t12,lf[16]);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4616,a[2]=t7,a[3]=t16,a[4]=t9,a[5]=t8,a[6]=((C_word)li36),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_4616(t18,t14,t12);}

/* g668 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_4125(C_word t0,C_word t1,C_word t2){
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
if(!C_demand(C_calculate_demand(12,0,3))){
C_save_and_reclaim_args((void *)trf_4125,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4133,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[2]);
t5=t4;
t6=C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4150,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t3;
f_4133(t8,C_a_i_cons(&a,2,t5,t6));}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
/* modules.scm:282: ##sys#module-rename */
t10=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t7;
av2[2]=t9;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k4148 in g668 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_4150,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4133(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7234 in k7216 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_7236,2,av);}
/* modules.scm:748: import-env */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k7230 in k7219 in k7216 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_7232,2,av);}
/* modules.scm:749: append */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5176 in k5172 in k5240 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,4))){C_save_and_reclaim((void *)f_5178,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(13);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5172 in k5240 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_5174,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5178,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:426: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* g581 in k3803 in register-undefined in k2962 in k2958 */
static void C_fcall f_3812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_3812,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3819,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(t2);
t5=C_i_memq(((C_word*)t0)[2],t4);
t6=t3;
f_3819(t6,C_i_not(t5));}
else{
t4=t3;
f_3819(t4,C_SCHEME_FALSE);}}

/* k3817 in g581 in k3803 in register-undefined in k2962 in k2958 */
static void C_fcall f_3819(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,1))){
C_save_and_reclaim_args((void *)trf_3819,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_set_cdr(((C_word*)t0)[2],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4181 in g675 in k4224 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_4183,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4714 in map-loop856 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_4716,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
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
/* modules.scm:351: ##sys#error */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[62];
av2[3]=lf[66];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* modules.scm:351: ##sys#error */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[62];
av2[3]=lf[66];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7243(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(27,c,3))){C_save_and_reclaim((void *)f_7243,2,av);}
a=C_alloc(27);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[10]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(2));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7249,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7269,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7366,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t9=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
/* modules.scm:730: append */
t10=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7377,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[10]);
t8=C_i_block_ref(((C_word*)t0)[2],C_fix(2));
t9=C_eqp(C_SCHEME_TRUE,t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:t8);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7391,a[2]=t6,a[3]=t11,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7434,a[2]=t14,a[3]=t18,a[4]=t15,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_7434(t20,t16,((C_word*)t0)[6]);}}

/* k7238 in k7216 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_7240,2,av);}
/* modules.scm:748: append */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(14,0,7))){
C_save_and_reclaim_args((void *)trf_7099,3,t0,t1,t2);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7105,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7111,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li118),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:697: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7098(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(20,c,3))){C_save_and_reclaim((void *)f_7098,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li119),tmp=(C_word)a,a+=10,tmp);
t4=C_i_cdr(((C_word*)t0)[8]);
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7560,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7562,a[2]=t8,a[3]=t3,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7562(t10,t6,t4);}

/* k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(10,c,2))){C_save_and_reclaim((void *)f_7095,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:695: ##sys#current-module */
t3=*((C_word*)lf[0]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7247 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(13,c,2))){C_save_and_reclaim((void *)f_7249,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7259,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[3],lf[56]);
t5=C_i_block_ref(((C_word*)t0)[3],C_fix(12));
/* modules.scm:746: merge-se */
f_4242(t3,C_a_i_list(&a,2,t5,((C_word*)t0)[4]));}

/* k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(14,c,3))){C_save_and_reclaim((void *)f_7215,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7243,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7243(2,av2);}}
else{
/* modules.scm:727: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[131];
tp(4,av2);}}}
else{
t3=t2;
f_7218(t3,C_SCHEME_UNDEFINED);}}

/* k7216 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(13,0,2))){
C_save_and_reclaim_args((void *)trf_7218,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7236,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7240,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:748: import-env */
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* g675 in k4224 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_4165(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
if(!C_demand(C_calculate_demand(7,0,3))){
C_save_and_reclaim_args((void *)trf_4165,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4183,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
/* modules.scm:287: loop2 */
t12=((C_word*)((C_word*)t0)[3])[1];
f_4088(t12,t9,t11);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[2]);
/* modules.scm:289: warn */
t6=((C_word*)t0)[4];
f_4038(t6,t4,lf[94],t5);}}

/* map-loop1705 in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_7022,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7047,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:692: g1711 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7226 in k7219 in k7216 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_7228,2,av);}
/* modules.scm:749: macro-env */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k7219 in k7216 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(8,c,2))){C_save_and_reclaim((void *)f_7221,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7232,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:749: macro-env */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5180 in k5240 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_5182,2,av);}
a=C_alloc(9);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[11]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(10));
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t5=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
/* modules.scm:423: merge-se */
f_4242(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t3,t5));}

/* k4192 in g675 in k4224 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_4194,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:290: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4088(t4,((C_word*)t0)[4],t3);}

/* k4937 in k4910 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_4939,2,av);}
a=C_alloc(9);
/* modules.scm:391: merge-se */
f_4242(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k7274 in k7267 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7276,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(4);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5240 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5242(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(28,c,2))){C_save_and_reclaim((void *)f_5242,2,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=C_a_i_record(&a,14,lf[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5174,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5182,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:423: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t7;
tp(2,av2);}}

/* map-loop1063 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_5244,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:412: g1069 */
t5=((C_word*)t0)[4];
f_5220(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5137 in primitive-alias in k2962 in k2958 */
static void C_ccall f_5139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_5139,2,av);}
/* modules.scm:398: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* g1069 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_fcall f_5220(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,0,4))){
C_save_and_reclaim_args((void *)trf_5220,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:415: ##sys#error */
t4=*((C_word*)lf[65]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[73];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5128 in primitive-alias in k2962 in k2958 */
static void C_ccall f_5130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(8,c,1))){C_save_and_reclaim((void *)f_5130,2,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_a_i_putprop(&a,3,t1,lf[68],t2);
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4929 in k4910 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_4931,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4935,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:392: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4933 in k4929 in k4910 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,4))){C_save_and_reclaim((void *)f_4935,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(13);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(12,c,5))){C_save_and_reclaim((void *)f_6507,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word)li95),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_6512(t5,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}

/* k7285 in k7267 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7287(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(18,c,3))){C_save_and_reclaim((void *)f_7287,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7296,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7296(t11,t7,((C_word*)t0)[4]);}

/* ##sys#primitive-alias in k2962 in k2958 */
static void C_ccall f_5126(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_5126,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5130,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5139,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* modules.scm:399: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
av2[2]=lf[71];
av2[3]=t5;
tp(4,av2);}}

/* loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6512(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(12,0,5))){
C_save_and_reclaim_args((void *)trf_6512,5,t0,t1,t2,t3,t4);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=t6,a[9]=((C_word)li93),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_6524(t8,t1,((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6624,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=t4,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:639: g1615 */
t8=t7;
f_6624(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:658: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5152(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(19,c,3))){C_save_and_reclaim((void *)f_5152,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5215,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5278,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5278(t13,t9,t7);}

/* k5156 in k5240 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,1))){C_save_and_reclaim((void *)f_5158,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4910 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(14,c,2))){C_save_and_reclaim((void *)f_4912,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4939,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:391: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t4;
tp(2,av2);}}

/* k4913 in k4910 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,1))){C_save_and_reclaim((void *)f_4915,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5638(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(15,c,3))){C_save_and_reclaim((void *)f_5638,2,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5745,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5745(t7,t3,t1);}

/* k7058 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_7060,2,av);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_fixnump(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[3];
f_6280(t6,C_i_nullp(t5));}
else{
t3=((C_word*)t0)[3];
f_6280(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_6280(t2,C_SCHEME_FALSE);}}

/* k5629 in map-loop1261 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_5631,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
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
t3=C_u_i_car(((C_word*)t0)[4]);
/* modules.scm:527: ##sys#error */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[88];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6524(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(21,0,4))){
C_save_and_reclaim_args((void *)trf_6524,5,t0,t1,t2,t3,t4);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6532,a[2]=((C_word*)t0)[2],a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_i_check_list_2(t6,lf[30]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6542,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6555,a[2]=t10,a[3]=t5,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_6555(t12,t8,t6);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6583,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=t4,a[6]=((C_word)li92),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:642: g1610 */
t8=t7;
f_6583(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:653: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* ##sys#register-primitive-module in k2962 in k2958 */
static void C_ccall f_5145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2))){
C_save_and_reclaim((void*)f_5145,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5152,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:404: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}

/* for-each-loop983 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_4941(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_4941,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4951,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:385: g984 */
t5=((C_word*)t0)[3];
f_4887(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(15,c,2))){C_save_and_reclaim((void *)f_5644,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5739,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:530: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
tp(2,av2);}}

/* k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_5647,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5650,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:533: ##sys#mark-imported-symbols */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* g1590 in loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,4))){
C_save_and_reclaim_args((void *)trf_6532,3,t0,t1,t2);}
a=C_alloc(3);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8869,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:593: sprintf */
t5=*((C_word*)lf[118]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[122];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* map-loop1924 in k7389 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7400(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_7400,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4972 in for-each-loop962 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_4974,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4964(t3,((C_word*)t0)[4],t2);}

/* k7045 in map-loop1705 in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_7047,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7022(t6,((C_word*)t0)[5],t5);}

/* loop in k4472 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(12,0,2))){
C_save_and_reclaim_args((void *)trf_4377,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
if(C_truep(C_i_assq(t3,((C_word*)t0)[2]))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:339: loop */
t15=t1;
t16=t5;
t1=t15;
t2=t16;
goto loop;}
else{
t4=C_i_caar(t2);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_car(t6);
t8=C_a_i_list(&a,2,lf[55],t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4419,a[2]=t9,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_cdr(t12);
/* modules.scm:342: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t10;
av2[2]=t13;
tp(3,av2);}}}}

/* k5653 in g1297 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_5655,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_i_set_car(t3,t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g1297 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5651(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(10,0,2))){
C_save_and_reclaim_args((void *)trf_5651,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5655,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:536: merge-se */
f_4242(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5650(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(18,c,3))){C_save_and_reclaim((void *)f_5650,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5651,a[2]=((C_word*)t0)[2],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5673,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5714,a[2]=t6,a[3]=t2,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5714(t8,t4,((C_word*)t0)[3]);}

/* map-loop1898 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7434(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_7434,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6540 in loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,6))){C_save_and_reclaim((void *)f_6542,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:648: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
C_values(7,av2);}}

/* k4135 in k4131 in g668 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_4137,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1036 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_fcall f_5278(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_demand(C_calculate_demand(10,0,2))){
C_save_and_reclaim_args((void *)trf_5278,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5303,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
if(C_truep(C_i_symbolp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5209,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:409: ##sys#primitive-alias */
t8=*((C_word*)lf[67]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7011 in map-loop1731 in k6974 in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_7013,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6988(t6,((C_word*)t0)[5],t5);}

/* k4131 in g668 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_4133(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(4,0,2))){
C_save_and_reclaim_args((void *)trf_4133,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4137,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:283: loop2 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4088(t6,t3,t5);}

/* for-each-loop1589 in loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6555(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_6555,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6565,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:644: g1590 */
t5=((C_word*)t0)[3];
f_6532(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5267 in map-loop1063 in k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_5269,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5244(t6,((C_word*)t0)[5],t5);}

/* k4949 in for-each-loop983 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_4951,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4941(t3,((C_word*)t0)[4],t2);}

/* g1994 in k7608 in mrename in alias-global-hook in k2962 in k2958 */
static void C_fcall f_7614(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,4))){
C_save_and_reclaim_args((void *)trf_7614,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7621,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[4]);
t6=C_i_block_ref(t4,C_fix(1));
/* modules.scm:767: ##sys#module-rename */
t7=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* modules.scm:766: ##sys#register-undefined */
t4=*((C_word*)lf[46]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k7608 in mrename in alias-global-hook in k2962 in k2958 */
static void C_ccall f_7610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_7610,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li123),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:760: g1994 */
t3=t2;
f_7614(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop941 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_4987(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_4987,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4997,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:376: g942 */
t5=((C_word*)t0)[3];
f_4827(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6563 in for-each-loop1589 in loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_6565,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6555(t3,((C_word*)t0)[4],t2);}

/* k3589 in register-meta-expression in k2962 in k2958 */
static void C_ccall f_3591(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(3,c,4))){C_save_and_reclaim((void *)f_3591,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_check_structure_2(t1,lf[3],lf[33]);
t3=C_i_block_ref(t1,C_fix(9));
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=((C_word*)t0)[3];
t6=C_i_check_structure_2(t1,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t1;
av2[3]=C_fix(9);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
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

/* k7619 in g1994 in k7608 in mrename in alias-global-hook in k2962 in k2958 */
static void C_ccall f_7621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_7621,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
/* modules.scm:767: ##sys#module-rename */
t5=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6328(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(24,c,3))){C_save_and_reclaim((void *)f_6328,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6457,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li89),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6457(t12,t8,((C_word*)t0)[3]);}

/* k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(17,c,4))){C_save_and_reclaim((void *)f_6325,2,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:620: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[121];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* modules.scm:637: c */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[17];
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* ##sys#toplevel-definition-hook in k2962 in k2958 */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3584,6,av);}
t6=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3580 in add-to-export-list in k2962 in k2958 */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3582,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(2);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##sys#register-meta-expression in k2962 in k2958 */
static void C_ccall f_3587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand(4,c,2))){C_save_and_reclaim((void *)f_3587,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3591,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:180: ##sys#current-module */
t4=*((C_word*)lf[0]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* for-each-loop962 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_4964(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_4964,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4974,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:380: g963 */
t5=((C_word*)t0)[3];
f_4853(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#alias-global-hook in k2962 in k2958 */
static void C_ccall f_7603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_7603,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7606,a[2]=t3,a[3]=t4,a[4]=((C_word)li124),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7640,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:769: ##sys#qualified-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[142]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[142]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}

/* mrename in alias-global-hook in k2962 in k2958 */
static void C_fcall f_7606(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_7606,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7610,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:762: ##sys#current-module */
t4=*((C_word*)lf[0]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4995 in for-each-loop941 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_4997,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4987(t3,((C_word*)t0)[4],t2);}

/* a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_demand(C_calculate_demand(18,c,3))){C_save_and_reclaim((void *)f_6318,7,av);}
a=C_alloc(18);
t7=t2;
t8=t3;
t9=t4;
t10=t5;
t11=t6;
t12=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t8,a[6]=((C_word*)t0)[4],a[7]=t11,a[8]=t9,a[9]=t10,a[10]=t1,a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],tmp=(C_word)a,a+=18,tmp);
/* modules.scm:619: c */
t13=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t13))(4,av2);}}

/* k5578 in for-each-loop1197 in k5555 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_5580,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5570(t3,((C_word*)t0)[4],t2);}

/* k6381 in for-each-loop1512 in loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_6383,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6373(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1197 in k5555 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5570(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_5570,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5580,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:501: g1198 */
t5=((C_word*)t0)[3];
f_5558(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8362 in k8318 in k2962 in k2958 */
static void C_ccall f_8364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_8364,2,av);}
/* modules.scm:932: ##sys#register-primitive-module */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[177];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6342(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(21,0,5))){
C_save_and_reclaim_args((void *)trf_6342,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6350,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t7=t5;
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t3,a[8]=t4,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6373,a[2]=t11,a[3]=t6,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6373(t13,t9,t7);}
else{
t6=C_i_car(t2);
t7=C_i_assq(t6,((C_word*)t0)[7]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6401,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t4,a[6]=t5,a[7]=((C_word)li86),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:621: g1533 */
t9=t8;
f_6401(t9,t1,t7);}
else{
t8=t2;
t9=C_u_i_car(t8);
t10=C_i_assq(t9,((C_word*)t0)[9]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6423,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t5,a[7]=((C_word)li87),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:621: g1537 */
t12=t11;
f_6423(t12,t1,t10);}
else{
t11=t2;
t12=C_u_i_cdr(t11);
t13=t2;
t14=C_u_i_car(t13);
t15=C_a_i_cons(&a,2,t14,t5);
/* modules.scm:636: loop */
t17=t1;
t18=t12;
t19=t3;
t20=t4;
t21=t15;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
t5=t21;
goto loop;}}}}

/* k6358 in loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,6))){C_save_and_reclaim((void *)f_6360,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:628: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
C_values(7,av2);}}

/* k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(13,c,6))){C_save_and_reclaim((void *)f_6337,2,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word)li88),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_6342(t5,((C_word*)t0)[9],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* f8830 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f8830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f8830,2,av);}
/* modules.scm:519: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k8321 in k8318 in k2962 in k2958 */
static void C_ccall f_8323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,4))){C_save_and_reclaim((void *)f_8323,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:936: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[179];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8318 in k2962 in k2958 */
static void C_ccall f_8320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(8,c,3))){C_save_and_reclaim((void *)f_8320,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8364,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:934: append */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[180];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a6307 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_6308,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:618: import-spec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6252(t3,t1,t2);}

/* k6945 in ren in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_6947,2,av);}
/* modules.scm:689: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6939 in ren in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_6941,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8315 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_8317,2,av);}
/* modules.scm:872: ##sys#find-module */
t2=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#register-functor in k2962 in k2958 */
static void C_ccall f_7926(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_demand(C_calculate_demand(14,c,1))){C_save_and_reclaim((void *)f_7926,6,av);}
a=C_alloc(14);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t8;
av2[1]=C_a_i_putprop(&a,3,t2,lf[157],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k8330 in k8327 in k8324 in k8321 in k8318 in k2962 in k2958 */
static void C_ccall f_8332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_8332,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:941: register-feature! */
t3=*((C_word*)lf[174]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[175];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* g1513 in loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6350(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,4))){
C_save_and_reclaim_args((void *)trf_6350,3,t0,t1,t2);}
a=C_alloc(3);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8856,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:593: sprintf */
t5=*((C_word*)lf[118]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[119];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k6953 in k6949 in ren in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_6955,2,av);}
/* modules.scm:690: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6949 in ren in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,2))){C_save_and_reclaim((void *)f_6951,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6955,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* modules.scm:690: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[111]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k8327 in k8324 in k8321 in k8318 in k2962 in k2958 */
static void C_ccall f_8329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,3))){C_save_and_reclaim((void *)f_8329,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:939: ##sys#register-module-alias */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
av2[3]=lf[177];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8324 in k8321 in k8318 in k2962 in k2958 */
static void C_ccall f_8326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,4))){C_save_and_reclaim((void *)f_8326,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:937: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[178];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8342 in module-environment in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k2962 in k2958 */
static void C_ccall f_8344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,1))){C_save_and_reclaim((void *)f_8344,2,av);}
a=C_alloc(5);
t2=C_i_check_structure_2(t1,lf[3],lf[27]);
t3=C_i_block_ref(t1,C_fix(13));
t4=C_i_car(t3);
t5=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[173],((C_word*)t0)[3],t4,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* module-environment in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k2962 in k2958 */
static void C_ccall f_8337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3))){
C_save_and_reclaim((void*)f_8337,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?t2:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8344,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:944: ##sys#find-module/import-library */
t8=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[172];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k2962 in k2958 */
static void C_ccall f_8335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,3))){C_save_and_reclaim((void *)f_8335,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[172]+1 /* (set! module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8337,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#module-exports in k2962 in k2958 */
static void C_ccall f_3204(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3204,3,av);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t2;
t7=C_i_check_structure_2(t6,lf[3],lf[11]);
t8=C_i_block_ref(t6,C_fix(10));
t9=t2;
t10=C_i_check_structure_2(t9,lf[3],lf[12]);
t11=C_i_block_ref(t9,C_fix(11));
/* modules.scm:112: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t8;
av2[4]=t11;
C_values(5,av2);}}

/* ##sys#register-syntax-export in k2962 in k2958 */
static void C_ccall f_3717(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_3717,5,av);}
a=C_alloc(6);
if(C_truep(t3)){
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=C_eqp(C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3727,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t10;
av2[1]=t8;
f_3727(2,av2);}}
else{
/* modules.scm:211: ##sys#find-export */
t10=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}
else{
t5=C_SCHEME_UNDEFINED;
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

/* g1610 in loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,3))){
C_save_and_reclaim_args((void *)trf_6583,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6595,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* modules.scm:651: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k3702 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_3704,2,av);}
/* modules.scm:194: ##sys#toplevel-definition-hook */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_7957(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(23,c,4))){C_save_and_reclaim((void *)f_7957,2,av);}
a=C_alloc(23);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7967,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li136),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8030,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=t11,a[6]=((C_word)li138),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8051(t13,t9,((C_word*)t0)[4],t3);}

/* k3698 in k3642 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3700,2,av);}
/* modules.scm:198: set-module-undefined-list! */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* err in instantiate-functor in k2962 in k2958 */
static void C_fcall f_7950(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,0,4))){
C_save_and_reclaim_args((void *)trf_7950,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[104]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* k6593 in g1610 in loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_6595,2,av);}
/* modules.scm:651: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6524(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k6984 in k6974 in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,6))){C_save_and_reclaim((void *)f_6986,2,av);}
/* modules.scm:692: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
av2[6]=((C_word*)t0)[6];
C_values(7,av2);}}

/* map-loop1731 in k6974 in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_6988,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7013,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:692: g1737 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3777 in k3734 in k3728 in k3725 in register-syntax-export in k2962 in k2958 */
static void C_ccall f_3779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_3779,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:216: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* merr in k7955 in instantiate-functor in k2962 in k2958 */
static void C_fcall f_7967(C_word t0,C_word t1){
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
C_word *a;
if(!C_demand(C_calculate_demand(22,0,3))){
C_save_and_reclaim_args((void *)trf_7967,2,t0,t1);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7989,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7991,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li135),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7991(t13,t9,((C_word*)t0)[4]);}

/* k8300 in for-each-loop2175 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_8302,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8292(t3,((C_word*)t0)[4],t2);}

/* ##sys#find-export in k2962 in k2958 */
static void C_ccall f_5318(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_5318,5,av);}
a=C_alloc(5);
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5329,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(C_SCHEME_TRUE,t7);
if(C_truep(t9)){
t10=t3;
t11=C_i_check_structure_2(t10,lf[3],lf[29]);
t12=t8;
f_5329(t12,C_i_block_ref(t10,C_fix(4)));}
else{
t10=t8;
f_5329(t10,t7);}}

/* for-each-loop610 in mark-imported-symbols in k2962 in k2958 */
static void C_fcall f_3959(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_3959,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3969,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3923,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(t6);
if(C_truep(C_i_symbolp(t8))){
t9=C_u_i_car(t6);
t10=C_u_i_cdr(t6);
t11=C_eqp(t9,t10);
t12=t7;
f_3923(t12,C_i_not(t11));}
else{
t9=t7;
f_3923(t9,C_SCHEME_FALSE);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#instantiate-functor in k2962 in k2958 */
static void C_ccall f_7942(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_demand(C_calculate_demand(18,c,3))){C_save_and_reclaim((void *)f_7942,5,av);}
a=C_alloc(18);
t5=t3;
t6=C_i_getprop(t5,lf[157],C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7950,a[2]=t2,a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7957,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t8,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t10=t9;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_7957(2,av2);}}
else{
/* modules.scm:830: err */
t10=t8;
f_7950(t10,t9,C_a_i_list(&a,2,lf[163],t3));}}

/* ren in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6933(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(11,c,2))){C_save_and_reclaim((void *)f_6933,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6941,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6947,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6951,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:690: tostr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_6184(t6,t5,((C_word*)t0)[3]);}

/* k4612 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_4614,2,av);}
/* modules.scm:314: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k5327 in find-export in k2962 in k2958 */
static void C_fcall f_5329(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(8,0,3))){
C_save_and_reclaim_args((void *)trf_5329,2,t0,t1);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5331,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5331(t5,((C_word*)t0)[4],t1);}

/* k3264 in k3261 in k3257 in a3254 in k3248 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3266,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop723 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4616(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_4616,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:314: g729 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3261 in k3257 in a3254 in k3248 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,4))){C_save_and_reclaim((void *)f_3263,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:124: module-alias-environment390391 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k3734 in k3728 in k3725 in register-syntax-export in k2962 in k2958 */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(11,c,2))){C_save_and_reclaim((void *)f_3736,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3779,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:216: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3737 in k3734 in k3728 in k3725 in register-syntax-export in k2962 in k2958 */
static void C_ccall f_3739(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(12,c,4))){C_save_and_reclaim((void *)f_3739,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],lf[39]);
t6=C_i_block_ref(t4,C_fix(3));
t7=C_a_i_cons(&a,2,t3,t6);
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t2;
av2[2]=t8;
av2[3]=C_fix(3);
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3745(2,av2);}}}

/* f8869 in g1590 in loop in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f8869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f8869,2,av);}
/* modules.scm:593: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k3728 in k3725 in register-syntax-export in k2962 in k2958 */
static void C_ccall f_3730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_3730,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[3],t1))){
/* modules.scm:215: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t5;
av2[2]=lf[45];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t6=t5;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3736(2,av2);}}}

/* k3921 in for-each-loop610 in mark-imported-symbols in k2962 in k2958 */
static void C_fcall f_3923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(8,0,1))){
C_save_and_reclaim_args((void *)trf_3923,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_putprop(&a,3,t2,lf[49],C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3725 in register-syntax-export in k2962 in k2958 */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,2))){C_save_and_reclaim((void *)f_3727,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:212: module-undefined-list */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* f8856 in g1513 in loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f8856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f8856,2,av);}
/* modules.scm:593: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k5961 in k5952 in loop in k5937 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_5963,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#mark-imported-symbols in k2962 in k2958 */
static void C_ccall f_3914(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_3914,3,av);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[30]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3959,a[2]=t5,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3959(t7,t1,t2);}

/* f8884 in g1641 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f8884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f8884,2,av);}
/* modules.scm:593: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* map-loop1127 in finalize-module in k2962 in k2958 */
static void C_fcall f_5976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(!C_demand(C_calculate_demand(10,0,2))){
C_save_and_reclaim_args((void *)trf_5976,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6001,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5425,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:450: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6974 in k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6976(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(21,c,3))){C_save_and_reclaim((void *)f_6976,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6986,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6988,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li105),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_6988(t13,t9,((C_word*)t0)[3]);}

/* g1641 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6726(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,4))){
C_save_and_reclaim_args((void *)trf_6726,3,t0,t1,t2);}
a=C_alloc(3);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8884,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:593: sprintf */
t5=*((C_word*)lf[118]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[124];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4660 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,1))){C_save_and_reclaim((void *)f_4662,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=((C_word*)t0)[2];
f_4325(t3,C_a_i_list(&a,1,t2));}

/* for-each-loop1512 in loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6373(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_6373,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6383,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:624: g1513 */
t5=((C_word*)t0)[3];
f_6350(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5904 in k5854 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_5906,2,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5868,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=t4;
f_5868(t6,C_i_symbolp(t5));}
else{
t5=t4;
f_5868(t5,C_SCHEME_FALSE);}}

/* k6737 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6739(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(17,c,3))){C_save_and_reclaim((void *)f_6739,2,av);}
a=C_alloc(17);
t2=C_i_check_list_2(t1,lf[30]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6758,a[2]=t5,a[3]=((C_word*)t0)[10],a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6758(t7,t3,t1);}

/* ##sys#register-module-alias in k2962 in k2958 */
static void C_ccall f_3228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(7,c,2))){C_save_and_reclaim((void *)f_3228,4,av);}
a=C_alloc(7);
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3244,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:122: ##sys#module-alias-environment */
t7=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k4639 in map-loop723 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_4641,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4616(t6,((C_word*)t0)[5],t5);}

/* k6743 in k6737 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,6))){C_save_and_reclaim((void *)f_6745,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:669: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
C_values(7,av2);}}

/* k3687 in k3648 in k3642 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_3689,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:199: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* a3254 in k3248 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_3255,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* modules.scm:124: module-alias-environment390391 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_3259(2,av2);}}}

/* k3257 in a3254 in k3248 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,2))){C_save_and_reclaim((void *)f_3259,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:124: module-alias-environment390391 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k3248 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3250(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(19,c,4))){C_save_and_reclaim((void *)f_3250,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3255,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3272,a[2]=((C_word*)t0)[3],a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:124: ##sys#dynamic-wind */
t9=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k6926 in k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6928(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(36,c,3))){C_save_and_reclaim((void *)f_6928,2,av);}
a=C_alloc(36);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6933,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t3);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=t4;
t12=C_i_check_list_2(((C_word*)t0)[6],lf[16]);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6976,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t6,a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7022,a[2]=t9,a[3]=t15,a[4]=t11,a[5]=t10,a[6]=((C_word)li106),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_7022(t17,t13,((C_word*)t0)[6]);}

/* for-each-loop1640 in k6737 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_6758,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6768,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:665: g1641 */
t5=((C_word*)t0)[3];
f_6726(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6923 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(11,c,4))){C_save_and_reclaim((void *)f_6925,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:685: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[126];
tp(5,av2);}}
else{
/* modules.scm:693: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=((C_word*)t0)[11];
av2[3]=lf[127];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k3242 in register-module-alias in k2962 in k2958 */
static void C_ccall f_3244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_3244,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:121: ##sys#module-alias-environment */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* ##sys#with-module-aliases in k2962 in k2958 */
static void C_ccall f_3246(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(21,c,3))){C_save_and_reclaim((void *)f_3246,4,av);}
a=C_alloc(21);
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3250,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[16]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3311,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_3311(t15,t11,t2);}

/* k5737 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(8,c,2))){C_save_and_reclaim((void *)f_5739,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5743,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:531: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5937 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_5939,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5941,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5941(t5,((C_word*)t0)[3],t1);}

/* a3277 in k3248 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3278,2,av);}
/* modules.scm:124: module-alias-environment390391 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* a3271 in k3248 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3272,2,av);}
/* modules.scm:129: thunk */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* map-loop1261 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5745(C_word t0,C_word t1,C_word t2){
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
if(!C_demand(C_calculate_demand(11,0,2))){
C_save_and_reclaim_args((void *)trf_5745,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5770,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_cdr(t6);
if(C_truep(C_i_symbolp(t7))){
t8=t5;{
C_word av2[2];
av2[0]=t8;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_u_i_car(t6);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5631,a[2]=t8,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:526: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t9;
tp(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5741 in k5737 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(18,c,2))){C_save_and_reclaim((void *)f_5743,2,av);}
a=C_alloc(18);
/* modules.scm:529: merge-se */
f_4242(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* k3743 in k3737 in k3734 in k3728 in k3725 in register-syntax-export in k2962 in k2958 */
static void C_ccall f_3745(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_3745,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[44]);
t5=C_i_block_ref(t3,C_fix(5));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_fix(5);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k8182 in g2176 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_fcall f_8184(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,1))){
C_save_and_reclaim_args((void *)trf_8184,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in k5327 in find-export in k2962 in k2958 */
static void C_fcall f_5331(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_5331,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t2;
t6=C_u_i_car(t5);
if(C_truep(C_i_pairp(t6))){
t7=C_i_caar(t2);
t8=C_eqp(((C_word*)t0)[2],t7);
if(C_truep(t8)){
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5359,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
t13=t9;
f_5359(t13,C_i_memq(((C_word*)t0)[2],t12));}
else{
t10=t9;
f_5359(t10,C_SCHEME_FALSE);}}}
else{
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:439: loop */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}}}

/* loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6706(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(12,0,5))){
C_save_and_reclaim_args((void *)trf_6706,5,t0,t1,t2,t3,t4);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=t6,a[9]=((C_word)li101),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_6718(t8,t1,((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6873,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t4,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:661: g1692 */
t8=t7;
f_6873(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:683: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(12,c,5))){C_save_and_reclaim((void *)f_6701,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word)li103),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_6706(t5,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}

/* loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6718(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(28,0,4))){
C_save_and_reclaim_args((void *)trf_6718,5,t0,t1,t2,t3,t4);}
a=C_alloc(28);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6726,a[2]=((C_word*)t0)[2],a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=t4;
t11=C_i_check_list_2(t10,lf[16]);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6781,a[2]=t8,a[3]=t14,a[4]=t9,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_6781(t16,t12,t10);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6820,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t4,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:663: g1687 */
t8=t7;
f_6820(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:676: loop */
t17=t1;
t18=t8;
t19=t11;
t20=t4;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}

/* k5357 in loop in k5327 in find-export in k2962 in k2958 */
static void C_fcall f_5359(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,0,2))){
C_save_and_reclaim_args((void *)trf_5359,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* modules.scm:438: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5331(t4,((C_word*)t0)[2],t3);}}

/* for-each-loop1820 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7474(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_7474,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7484,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:719: g1821 */
t5=((C_word*)t0)[3];
f_7173(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g2176 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_fcall f_8171(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_8171,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=t4;
t6=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[11]);
t7=C_i_block_ref(((C_word*)t0)[2],C_fix(10));
t8=C_i_assq(t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8184,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
t10=t9;
f_8184(t10,t8);}
else{
t10=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t11=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t12=t9;
f_8184(t12,C_i_assq(t5,t11));}}

/* k5702 in k5683 in k5680 in k5677 in k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_5704,2,av);}
a=C_alloc(9);
/* modules.scm:554: merge-se */
f_4242(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k8146 in k8135 in loop in k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_8148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_8148,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5706 in k5680 in k5677 in k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_5708,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5698 in k5694 in k5683 in k5680 in k5677 in k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,4))){C_save_and_reclaim((void *)f_5700,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t6=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_fix(13);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* for-each-loop1296 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5714(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_5714,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5724,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:534: g1297 */
t5=((C_word*)t0)[3];
f_5651(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5301 in map-loop1036 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_5303,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5278(t6,((C_word*)t0)[5],t5);}

/* k3967 in for-each-loop610 in mark-imported-symbols in k2962 in k2958 */
static void C_ccall f_3969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_3969,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3959(t3,((C_word*)t0)[4],t2);}

/* k5722 in for-each-loop1296 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_5724,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5714(t3,((C_word*)t0)[4],t2);}

/* k7591 in module-rename in k2962 in k2958 */
static void C_ccall f_7593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_7593,2,av);}
/* modules.scm:754: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* ##sys#match-functor-argument in k2962 in k2958 */
static void C_ccall f_8160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_8160,7,av);}
a=C_alloc(10);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8164,a[2]=t5,a[3]=t1,a[4]=t6,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8317,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:872: ##sys#resolve-module-name */
t9=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
av2[3]=lf[3];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8164(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(21,c,3))){C_save_and_reclaim((void *)f_8164,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_eqp(((C_word*)t0)[2],lf[148]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
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
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8171,a[2]=t2,a[3]=t5,a[4]=((C_word)li140),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8211,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8292,a[2]=t11,a[3]=t6,a[4]=((C_word)li142),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_8292(t13,t9,t7);}}

/* k8135 in loop in k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_8137(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_8137,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8148,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
/* modules.scm:865: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_8051(t9,t4,t6,t8);}

/* k5890 in k5866 in k5904 in k5854 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_5892,2,av);}
/* modules.scm:481: string-append */
t2=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[97];
av2[3]=t1;
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5886 in k5866 in k5904 in k5854 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_5888,2,av);}
/* modules.scm:480: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k6766 in for-each-loop1640 in k6737 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_6768,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6758(t3,((C_word*)t0)[4],t2);}

/* k7638 in alias-global-hook in k2962 in k2958 */
static void C_ccall f_7640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_7640,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
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
t2=((C_word*)t0)[2];
t3=C_i_getprop(t2,lf[68],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=t4;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=((C_word*)t0)[2];
if(C_truep(C_i_getprop(t4,lf[49],C_SCHEME_FALSE))){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:777: ##sys#active-eval-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[141]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[141]+1);
av2[1]=t5;
tp(2,av2);}}}}}

/* k5882 in k5866 in k5904 in k5854 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_5884,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_5840(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE));}

/* loop in k5937 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5941(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,4))){
C_save_and_reclaim_args((void *)trf_5941,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5954,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
/* modules.scm:457: ##sys#find-export */
t5=*((C_word*)lf[42]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[3];
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k8098 in k8087 in k8083 in loop2 in loop in k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_8100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_8100,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5952 in loop in k5937 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5954(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(4,c,2))){C_save_and_reclaim((void *)f_5954,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5963,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* modules.scm:458: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5941(t7,t4,t6);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:459: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5941(t4,((C_word*)t0)[3],t3);}}

/* ##sys#module-rename in k2962 in k2958 */
static void C_ccall f_7585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(3,c,4))){C_save_and_reclaim((void *)f_7585,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7593,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_slot(t2,C_fix(1));
/* modules.scm:755: string-append */
t7=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[139];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* map-loop1653 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6781(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_6781,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g2022 in k7709 in k7706 in k7638 in alias-global-hook in k2962 in k2958 */
static void C_fcall f_7674(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(0,0,2))){
C_save_and_reclaim_args((void *)trf_7674,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:782: mrename */
t4=((C_word*)t0)[2];
f_7606(t4,t1,((C_word*)t0)[3]);}
else{
t4=C_i_getprop(t3,lf[68],C_SCHEME_FALSE);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(C_truep(t4)?t4:t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5768 in map-loop1261 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_5770,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5745(t6,((C_word*)t0)[5],t5);}

/* k6128 in k6125 in k6122 in a6119 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_6130,2,av);}
/* modules.scm:569: macro-environment13451346 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* ##sys#expand-import in k2962 in k2958 */
static void C_ccall f_6147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10;
C_word t11;
C_word *a;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_demand(C_calculate_demand(11,c,2))){C_save_and_reclaim((void *)f_6147,10,av);}
a=C_alloc(11);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6151,a[2]=t9,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t2,a[9]=t1,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:585: r */
t11=t3;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[138];
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}

/* k6138 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_6140,2,av);}
/* modules.scm:566: ##sys#find-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k4407 in k4417 in loop in k4472 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_4409,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6142 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_6144,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[107];
tp(4,av2);}}

/* k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(14,c,2))){C_save_and_reclaim((void *)f_6157,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:588: r */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[135];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(12,c,2))){C_save_and_reclaim((void *)f_6151,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:586: r */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[137];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(13,c,2))){C_save_and_reclaim((void *)f_6154,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:587: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[136];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k5999 in map-loop1127 in finalize-module in k2962 in k2958 */
static void C_ccall f_6001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_6001,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5976(t6,((C_word*)t0)[5],t5);}

/* ##sys#find-module/import-library in k2962 in k2958 */
static void C_ccall f_6011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(4,c,3))){C_save_and_reclaim((void *)f_6011,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6015,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:563: ##sys#resolve-module-name */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6018(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(19,c,2))){C_save_and_reclaim((void *)f_6018,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t3)[1])){
t5=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=((C_word*)t3)[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6024,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6140,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6144,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:567: symbol->string */
t8=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,4))){C_save_and_reclaim((void *)f_6015,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:564: ##sys#find-module */
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3307 in k3303 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3309,2,av);}
/* modules.scm:126: append */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3303 in with-module-aliases in k2962 in k2958 */
static void C_ccall f_3305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,2))){C_save_and_reclaim((void *)f_3305,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3309,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:128: ##sys#module-alias-environment */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4211 in k4224 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_4213,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:293: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4088(t4,((C_word*)t0)[4],t3);}

/* map-loop2115 in merr in k7955 in instantiate-functor in k2962 in k2958 */
static void C_fcall f_7991(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_7991,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* tostr in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6184(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_6184,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6197,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:596: keyword? */
t4=*((C_word*)lf[114]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3691 in k3687 in k3648 in k3642 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3693,2,av);}
/* modules.scm:199: check-for-redef */
t2=*((C_word*)lf[34]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g513 in k3509 in add-to-export-list in k2962 in k2958 */
static C_word C_fcall f_3520(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k5207 in map-loop1036 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_5209,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6195 in tostr in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,3))){C_save_and_reclaim((void *)f_6197,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:596: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[111]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* modules.scm:597: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[111]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* modules.scm:598: number->string */
t2=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* modules.scm:599: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[113];
tp(4,av2);}}}}}

/* k2958 */
static void C_ccall f_2960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_2960,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:73: make-parameter */
t4=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2962 in k2958 */
static void C_ccall f_2964(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(110,c,10))){C_save_and_reclaim((void *)f_2964,2,av);}
a=C_alloc(110);
t2=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_mutate2(&lf[2] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[5]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[6]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[8]+1 /* (set! ##sys#module-name ...) */,lf[2]);
t7=C_mutate2((C_word*)lf[9]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3204,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3228,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3246,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[18]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3345,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[21]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3388,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_mutate2((C_word*)lf[24]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3442,a[2]=t13,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate2((C_word*)lf[28]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[31]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3584,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[32]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3587,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[34]+1 /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3607,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[38]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3628,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[43]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3717,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[46]+1 /* (set! ##sys#register-undefined ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3798,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[47]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3864,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[48]+1 /* (set! ##sys#mark-imported-symbols ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3914,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2(&lf[50] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4242,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[51]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4294,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[60]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4686,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[67]+1 /* (set! ##sys#primitive-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5126,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate2((C_word*)lf[72]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5145,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate2((C_word*)lf[42]+1 /* (set! ##sys#find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5318,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate2((C_word*)lf[74]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5396,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(lf[22] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t32=C_mutate2((C_word*)lf[99]+1 /* (set! ##sys#find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6011,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[108]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6147,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[41]+1 /* (set! ##sys#module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7585,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[140]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7603,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[143]+1 /* (set! ##sys#register-interface ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7713,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[145]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7721,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[156]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7926,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[158]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7942,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[162]+1 /* (set! ##sys#match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8160,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t41=lf[170];
t42=*((C_word*)lf[171]+1);
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8320,a[2]=((C_word*)t0)[2],a[3]=t42,a[4]=t41,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:931: ##sys#register-primitive-module */
t44=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t44;
av2[1]=t43;
av2[2]=lf[181];
av2[3]=t41;
av2[4]=*((C_word*)lf[171]+1);
((C_proc)(void*)(*((C_word*)t44+1)))(5,av2);}}

/* k4682 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(18,c,1))){C_save_and_reclaim((void *)f_4684,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=C_a_i_list(&a,2,lf[55],t2);
t4=C_a_i_list(&a,2,lf[63],t3);
t5=((C_word*)t0)[2];
f_4317(t5,C_a_i_list(&a,1,t4));}

/* ##sys#register-compiled-module in k2962 in k2958 */
static void C_ccall f_4686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(C_calculate_demand((c-6)*C_SIZEOF_PAIR +20,c,3))){
C_save_and_reclaim((void*)f_4686,c,av);}
a=C_alloc((c-6)*C_SIZEOF_PAIR+20);
t6=C_build_rest(&a,c,6,av);
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
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_car(t6));
t9=t8;
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=C_i_check_list_2(t5,lf[16]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4751,a[2]=t3,a[3]=t9,a[4]=t2,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5086,a[2]=t12,a[3]=t17,a[4]=t13,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_5086(t19,t15,t5);}

/* k5213 in k5150 in register-primitive-module in k2962 in k2958 */
static void C_ccall f_5215(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(24,c,3))){C_save_and_reclaim((void *)f_5215,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5242,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5244,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5244(t13,t9,((C_word*)t0)[4]);}

/* k3509 in add-to-export-list in k2962 in k2958 */
static void C_ccall f_3511(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(25,c,3))){C_save_and_reclaim((void *)f_3511,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3520,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3512,a[2]=t2,a[3]=t5,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3534,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3554,a[2]=t6,a[3]=t11,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3554(t13,t9,t7);}

/* g497 in k3509 in add-to-export-list in k2962 in k2958 */
static C_word C_fcall f_3512(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return(f_3520(C_a_i(&a,3),((C_word*)t0)[3],t2));}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* k6125 in k6122 in a6119 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,4))){C_save_and_reclaim((void *)f_6127,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:569: current-meta-environment13431344 */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7364 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7366,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(11);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a6119 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(9,c,4))){C_save_and_reclaim((void *)f_6120,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6124,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:569: current-module13391340 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[9])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6122 in a6119 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,4))){C_save_and_reclaim((void *)f_6124,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:569: current-environment13411342 */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7987 in merr in k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_7989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(12,c,2))){C_save_and_reclaim((void *)f_7989,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:835: err */
t3=((C_word*)t0)[3];
f_7950(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[159],((C_word*)t0)[5],t2));}

/* k4456 in g788 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,1))){C_save_and_reclaim((void *)f_4458,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[58],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4897 in g984 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_4899,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g1229 in k5503 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,3))){
C_save_and_reclaim_args((void *)trf_5506,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5510,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:515: display */
t4=*((C_word*)lf[77]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[82];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5503 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(11,c,3))){C_save_and_reclaim((void *)f_5505,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[2],a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5525,a[2]=t4,a[3]=t2,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5525(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5500 in k5490 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_5502,2,av);}
/* modules.scm:509: display */
t2=*((C_word*)lf[77]+1);{
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

/* loop in k4244 in merge-se in k2962 in k2958 */
static void C_fcall f_4257(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(4,0,2))){
C_save_and_reclaim_args((void *)trf_4257,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_assq(t3,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:301: loop */
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}
else{
t6=t2;
t7=C_u_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4284,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* modules.scm:302: loop */
t12=t8;
t13=t10;
t1=t12;
t2=t13;
goto loop;}}}

/* k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4886(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(18,c,3))){C_save_and_reclaim((void *)f_4886,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4887,a[2]=((C_word*)t0)[2],a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4912,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4941,a[2]=t6,a[3]=t2,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4941(t8,t4,((C_word*)t0)[3]);}

/* g984 in k4884 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_4887(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_demand(C_calculate_demand(10,0,2))){
C_save_and_reclaim_args((void *)trf_4887,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4899,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:387: merge-se */
f_4242(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:387: merge-se */
f_4242(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* module-name in k2962 in k2958 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_2978,3,av);}
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* merge-se in k2962 in k2958 */
static void C_fcall f_4242(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,3))){
C_save_and_reclaim_args((void *)trf_4242,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4246,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[17]+1);
av2[3]=t2;
C_apply(4,av2);}}

/* k4244 in merge-se in k2962 in k2958 */
static void C_ccall f_4246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_4246,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4257,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4257(t5,((C_word*)t0)[2],t1);}

/* g788 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4434(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
if(!C_demand(C_calculate_demand(10,0,2))){
C_save_and_reclaim_args((void *)trf_4434,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[55],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4458,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(t4);
/* modules.scm:329: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t9;
av2[2]=t10;
tp(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[55],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7389 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7391(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(18,c,3))){C_save_and_reclaim((void *)f_7391,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7400,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7400(t11,t7,((C_word*)t0)[4]);}

/* k7396 in k7389 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7398,2,av);}
/* modules.scm:739: append */
t2=*((C_word*)lf[17]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop1228 in k5503 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5525(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_5525,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5535,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:513: g1229 */
t5=((C_word*)t0)[3];
f_5506(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4236(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_4236,2,av);}
a=C_alloc(7);
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* modules.scm:275: warn */
t5=((C_word*)t0)[6];
f_4038(t5,t2,lf[93],t4);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g668 */
t6=t5;
f_4125(t6,((C_word*)t0)[5],t4);}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4226,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:284: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t7;
tp(2,av2);}}}}

/* resolve in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6165(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_6165,3,av);}
t3=t2;
t4=C_u_i_assq(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=C_i_cdr(t4);
if(C_truep(t5)){
t6=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t2;
t7=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=C_i_getprop(t3,lf[109],C_SCHEME_FALSE);
if(C_truep(t5)){
if(C_truep(t5)){
t6=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t2;
t7=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=t2;
t7=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6163(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(42,c,4))){C_save_and_reclaim((void *)f_6163,2,av);}
a=C_alloc(42);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6165,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[2],a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6227,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6252,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t10,a[5]=t4,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t2,a[13]=((C_word)li108),tmp=(C_word)a,a+=14,tmp));
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7095,a[2]=t10,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:694: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t15;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[133];
tp(5,av2);}}

/* k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(14,c,2))){C_save_and_reclaim((void *)f_6160,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:589: r */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[134];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* g441 in k3384 in loop in resolve-module-name in k2962 in k2958 */
static void C_fcall f_3359(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,4))){
C_save_and_reclaim_args((void *)trf_3359,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:137: error */
t4=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[20];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:138: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3351(t5,t1,t3,t4);}}

/* k6081 in k6078 in k6075 in k6072 in k6069 in k6065 in k6061 in k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_6083,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6078 in k6075 in k6072 in k6069 in k6065 in k6061 in k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,4))){C_save_and_reclaim((void *)f_6080,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:569: macro-environment13451346 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* loop in resolve-module-name in k2962 in k2958 */
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(8,0,2))){
C_save_and_reclaim_args((void *)trf_3351,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3386,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:133: ##sys#module-alias-environment */
t5=*((C_word*)lf[1]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4867 in g963 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_4869,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g1821 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7173(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_7173,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7209,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:721: macro-env */
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}

/* k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7172(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(22,c,3))){C_save_and_reclaim((void *)f_7172,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7173,a[2]=((C_word*)t0)[2],a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7474,a[2]=t6,a[3]=t2,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7474(t8,t4,((C_word*)t0)[3]);}

/* k4417 in loop in k4472 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4419(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(13,c,2))){C_save_and_reclaim((void *)f_4419,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[58],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4409,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* modules.scm:343: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4377(t7,t4,t6);}

/* g963 in k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_4853(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_demand(C_calculate_demand(10,0,2))){
C_save_and_reclaim_args((void *)trf_4853,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4869,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(t7)){
/* modules.scm:383: merge-se */
f_4242(t6,C_a_i_list(&a,2,t7,((C_word*)t0)[2]));}
else{
/* modules.scm:383: merge-se */
f_4242(t6,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4850 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4852(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(20,c,3))){C_save_and_reclaim((void *)f_4852,2,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4853,a[2]=((C_word*)t0)[2],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4964,a[2]=t6,a[3]=t2,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4964(t8,t4,((C_word*)t0)[3]);}

/* a6097 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6098(C_word c,C_word *av){
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
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(18,c,4))){C_save_and_reclaim((void *)f_6098,2,av);}
a=C_alloc(18);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6104,a[2]=t5,a[3]=t3,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6109,a[2]=((C_word*)t0)[2],a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6115,a[2]=t3,a[3]=t5,a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:569: ##sys#dynamic-wind */
t9=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* ##sys#compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4294(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand(10,c,2))){C_save_and_reclaim((void *)f_4294,3,av);}
a=C_alloc(10);
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[3],lf[4]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t2;
t11=C_i_check_structure_2(t10,lf[3],lf[52]);
t12=C_i_block_ref(t10,C_fix(7));
t13=t2;
t14=C_i_check_structure_2(t13,lf[3],lf[12]);
t15=C_i_block_ref(t13,C_fix(11));
t16=t15;
t17=t2;
t18=C_i_check_structure_2(t17,lf[3],lf[53]);
t19=C_i_block_ref(t17,C_fix(8));
t20=t19;
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4317,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t16,a[6]=t20,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t12))){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:312: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t22;
av2[2]=t12;
tp(3,av2);}}
else{
t22=t21;
f_4317(t22,C_SCHEME_END_OF_LIST);}}

/* map-loop856 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_5086(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
if(!C_demand(C_calculate_demand(10,0,3))){
C_save_and_reclaim_args((void *)trf_5086,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5111,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
if(C_truep(C_i_symbolp(t4))){
t6=t5;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4716,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:348: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}
else{
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4741,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:358: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
tp(4,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3532 in k3509 in add-to-export-list in k2962 in k2958 */
static void C_ccall f_3534(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_3534,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3548,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[12]);
t6=C_i_block_ref(t4,C_fix(11));
/* modules.scm:173: append */
t7=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k3535 in k3532 in k3509 in add-to-export-list in k2962 in k2958 */
static void C_ccall f_3537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,3))){C_save_and_reclaim((void *)f_3537,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:174: append */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6065 in k6061 in k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(13,c,2))){C_save_and_reclaim((void *)f_6067,2,av);}
a=C_alloc(13);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6071,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:569: macro-environment13451346 */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k4282 in loop in k4244 in merge-se in k2962 in k2958 */
static void C_ccall f_4284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_4284,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6061 in k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(14,c,2))){C_save_and_reclaim((void *)f_6063,2,av);}
a=C_alloc(14);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6067,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:569: current-meta-environment13431344 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a6108 in a6097 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_6109,2,av);}
/* modules.scm:576: ##sys#load */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[102]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[102]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6103 in a6097 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_6104,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[101]+1));
t3=C_mutate2((C_word*)lf[101]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5075 in map-loop884 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_5077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_5077,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5052(t6,((C_word*)t0)[5],t5);}

/* k5481 in k5474 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_5483,2,av);}
/* modules.scm:519: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6075 in k6072 in k6069 in k6065 in k6061 in k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_6077,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:569: current-meta-environment13431344 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6069 in k6065 in k6061 in k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(10,c,4))){C_save_and_reclaim((void *)f_6071,2,av);}
a=C_alloc(10);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6074,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:569: current-module13391340 */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6072 in k6069 in k6065 in k6061 in k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(8,c,4))){C_save_and_reclaim((void *)f_6074,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:569: current-environment13411342 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* a6114 in a6097 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_6115,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[101]+1));
t3=C_mutate2((C_word*)lf[101]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4837 in g942 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_4839,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6202 in k6195 in tostr in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_6204,2,av);}
/* modules.scm:596: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[110];
tp(4,av2);}}

/* k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(14,c,4))){C_save_and_reclaim((void *)f_6049,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: current-meta-environment13431344 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[4])[1];
f_6052(2,av2);}}}

/* k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(13,c,4))){C_save_and_reclaim((void *)f_6046,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: current-environment13411342 */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_6049(2,av2);}}}

/* map-loop400 in with-module-aliases in k2962 in k2958 */
static void C_fcall f_3311(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_3311,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t7);
t10=C_slot(t2,C_fix(1));
t12=t1;
t13=t10;
t1=t12;
t2=t13;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(10,c,2))){C_save_and_reclaim((void *)f_4823,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4826,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:375: ##sys#mark-imported-symbols */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6038 in k6034 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_6040,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(12,c,4))){C_save_and_reclaim((void *)f_6042,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: current-module13391340 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6046(2,av2);}}}

/* k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4826(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(21,c,3))){C_save_and_reclaim((void *)f_4826,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4827,a[2]=((C_word*)t0)[2],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4987,a[2]=t6,a[3]=t2,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4987(t8,t4,((C_word*)t0)[3]);}

/* g942 in k4824 in k4821 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_4827(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_demand(C_calculate_demand(10,0,2))){
C_save_and_reclaim_args((void *)trf_4827,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4839,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:378: merge-se */
f_4242(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:378: merge-se */
f_4242(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* map-loop884 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_5052(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
if(!C_demand(C_calculate_demand(11,0,3))){
C_save_and_reclaim_args((void *)trf_5052,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5077,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_cdr(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_u_i_car(t4);
t8=C_i_cadr(t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4775,a[2]=t5,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_i_caddr(t4);
t12=C_u_i_car(t4);
/* modules.scm:363: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t10;
av2[2]=t11;
av2[3]=t12;
tp(4,av2);}}
else{
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6293 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_6295,2,av);}
/* modules.scm:614: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[116];
av2[3]=t1;
tp(4,av2);}}

/* k6289 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_6291,2,av);}
/* modules.scm:613: ##sys#intern-symbol */{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
C_string_to_symbol(3,av2);}}

/* k6057 in k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(15,c,2))){C_save_and_reclaim((void *)f_6059,2,av);}
a=C_alloc(15);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6063,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:569: current-environment13411342 */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* ##sys#resolve-module-name in k2962 in k2958 */
static void C_ccall f_3345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(8,c,4))){C_save_and_reclaim((void *)f_3345,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3351,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3351(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* map-loop1844 in k7267 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7330(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_7330,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6053 in k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(16,c,2))){C_save_and_reclaim((void *)f_6055,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* modules.scm:569: current-module13391340 */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6050 in k6047 in k6044 in a6041 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(15,c,4))){C_save_and_reclaim((void *)f_6052,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: macro-environment13451346 */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
f_6055(2,av2);}}}

/* k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4817(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(31,c,2))){C_save_and_reclaim((void *)f_4817,2,av);}
a=C_alloc(31);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=C_a_i_record(&a,14,lf[3],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5012,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:372: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}

/* k5041 in map-loop912 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_5043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_5043,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5018(t6,((C_word*)t0)[5],t5);}

/* k6019 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_6021,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6024(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(16,c,4))){C_save_and_reclaim((void *)f_6024,2,av);}
a=C_alloc(16);
t2=t1;
if(C_truep(t2)){
t3=*((C_word*)lf[0]+1);
t4=*((C_word*)lf[26]+1);
t5=*((C_word*)lf[100]+1);
t6=*((C_word*)lf[25]+1);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t8,a[6]=t10,a[7]=t6,a[8]=t5,a[9]=t4,a[10]=t3,a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:572: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[100]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[100]+1);
av2[1]=t11;
tp(2,av2);}}
else{
/* modules.scm:579: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=lf[105];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* k5555 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(11,c,3))){C_save_and_reclaim((void *)f_5557,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5558,a[2]=((C_word*)t0)[2],a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5570,a[2]=t4,a[3]=t2,a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5570(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g1198 in k5555 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5558(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,3))){
C_save_and_reclaim_args((void *)trf_5558,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5562,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:503: display */
t4=*((C_word*)lf[77]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4805 in map-loop912 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,1))){C_save_and_reclaim((void *)f_4807,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(11,c,2))){C_save_and_reclaim((void *)f_7115,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:710: ##sys#mark-imported-symbols */
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_demand(C_calculate_demand(18,c,3))){C_save_and_reclaim((void *)f_7111,7,av);}
a=C_alloc(18);
t7=t4;
t8=t5;
t9=t6;
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7115,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=t8,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t9,a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[7])){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7528,a[2]=((C_word*)t0)[5],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_structure_2(((C_word*)t0)[5],lf[3],lf[53]);
t13=C_i_block_ref(((C_word*)t0)[5],C_fix(8));
t14=C_a_i_list1(&a,1,t3);
/* modules.scm:703: append */
t15=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t11;
av2[2]=t13;
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7543,a[2]=((C_word*)t0)[5],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_structure_2(((C_word*)t0)[5],lf[3],lf[52]);
t13=C_i_block_ref(((C_word*)t0)[5],C_fix(7));
t14=C_a_i_list1(&a,1,t3);
/* modules.scm:706: append */
t15=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t11;
av2[2]=t13;
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}}
else{
t11=t10;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_7115(2,av2);}}}

/* k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6271(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(18,0,4))){
C_save_and_reclaim_args((void *)trf_6271,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
/* modules.scm:610: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[115];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6280,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7060,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* modules.scm:611: c */
t5=((C_word*)t0)[9];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[14];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k6034 in k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,3))){C_save_and_reclaim((void *)f_6036,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:577: ##sys#find-module */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[62];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(15,c,2))){C_save_and_reclaim((void *)f_6030,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:574: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6031 in k6028 in k6022 in k6016 in k6013 in find-module/import-library in k2962 in k2958 */
static void C_ccall f_6033(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(36,c,4))){C_save_and_reclaim((void *)f_6033,2,av);}
a=C_alloc(36);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6042,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word)li73),tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6098,a[2]=((C_word*)t0)[12],a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6120,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[5],a[10]=((C_word)li78),tmp=(C_word)a,a+=11,tmp);
/* modules.scm:569: ##sys#dynamic-wind */
t10=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7127(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(22,c,3))){C_save_and_reclaim((void *)f_7127,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7128,a[2]=((C_word*)t0)[2],a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7172,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7497,a[2]=t6,a[3]=t2,a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7497(t8,t4,((C_word*)t0)[3]);}

/* g1800 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7128(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_7128,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7166,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:714: import-env */
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* for-each-loop496 in k3509 in add-to-export-list in k2962 in k2958 */
static void C_fcall f_3554(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_3554,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_3512(C_a_i(&a,3),((C_word*)t0)[2],t3);
t5=C_slot(t2,C_fix(1));
t7=t1;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5014 in k5010 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_5016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(18,c,2))){C_save_and_reclaim((void *)f_5016,2,av);}
a=C_alloc(18);
/* modules.scm:371: merge-se */
f_4242(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* k5010 in k4815 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_5012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(8,c,2))){C_save_and_reclaim((void *)f_5012,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5016,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:373: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* map-loop912 in k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_fcall f_5018(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
if(!C_demand(C_calculate_demand(10,0,3))){
C_save_and_reclaim_args((void *)trf_5018,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5043,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4807,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:368: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4224 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_4226,2,av);}
a=C_alloc(6);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g675 */
t4=t3;
f_4165(t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* modules.scm:292: warn */
t6=((C_word*)t0)[5];
f_4038(t6,t3,lf[95],t5);}}

/* k3542 in k3535 in k3532 in k3509 in add-to-export-list in k2962 in k2958 */
static void C_ccall f_3544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3544,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(4);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3546 in k3532 in k3509 in add-to-export-list in k2962 in k2958 */
static void C_ccall f_3548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3548,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_fix(11);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6248 in import-name in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_6250,2,av);}
/* modules.scm:601: ##sys#find-module/import-library */
t2=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[62];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6252(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_demand(C_calculate_demand(15,0,2))){
C_save_and_reclaim_args((void *)trf_6252,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:608: import-name */
f_6227(t1,t2);}
else{
t3=C_i_listp(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6271,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t4)){
t6=t5;
f_6271(t6,t4);}
else{
t6=C_i_length(t2);
t7=t5;
f_6271(t7,C_fixnum_lessp(t6,C_fix(2)));}}}

/* k7375 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7377,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(2);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* module-undefined-list in k2962 in k2958 */
static void C_ccall f_3059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_3059,3,av);}
t3=C_i_check_structure_2(t2,lf[3],lf[5]);
t4=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3487 in switch-module in k2962 in k2958 */
static void C_ccall f_3489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,2))){C_save_and_reclaim((void *)f_3489,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3493,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:149: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* import-name in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6227(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_6227,2,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6231,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6250,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:601: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k7526 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7528,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a7104 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_7105,2,av);}
/* modules.scm:698: import-spec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6252(t2,t1,((C_word*)t0)[3]);}

/* k5511 in k5508 in g1229 in k5503 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_5513,2,av);}
/* write-char/port */
t2=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5508 in g1229 in k5503 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,3))){C_save_and_reclaim((void *)f_5510,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:516: display */
t4=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* g480 in k3447 in k3491 in k3487 in switch-module in k2962 in k2958 */
static void C_fcall f_3477(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,0,4))){
C_save_and_reclaim_args((void *)trf_3477,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(13);
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* map-loop782 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4476(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_4476,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:325: g788 */
t5=((C_word*)t0)[4];
f_4434(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4472 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4474(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(21,c,3))){C_save_and_reclaim((void *)f_4474,2,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,lf[57],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t6=t4;
f_4361(t6,C_a_i_cons(&a,2,lf[57],C_SCHEME_END_OF_LIST));}
else{
t6=((C_word*)t0)[8];
t7=C_i_check_structure_2(t6,lf[3],lf[44]);
t8=C_i_block_ref(t6,C_fix(5));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4377,a[2]=((C_word*)t0)[7],a[3]=t10,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4377(t12,t5,t8);}}

/* iface in validate-exports in k2962 in k2958 */
static void C_fcall f_7730(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_7730,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_i_getprop(t2,lf[144],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:796: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7724(t4,t1,C_a_i_list(&a,3,lf[146],*((C_word*)lf[147]+1),((C_word*)t0)[3]));}}

/* k6229 in import-name in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6231(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(0,c,6))){C_save_and_reclaim((void *)f_6231,2,av);}
t2=C_i_check_structure_2(t1,lf[3],lf[11]);
t3=C_i_block_ref(t1,C_fix(10));
t4=C_i_check_structure_2(t1,lf[3],lf[12]);
t5=C_i_block_ref(t1,C_fix(11));
t6=C_i_check_structure_2(t1,lf[3],lf[56]);
t7=C_i_block_ref(t1,C_fix(12));
t8=C_i_check_structure_2(t1,lf[3],lf[4]);
t9=C_i_block_ref(t1,C_fix(1));
/* modules.scm:606: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t9;
av2[3]=t9;
av2[4]=t3;
av2[5]=t5;
av2[6]=t7;
C_values(7,av2);}}

/* k5560 in g1198 in k5555 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_5562,2,av);}
/* modules.scm:504: display */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7706 in k7638 in alias-global-hook in k2962 in k2958 */
static void C_ccall f_7708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_7708,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:777: g2020 */
t3=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7164 in g1800 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7166(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_7166,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(t4)){
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* modules.scm:717: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[128]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[128]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[129];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}}
else{
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6285 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_6287,2,av);}
/* modules.scm:612: import-name */
f_6227(((C_word*)t0)[3],t1);}

/* k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6280(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_demand(C_calculate_demand(19,0,7))){
C_save_and_reclaim_args((void *)trf_6280,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6291,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6295,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:614: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[117]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[117]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_i_cddr(((C_word*)t0)[4]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6308,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6318,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word)li107),tmp=(C_word)a,a+=14,tmp);
/* modules.scm:616: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}}

/* k5533 in for-each-loop1228 in k5503 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_5535,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5525(t3,((C_word*)t0)[4],t2);}

/* k3491 in k3487 in switch-module in k2962 in k2958 */
static void C_ccall f_3493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_3493,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:150: ##sys#current-module */
t5=*((C_word*)lf[0]+1);{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##sys#add-to-export-list in k2962 in k2958 */
static void C_ccall f_3495(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_3495,4,av);}
a=C_alloc(6);
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(t6,C_SCHEME_TRUE);
if(C_truep(t7)){
t8=t2;
t9=C_i_check_structure_2(t8,lf[3],lf[29]);
t10=C_i_block_ref(t8,C_fix(4));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3511,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:165: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t12;
tp(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3582,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:175: append */
t9=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* ##sys#register-interface in k2962 in k2958 */
static void C_ccall f_7713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(8,c,1))){C_save_and_reclaim((void *)f_7713,4,av);}
a=C_alloc(8);
t4=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_a_i_putprop(&a,3,t2,lf[144],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7709 in k7706 in k7638 in alias-global-hook in k2962 in k2958 */
static void C_ccall f_7711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_7711,2,av);}
a=C_alloc(5);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7674,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li125),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:760: g2022 */
t4=t3;
f_7674(t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:784: mrename */
t3=((C_word*)t0)[3];
f_7606(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* set-module-undefined-list! in k2962 in k2958 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3068,4,av);}
t4=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(6);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* g1537 in loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6423(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,5))){
C_save_and_reclaim_args((void *)trf_6423,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:634: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6342(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)t0)[6]);}

/* g1533 in loop in k6335 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,5))){
C_save_and_reclaim_args((void *)trf_6401,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:631: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6342(t5,t1,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k5694 in k5683 in k5680 in k5677 in k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_5696,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5700,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:555: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5493 in k5490 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_5495,2,av);}
/* modules.scm:510: display */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[78];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5490 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(8,c,2))){C_save_and_reclaim((void *)f_5492,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5502,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:509: cadar */
t4=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5683 in k5680 in k5677 in k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_5685,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5704,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:554: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5680 in k5677 in k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5682(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(16,c,2))){C_save_and_reclaim((void *)f_5682,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5685,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5708,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[56]);
t6=C_i_block_ref(t4,C_fix(12));
/* modules.scm:551: merge-se */
f_4242(t3,C_a_i_list(&a,2,t6,((C_word*)t0)[6]));}

/* k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,4))){C_save_and_reclaim((void *)f_5673,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(10);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5474 in k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_5476,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:519: get-output-string */
t3=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5677 in k5671 in k5648 in k5645 in k5642 in k5636 in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,4))){C_save_and_reclaim((void *)f_5679,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(11);
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(12,c,4))){C_save_and_reclaim((void *)f_6698,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:660: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[11];
av2[4]=lf[125];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6925,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:684: c */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[14];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_modules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("modules_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(!C_demand(C_calculate_demand(3,c,2))){
C_save_and_reclaim((void*)C_modules_toplevel,c,av);}
toplevel_initialized=1;
if(!C_demand_2(2970)){
C_save(t1);
C_rereclaim2(2970*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,183);
lf[0]=C_h_intern(&lf[0],18,"\003syscurrent-module");
lf[1]=C_h_intern(&lf[1],28,"\003sysmodule-alias-environment");
lf[3]=C_h_intern(&lf[3],6,"module");
lf[4]=C_h_intern(&lf[4],11,"module-name");
lf[5]=C_h_intern(&lf[5],21,"module-undefined-list");
lf[6]=C_h_intern(&lf[6],26,"set-module-undefined-list!");
lf[7]=C_h_intern(&lf[7],14,"\003sysblock-set!");
lf[8]=C_h_intern(&lf[8],15,"\003sysmodule-name");
lf[9]=C_h_intern(&lf[9],18,"\003sysmodule-exports");
lf[10]=C_h_intern(&lf[10],18,"module-export-list");
lf[11]=C_h_intern(&lf[11],15,"module-vexports");
lf[12]=C_h_intern(&lf[12],15,"module-sexports");
lf[13]=C_h_intern(&lf[13],25,"\003sysregister-module-alias");
lf[14]=C_h_intern(&lf[14],23,"\003syswith-module-aliases");
lf[15]=C_h_intern(&lf[15],16,"\003sysdynamic-wind");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],6,"append");
lf[18]=C_h_intern(&lf[18],23,"\003sysresolve-module-name");
lf[19]=C_h_intern(&lf[19],5,"error");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\035module alias refers to itself");
lf[21]=C_h_intern(&lf[21],15,"\003sysfind-module");
lf[22]=C_h_intern(&lf[22],16,"\003sysmodule-table");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\020module not found");
lf[24]=C_h_intern(&lf[24],17,"\003sysswitch-module");
lf[25]=C_h_intern(&lf[25],21,"\003sysmacro-environment");
lf[26]=C_h_intern(&lf[26],23,"\003syscurrent-environment");
lf[27]=C_h_intern(&lf[27],25,"module-saved-environments");
lf[28]=C_h_intern(&lf[28],22,"\003sysadd-to-export-list");
lf[29]=C_h_intern(&lf[29],17,"module-exist-list");
lf[30]=C_h_intern(&lf[30],8,"for-each");
lf[31]=C_h_intern(&lf[31],28,"\003systoplevel-definition-hook");
lf[32]=C_h_intern(&lf[32],28,"\003sysregister-meta-expression");
lf[33]=C_h_intern(&lf[33],23,"module-meta-expressions");
lf[34]=C_h_intern(&lf[34],15,"check-for-redef");
lf[35]=C_h_intern(&lf[35],8,"\003syswarn");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\047redefinition of imported syntax binding");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000&redefinition of imported value binding");
lf[38]=C_h_intern(&lf[38],19,"\003sysregister-export");
lf[39]=C_h_intern(&lf[39],19,"module-defined-list");
lf[40]=C_h_intern(&lf[40],8,"\003sysdelq");
lf[41]=C_h_intern(&lf[41],17,"\003sysmodule-rename");
lf[42]=C_h_intern(&lf[42],15,"\003sysfind-export");
lf[43]=C_h_intern(&lf[43],26,"\003sysregister-syntax-export");
lf[44]=C_h_intern(&lf[44],26,"module-defined-syntax-list");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000!use of syntax precedes definition");
lf[46]=C_h_intern(&lf[46],22,"\003sysregister-undefined");
lf[47]=C_h_intern(&lf[47],19,"\003sysregister-module");
lf[48]=C_h_intern(&lf[48],25,"\003sysmark-imported-symbols");
lf[49]=C_h_intern(&lf[49],12,"\004corealiased");
lf[51]=C_h_intern(&lf[51],32,"\003syscompiled-module-registration");
lf[52]=C_h_intern(&lf[52],19,"module-import-forms");
lf[53]=C_h_intern(&lf[53],24,"module-meta-import-forms");
lf[54]=C_h_intern(&lf[54],10,"\003sysappend");
lf[55]=C_h_intern(&lf[55],5,"quote");
lf[56]=C_h_intern(&lf[56],15,"module-iexports");
lf[57]=C_h_intern(&lf[57],4,"list");
lf[58]=C_h_intern(&lf[58],4,"cons");
lf[59]=C_h_intern(&lf[59],16,"\003sysstrip-syntax");
lf[60]=C_h_intern(&lf[60],28,"\003sysregister-compiled-module");
lf[61]=C_h_intern(&lf[61],16,"\003sysfast-reverse");
lf[62]=C_h_intern(&lf[62],6,"import");
lf[63]=C_h_intern(&lf[63],4,"eval");
lf[64]=C_h_intern(&lf[64],22,"\003sysensure-transformer");
lf[65]=C_h_intern(&lf[65],9,"\003syserror");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\0000cannot find implementation of re-exported syntax");
lf[67]=C_h_intern(&lf[67],19,"\003sysprimitive-alias");
lf[68]=C_h_intern(&lf[68],14,"\004coreprimitive");
lf[69]=C_h_intern(&lf[69],18,"\003sysstring->symbol");
lf[70]=C_h_intern(&lf[70],17,"\003sysstring-append");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002#%");
lf[72]=C_h_intern(&lf[72],29,"\003sysregister-primitive-module");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\0002unknown syntax referenced while registering module");
lf[74]=C_h_intern(&lf[74],19,"\003sysfinalize-module");
lf[75]=C_h_intern(&lf[75],7,"\004coredb");
lf[76]=C_h_intern(&lf[76],17,"get-output-string");
lf[77]=C_h_intern(&lf[77],7,"display");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[79]=C_h_intern(&lf[79],5,"cadar");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\042\012Warning:    suggesting: `(import ");
lf[81]=C_h_intern(&lf[81],19,"\003syswrite-char/port");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\025\012Warning:    (import ");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\037\012Warning:    suggesting one of:");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\015\012Warning:    ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\004 in:");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\052reference to possibly unbound identifier `");
lf[87]=C_h_intern(&lf[87],18,"open-output-string");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000$(internal) indirect export not found");
lf[89]=C_h_intern(&lf[89],13,"string-append");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\014 in module `");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[92]=C_h_intern(&lf[92],14,"symbol->string");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000!indirect export of syntax binding");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\033indirect reexport of syntax");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\042indirect export of unknown binding");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\021module unresolved");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\037exported identifier of module `");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\026\047 has not been defined");
lf[99]=C_h_intern(&lf[99],30,"\003sysfind-module/import-library");
lf[100]=C_h_intern(&lf[100],28,"\003syscurrent-meta-environment");
lf[101]=C_h_intern(&lf[101],19,"\003sysnotices-enabled");
lf[102]=C_h_intern(&lf[102],8,"\003sysload");
lf[103]=C_h_intern(&lf[103],26,"\003sysmeta-macro-environment");
lf[104]=C_h_intern(&lf[104],21,"\003syssyntax-error-hook");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000#cannot import from undefined module");
lf[106]=C_h_intern(&lf[106],18,"\003sysfind-extension");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\007.import");
lf[108]=C_h_intern(&lf[108],17,"\003sysexpand-import");
lf[109]=C_h_intern(&lf[109],16,"\004coremacro-alias");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[111]=C_h_intern(&lf[111],18,"\003syssymbol->string");
lf[112]=C_h_intern(&lf[112],14,"number->string");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid prefix");
lf[114]=C_h_intern(&lf[114],8,"keyword\077");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\005srfi-");
lf[117]=C_h_intern(&lf[117],18,"\003sysnumber->string");
lf[118]=C_h_intern(&lf[118],7,"sprintf");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\0002imported identifier doesn\047t exist in module ~s: ~s");
lf[120]=C_h_intern(&lf[120],16,"\003syscheck-syntax");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\0002excluded identifier doesn\047t exist in module ~s: ~s");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\0001renamed identifier doesn\047t exist in module ~s: ~s");
lf[125]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000");
lf[126]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[128]=C_h_intern(&lf[128],10,"\003sysnotice");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000(re-importing already imported identifier");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000$re-importing already imported syntax");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000%`reexport\047 only valid inside a module");
lf[132]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[133]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[134]=C_h_intern(&lf[134],4,"srfi");
lf[135]=C_h_intern(&lf[135],6,"prefix");
lf[136]=C_h_intern(&lf[136],6,"except");
lf[137]=C_h_intern(&lf[137],6,"rename");
lf[138]=C_h_intern(&lf[138],4,"only");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[140]=C_h_intern(&lf[140],21,"\003sysalias-global-hook");
lf[141]=C_h_intern(&lf[141],27,"\003sysactive-eval-environment");
lf[142]=C_h_intern(&lf[142],21,"\003sysqualified-symbol\077");
lf[143]=C_h_intern(&lf[143],22,"\003sysregister-interface");
lf[144]=C_h_intern(&lf[144],14,"\004coreinterface");
lf[145]=C_h_intern(&lf[145],20,"\003sysvalidate-exports");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\021unknown interface");
lf[147]=C_h_intern(&lf[147],1,"x");
lf[148]=C_h_intern(&lf[148],1,"\052");
lf[149]=C_h_intern(&lf[149],7,"\000syntax");
lf[150]=C_h_intern(&lf[150],10,"\000interface");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid interface specification");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[156]=C_h_intern(&lf[156],20,"\003sysregister-functor");
lf[157]=C_h_intern(&lf[157],12,"\004corefunctor");
lf[158]=C_h_intern(&lf[158],23,"\003sysinstantiate-functor");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000/argument list mismatch in functor instantiation");
lf[160]=C_h_intern(&lf[160],11,"\004coremodule");
lf[161]=C_h_intern(&lf[161],21,"\004corelet-module-alias");
lf[162]=C_h_intern(&lf[162],26,"\003sysmatch-functor-argument");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000!instantation of undefined functor");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\021argument module `");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match required signature\012");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\022in instantiation `");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\016\047 of functor `");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\0007\047, because the following required exports are missing:\012");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[170]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376"
"\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000"
"\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005"
"caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaa"
"r\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadad"
"r\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdada"
"r\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cdddd"
"r\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\004lis"
"t\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\007"
"reverse\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004assq\376\003\000\000\002\376\001\000\000\004assv\376"
"\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\016string->symbol\376"
"\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010compl"
"ex\077\376\003\000\000\002\376\001\000\000\010inexact\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\005zero\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001\000\000\005e"
"ven\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\001+\376"
"\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001\052\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000"
"\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002"
"\376\001\000\000\003lcm\376\003\000\000\002\376\001\000\000\003abs\376\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000"
"\005round\376\003\000\000\002\376\001\000\000\016exact->inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log"
"\376\003\000\000\002\376\001\000\000\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asi"
"n\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000"
"\000\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000"
"\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000"
"\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespa"
"ce\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\003"
"\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downcase\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integ"
"er->char\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376"
"\003\000\000\002\376\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376"
"\003\000\000\002\376\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\013make-s"
"tring\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string-set!\376\003\000\000\002\376\001\000\000\015s"
"tring-append\376\003\000\000\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000"
"\000\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000"
"\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\015v"
"ector-length\376\003\000\000\002\376\001\000\000\014vector->list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003"
"\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\005force\376"
"\003\000\000\002\376\001\000\000\036call-with-current-continuation\376\003\000\000\002\376\001\000\000\013input-port\077\376\003\000\000\002\376\001\000\000\014output-por"
"t\077\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\024call-with-i"
"nput-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-"
"output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\004load\376\003"
"\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000"
"\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\024with-input"
"-from-file\376\003\000\000\002\376\001\000\000\023with-output-to-file\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376"
"\001\000\000\011imag-part\376\003\000\000\002\376\001\000\000\011real-part\376\003\000\000\002\376\001\000\000\011magnitude\376\003\000\000\002\376\001\000\000\011numerator\376\003\000\000\002\376\001\000\000\013"
"denominator\376\003\000\000\002\376\001\000\000\005angle\376\003\000\000\002\376\001\000\000\031scheme-report-environment\376\003\000\000\002\376\001\000\000\020null-envi"
"ronment\376\003\000\000\002\376\001\000\000\027interaction-environment\376\003\000\000\002\376\001\000\000\004else\376\377\016");
lf[171]=C_h_intern(&lf[171],29,"\003sysdefault-macro-environment");
lf[172]=C_h_intern(&lf[172],18,"module-environment");
lf[173]=C_h_intern(&lf[173],11,"environment");
lf[174]=C_h_intern(&lf[174],17,"register-feature!");
lf[175]=C_h_intern(&lf[175],19,"module-environments");
lf[176]=C_h_intern(&lf[176],4,"r5rs");
lf[177]=C_h_intern(&lf[177],6,"scheme");
lf[178]=C_h_intern(&lf[178],9,"r5rs-null");
lf[179]=C_h_intern(&lf[179],9,"r4rs-null");
lf[180]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\014dynamic-wind\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\377\016");
lf[181]=C_h_intern(&lf[181],4,"r4rs");
lf[182]=C_h_intern(&lf[182],14,"make-parameter");
C_register_lf2(lf,183,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:72: make-parameter */
t3=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* map-loop1476 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6457(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_6457,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6482,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:621: g1482 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5423 in map-loop1127 in finalize-module in k2962 in k2958 */
static void C_ccall f_5425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_5425,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_i_assq(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1545 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6660(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_6660,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6685,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:639: g1551 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6634 in g1615 in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_6636,2,av);}
/* modules.scm:656: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6512(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* ##sys#register-export in k2962 in k2958 */
static void C_ccall f_3628(C_word c,C_word *av){
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
C_word t9;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(5,c,4))){C_save_and_reclaim((void *)f_3628,4,av);}
a=C_alloc(5);
if(C_truep(t3)){
t4=t3;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3638,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t9;
av2[1]=t7;
f_3638(2,av2);}}
else{
/* modules.scm:192: ##sys#find-export */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3612 in check-for-redef in k2962 in k2958 */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_3614,2,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:187: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[36];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7827 in loop in validate-exports in k2962 in k2958 */
static void C_ccall f_7829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_7829,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4499 in map-loop782 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_4501,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4476(t6,((C_word*)t0)[5],t5);}

/* g1615 in loop in k6505 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6624(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,3))){
C_save_and_reclaim_args((void *)trf_6624,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* modules.scm:656: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k7801 in loop in validate-exports in k2962 in k2958 */
static void C_ccall f_7803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_7803,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7955 in instantiate-functor in k2962 in k2958 */
static void C_fcall f_8051(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_demand(C_calculate_demand(9,0,6))){
C_save_and_reclaim_args((void *)trf_8051,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8063,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li137),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_8063(t7,t1,t3);}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:854: merr */
t4=((C_word*)t0)[4];
f_7967(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_car(t5):t5);
t8=t7;
t9=C_i_car(t2);
t10=t9;
t11=C_u_i_cdr(t4);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8137,a[2]=t8,a[3]=t10,a[4]=t1,a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:863: ##sys#match-functor-argument */
t13=*((C_word*)lf[162]+1);{
C_word av2[7];
av2[0]=t13;
av2[1]=t12;
av2[2]=t8;
av2[3]=((C_word*)t0)[2];
av2[4]=t10;
av2[5]=t11;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t13+1)))(7,av2);}}}}

/* map-loop749 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4565(C_word t0,C_word t1,C_word t2){
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
if(!C_demand(C_calculate_demand(30,0,2))){
C_save_and_reclaim_args((void *)trf_4565,3,t0,t1,t2);}
a=C_alloc(30);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_car(t4);
t7=C_u_i_cdr(t4);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t3;
f_4590(t9,C_a_i_list(&a,2,lf[55],t8));}
else{
t6=C_u_i_car(t4);
t7=C_a_i_list(&a,2,lf[55],t6);
t8=C_a_i_list(&a,2,lf[55],C_SCHEME_END_OF_LIST);
t9=C_u_i_cdr(t4);
t10=t3;
f_4590(t10,C_a_i_list(&a,4,lf[57],t7,t8,t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4563(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(36,c,3))){C_save_and_reclaim((void *)f_4563,2,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,lf[57],t1);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_i_check_structure_2(t4,lf[3],lf[11]);
t6=C_i_block_ref(t4,C_fix(10));
t7=C_a_i_list(&a,2,lf[55],t6);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[3],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t14=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4474,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=t8,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4476,a[2]=t11,a[3]=t17,a[4]=t13,a[5]=t12,a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_4476(t19,t15,((C_word*)t0)[4]);}

/* loop2 in loop in k7955 in instantiate-functor in k2962 in k2958 */
static void C_fcall f_8063(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_8063,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=C_i_car(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_caar(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8085,a[2]=t4,a[3]=t7,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:847: cadar */
t9=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* modules.scm:852: merr */
t6=((C_word*)t0)[5];
f_7967(t6,t1);}}}

/* k8028 in k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_8030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(18,c,1))){C_save_and_reclaim((void *)f_8030,2,av);}
a=C_alloc(18);
t2=C_eqp(lf[148],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]):C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]));
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[160],t4);
t6=((C_word*)t0)[5];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[161],t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k7841 in loop in validate-exports in k2962 in k2958 */
static void C_fcall f_7843(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_7843,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:815: iface */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7730(t3,((C_word*)t0)[4],t2);}
else{
/* modules.scm:816: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_7724(t2,((C_word*)t0)[4],C_a_i_list(&a,3,lf[151],((C_word*)t0)[2],((C_word*)t0)[6]));}}

/* k6480 in map-loop1476 in k6326 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_6482,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6457(t6,((C_word*)t0)[5],t5);}

/* k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(15,c,3))){C_save_and_reclaim((void *)f_5440,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* modules.scm:520: module-undefined-list */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5441(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_demand(C_calculate_demand(6,0,2))){
C_save_and_reclaim_args((void *)trf_5441,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(t2);
t4=t3;
t5=t2;
t6=C_u_i_car(t5);
if(C_truep(C_i_memq(t6,((C_word*)t0)[2]))){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5455,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:494: open-output-string */
t8=*((C_word*)lf[87]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3641(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(12,c,3))){C_save_and_reclaim((void *)f_3641,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3704,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];
t6=C_i_check_structure_2(t5,lf[3],lf[4]);
t7=C_i_block_ref(t5,C_fix(1));
/* modules.scm:195: ##sys#module-rename */
t8=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k5842 in k5838 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_5844,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5838 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5840(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(4,0,2))){
C_save_and_reclaim_args((void *)trf_5840,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5844,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:488: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5809(t6,t3,t5);}

/* k7570 in for-each-loop1760 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_7572,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7562(t3,((C_word*)t0)[4],t2);}

/* k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6498(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(24,c,3))){C_save_and_reclaim((void *)f_6498,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6507,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6660,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6660(t12,t8,((C_word*)t0)[3]);}

/* k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(15,c,4))){C_save_and_reclaim((void *)f_6495,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:638: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[123];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6698,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:659: c */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[16];
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k5854 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(8,0,2))){
C_save_and_reclaim_args((void *)trf_5856,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5840(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5906,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:474: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k5851 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_5853,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_5840(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* g1687 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6820(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
if(!C_demand(C_calculate_demand(12,0,3))){
C_save_and_reclaim_args((void *)trf_6820,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6836,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:674: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k7505 in for-each-loop1799 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_7507,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7497(t3,((C_word*)t0)[4],t2);}

/* k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_5465,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:500: display */
t4=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[85];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5468(2,av2);}}}

/* k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_5462,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5466 in k5463 in k5460 in k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5468(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(9,c,3))){C_save_and_reclaim((void *)f_5468,2,av);}
a=C_alloc(9);
t2=C_i_getprop(((C_word*)t0)[2],lf[75],C_SCHEME_FALSE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5476,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=C_i_length(t3);
t6=C_eqp(C_fix(1),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5492,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:508: display */
t8=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[80];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5505,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:512: display */
t8=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[83];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8830,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:519: get-output-string */
t6=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3642 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(10,c,3))){C_save_and_reclaim((void *)f_3644,2,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3700,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:198: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3650(2,av2);}}}

/* k6834 in g1687 in loop in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_6836,2,av);}
/* modules.scm:672: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6718(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k7482 in for-each-loop1820 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_7484,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7474(t3,((C_word*)t0)[4],t2);}

/* k8083 in loop2 in loop in k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_8085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,6))){C_save_and_reclaim((void *)f_8085,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8089,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:849: ##sys#match-functor-argument */
t5=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[7];
av2[4]=t2;
av2[5]=t3;
av2[6]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}

/* k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5434(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(16,c,2))){C_save_and_reclaim((void *)f_5434,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
t6=C_i_check_structure_2(t5,lf[3],lf[12]);
t7=C_i_block_ref(t5,C_fix(11));
/* modules.scm:454: merge-se */
f_4242(t3,C_a_i_list(&a,2,t7,t2));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5939,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:455: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t5;
tp(2,av2);}}}

/* k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5437(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(19,c,3))){C_save_and_reclaim((void *)f_5437,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
t5=(C_truep(t4)?((C_word*)t0)[2]:((C_word*)t0)[8]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5809,a[2]=t2,a[3]=t7,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word)li69),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_5809(t9,t3,t5);}

/* k8087 in k8083 in loop2 in loop in k7955 in instantiate-functor in k2962 in k2958 */
static void C_ccall f_8089(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(10,c,2))){C_save_and_reclaim((void *)f_8089,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8100,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* modules.scm:850: loop2 */
t7=((C_word*)((C_word*)t0)[6])[1];
f_8063(t7,t4,t6);}

/* k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,2))){C_save_and_reclaim((void *)f_3638,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:193: module-undefined-list */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3648 in k3642 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(10,c,2))){C_save_and_reclaim((void *)f_3650,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3689,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:199: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* for-each-loop1799 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7497(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_7497,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7507,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:711: g1800 */
t5=((C_word*)t0)[3];
f_7128(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop1760 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_7562,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7572,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:695: g1761 */
t5=((C_word*)t0)[3];
f_7099(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7558 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_7560,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=lf[132];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6683 in map-loop1545 in k6496 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_6685,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6660(t6,((C_word*)t0)[5],t5);}

/* loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5809(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
if(!C_demand(C_calculate_demand(17,0,2))){
C_save_and_reclaim_args((void *)trf_5809,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?t3:C_i_car(t3));
t6=t5;
if(C_truep(C_i_assq(t6,((C_word*)t0)[2]))){
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:467: loop */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5840,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_i_assq(t6,((C_word*)t0)[4]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5853,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5856,a[2]=t9,a[3]=t7,a[4]=t6,a[5]=t10,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t9)){
t12=C_i_cdr(t9);
t13=t11;
f_5856(t13,C_i_symbolp(t12));}
else{
t12=t11;
f_5856(t12,C_SCHEME_FALSE);}}}}

/* loop in validate-exports in k2962 in k2958 */
static void C_fcall f_7771(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(11,0,3))){
C_save_and_reclaim_args((void *)trf_7771,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t3;
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7803,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:808: loop */
t13=t5;
t14=t7;
t1=t13;
t2=t14;
goto loop;}
else{
if(C_truep(C_i_listp(t4))){
t5=C_i_car(t4);
t6=C_eqp(lf[149],t5);
if(C_truep(t6)){
t7=C_u_i_cdr(t4);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7829,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* modules.scm:812: loop */
t13=t8;
t14=t10;
t1=t13;
t2=t14;
goto loop;}
else{
t7=C_u_i_car(t4);
t8=C_eqp(lf[150],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7843,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t10))){
t11=C_i_cadr(t4);
t12=t9;
f_7843(t12,C_i_symbolp(t11));}
else{
t11=t9;
f_7843(t11,C_SCHEME_FALSE);}}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7870,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t10,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li130),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_7870(t12,t1,t4);}}}
else{
/* modules.scm:810: err */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7724(t5,t1,C_a_i_list(&a,3,lf[153],t4,((C_word*)t0)[5]));}}}
else{
/* modules.scm:805: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7724(t3,t1,C_a_i_list(&a,2,lf[154],((C_word*)t0)[5]));}}}

/* k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_5455,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5459,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:496: display */
t5=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[86];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5457 in k5453 in g1182 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,3))){C_save_and_reclaim((void *)f_5459,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:497: display */
t3=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* for-each-loop2175 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_fcall f_8292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_8292,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8302,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:874: g2176 */
t5=((C_word*)t0)[3];
f_8171(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3651 in k3648 in k3642 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3653(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(9,c,4))){C_save_and_reclaim((void *)f_3653,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[29]);
t5=C_i_block_ref(t3,C_fix(4));
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t9=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t2;
av2[2]=t7;
av2[3]=C_fix(4);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k3654 in k3651 in k3648 in k3642 in k3639 in k3636 in register-export in k2962 in k2958 */
static void C_ccall f_3656(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(6,c,4))){C_save_and_reclaim((void *)f_3656,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_fix(3);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7541 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7543,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(7);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* check-for-redef in k2962 in k2958 */
static void C_ccall f_3607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_demand(C_calculate_demand(5,c,3))){C_save_and_reclaim((void *)f_3607,5,av);}
a=C_alloc(5);
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3614,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:185: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=lf[37];
av2[3]=t2;
tp(4,av2);}}
else{
t7=t6;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_3614(2,av2);}}}

/* ##sys#register-undefined in k2962 in k2958 */
static void C_ccall f_3798(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(6,c,2))){C_save_and_reclaim((void *)f_3798,5,av);}
a=C_alloc(6);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3805,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:229: module-undefined-list */
t6=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
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

/* k7207 in g1821 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7209(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_7209,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=((C_word*)t0)[3];
t8=C_u_i_car(t7);
/* modules.scm:723: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[128]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[128]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[130];
av2[3]=t8;
tp(4,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* err in validate-exports in k2962 in k2958 */
static void C_fcall f_7724(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,0,4))){
C_save_and_reclaim_args((void *)trf_7724,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[104]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* warn in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_4038(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(8,0,2))){
C_save_and_reclaim_args((void *)trf_4038,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4046,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4050,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:264: symbol->string */
t6=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* ##sys#validate-exports in k2962 in k2958 */
static void C_ccall f_7721(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand(22,c,3))){C_save_and_reclaim((void *)f_7721,4,av);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7724,a[2]=t3,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7730,a[2]=t5,a[3]=t2,a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[148],t2);
if(C_truep(t10)){
t11=t2;
t12=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:798: iface */
t11=((C_word*)t7)[1];
f_7730(t11,t1,t2);}
else{
if(C_truep(C_i_listp(t2))){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7771,a[2]=t12,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=((C_word)li131),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7771(t14,t1,t2);}
else{
/* modules.scm:800: err */
t11=((C_word*)t5)[1];
f_7724(t11,t1,C_a_i_list(&a,2,lf[155],t2));}}}}

/* k3781 in k3777 in k3734 in k3728 in k3725 in register-syntax-export in k2962 in k2958 */
static void C_ccall f_3783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_3783,2,av);}
/* modules.scm:216: check-for-redef */
t2=*((C_word*)lf[34]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8281 in map-loop2197 in k8234 in k8230 in k8226 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_8283,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8258(t6,((C_word*)t0)[5],t5);}

/* k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(13,0,2))){
C_save_and_reclaim_args((void *)trf_4317,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4325,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4662,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:313: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t5=t4;
f_4325(t5,C_SCHEME_END_OF_LIST);}}

/* k8248 in map-loop2197 in k8234 in k8230 in k8226 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_8250,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[169];
av2[3]=t1;
tp(4,av2);}}

/* k8254 in k8234 in k8230 in k8226 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,11))){C_save_and_reclaim((void *)f_8256,2,av);}{
C_word *av2;
if(c >= 12) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(12);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[89]+1);
av2[3]=lf[164];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[165];
av2[6]=lf[166];
av2[7]=((C_word*)t0)[4];
av2[8]=lf[167];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[168];
av2[11]=t1;
C_apply(12,av2);}}

/* map-loop2197 in k8234 in k8230 in k8226 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_fcall f_8258(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_8258,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8250,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:890: symbol->string */
t7=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5866 in k5904 in k5854 in loop in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5868(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(11,0,3))){
C_save_and_reclaim_args((void *)trf_5868,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5840(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
if(C_truep(((C_word*)t0)[5])){
/* modules.scm:487: ##sys#module-rename */
t2=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5884,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5892,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:483: symbol->string */
t6=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_4088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_4088,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* modules.scm:273: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4061(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4236,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:274: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t5;
tp(2,av2);}}}

/* ##sys#switch-module in k2962 in k2958 */
static void C_ccall f_3442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand(5,c,2))){C_save_and_reclaim((void *)f_3442,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3489,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:149: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3447 in k3491 in k3487 in switch-module in k2962 in k2958 */
static void C_ccall f_3449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,3))){C_save_and_reclaim((void *)f_3449,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3477,a[2]=((C_word*)t0)[5],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:147: g480 */
t4=t3;
f_3477(t4,t2,t1);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=t2;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
f_3452(2,av2);}}}

/* k6887 in g1692 in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_6889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_6889,2,av);}
/* modules.scm:679: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6706(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k5790 in for-each-loop1181 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_5792,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5782(t3,((C_word*)t0)[4],t2);}

/* k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,2))){C_save_and_reclaim((void *)f_8211,2,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8224,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8228,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:887: symbol->string */
t4=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4048 in warn in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,5))){C_save_and_reclaim((void *)f_4050,2,av);}
/* modules.scm:264: string-append */
t2=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[90];
av2[4]=t1;
av2[5]=lf[91];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3462 in k3453 in k3450 in k3447 in k3491 in k3487 in switch-module in k2962 in k2958 */
static void C_ccall f_3464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_3464,2,av);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* modules.scm:158: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* ##sys#register-module in k2962 in k2958 */
static void C_ccall f_3864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +21,c,1))){
C_save_and_reclaim((void*)f_3864,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+21);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=t2;
t14=C_a_i_record(&a,14,lf[3],t13,t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t6,t10,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t15=C_a_i_cons(&a,2,t2,t14);
t16=C_a_i_cons(&a,2,t15,*((C_word*)lf[22]+1));
t17=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t16);
t18=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t18;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* for-each-loop1181 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_5782(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(5,0,2))){
C_save_and_reclaim_args((void *)trf_5782,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5792,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:442: g1182 */
t5=((C_word*)t0)[3];
f_5441(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8222 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_8224,2,av);}
/* modules.scm:883: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[3];
av2[3]=t1;
tp(4,av2);}}

/* k3450 in k3447 in k3491 in k3487 in switch-module in k2962 in k2958 */
static void C_ccall f_3452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_demand(C_calculate_demand(4,c,2))){C_save_and_reclaim((void *)f_3452,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],lf[27]);
t5=t2;
f_3455(t5,C_i_block_ref(t3,C_fix(13)));}
else{
t3=t2;
f_3455(t3,((C_word*)((C_word*)t0)[4])[1]);}}

/* k3453 in k3450 in k3447 in k3491 in k3487 in switch-module in k2962 in k2958 */
static void C_fcall f_3455(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(8,0,2))){
C_save_and_reclaim_args((void *)trf_3455,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3464,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* modules.scm:157: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
/* modules.scm:159: ##sys#current-module */
t4=*((C_word*)lf[0]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k8226 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,2))){C_save_and_reclaim((void *)f_8228,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:888: symbol->string */
t4=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3456 in k3453 in k3450 in k3447 in k3491 in k3487 in switch-module in k2962 in k2958 */
static void C_ccall f_3458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_3458,2,av);}
/* modules.scm:159: ##sys#current-module */
t2=*((C_word*)lf[0]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* ##sys#finalize-module in k2962 in k2958 */
static void C_ccall f_5396(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand(24,c,3))){C_save_and_reclaim((void *)f_5396,3,av);}
a=C_alloc(24);
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[3],lf[4]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t9;
t11=t2;
t12=C_i_check_structure_2(t11,lf[3],lf[39]);
t13=C_i_block_ref(t11,C_fix(3));
t14=t13;
t15=t2;
t16=C_i_check_structure_2(t15,lf[3],lf[29]);
t17=C_i_block_ref(t15,C_fix(4));
t18=t17;
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t22=t21;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=((C_word*)t23)[1];
t25=t2;
t26=C_i_check_structure_2(t25,lf[3],lf[44]);
t27=C_i_block_ref(t25,C_fix(5));
t28=C_i_check_list_2(t27,lf[16]);
t29=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5434,a[2]=t18,a[3]=t20,a[4]=t1,a[5]=t2,a[6]=t10,a[7]=t6,a[8]=t14,tmp=(C_word)a,a+=9,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5976,a[2]=t23,a[3]=t31,a[4]=t24,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t33=((C_word*)t31)[1];
f_5976(t33,t29,t27);}

/* k4044 in warn in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_4046,2,av);}
/* modules.scm:263: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* g1692 in loop in k6699 in k6696 in k6493 in k6323 in a6317 in k6278 in k6269 in import-spec in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_6873(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
if(!C_demand(C_calculate_demand(12,0,3))){
C_save_and_reclaim_args((void *)trf_6873,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6889,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:681: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k7250 in k7247 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,1))){C_save_and_reclaim((void *)f_7252,2,av);}
t2=((C_word*)t0)[2];
f_7218(t2,C_SCHEME_UNDEFINED);}

/* k7257 in k7247 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7259,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4588 in map-loop749 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4590(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_4590,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4565(t6,((C_word*)t0)[5],t5);}

/* k7267 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7269(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(22,c,3))){C_save_and_reclaim((void *)f_7269,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[29]);
t4=C_i_block_ref(((C_word*)t0)[2],C_fix(4));
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7287,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7330,a[2]=t8,a[3]=t12,a[4]=t9,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7330(t14,t10,((C_word*)t0)[5]);}

/* k3384 in loop in resolve-module-name in k2962 in k2958 */
static void C_ccall f_3386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_3386,2,av);}
a=C_alloc(7);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li10),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:131: g441 */
t4=t3;
f_3359(t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop2 in loop in validate-exports in k2962 in k2958 */
static void C_fcall f_7870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(!C_demand(C_calculate_demand(9,0,2))){
C_save_and_reclaim_args((void *)trf_7870,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7884,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* modules.scm:819: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7771(t5,t3,t4);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:820: loop2 */
t7=t1;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
/* modules.scm:821: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_7724(t4,t1,C_a_i_list(&a,3,lf[152],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* k5109 in map-loop856 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_5111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,2))){C_save_and_reclaim((void *)f_5111,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5086(t6,((C_word*)t0)[5],t5);}

/* ##sys#find-module in k2962 in k2958 */
static void C_ccall f_3388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4))){
C_save_and_reclaim((void*)f_3388,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
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
C_word t13;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_TRUE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_assq(t2,*((C_word*)lf[22]+1));
if(C_truep(t12)){
t13=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t13;
av2[1]=C_i_cdr(t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
if(C_truep(t5)){
/* modules.scm:143: error */
t13=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t9;
av2[3]=lf[23];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t13=t1;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t13;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}

/* k4789 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4791(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(20,c,3))){C_save_and_reclaim((void *)f_4791,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5018,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5018(t12,t8,((C_word*)t0)[2]);}

/* k7882 in loop2 in loop in validate-exports in k2962 in k2958 */
static void C_ccall f_7884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_7884,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4359 in k4472 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_fcall f_4361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(21,0,3))){
C_save_and_reclaim_args((void *)trf_4361,2,t0,t1);}
a=C_alloc(21);
t2=C_a_i_list(&a,6,lf[60],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=C_a_i_list(&a,1,t2);
/* modules.scm:306: ##sys#append */
t4=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4363 in k4472 in k4561 in k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(3,c,1))){C_save_and_reclaim((void *)f_4365,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4361(t2,C_a_i_cons(&a,2,lf[57],t1));}

/* k8230 in k8226 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(6,c,2))){C_save_and_reclaim((void *)f_8232,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:889: symbol->string */
t4=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8234 in k8230 in k8226 in k8209 in k8162 in match-functor-argument in k2962 in k2958 */
static void C_ccall f_8236(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(19,c,3))){C_save_and_reclaim((void *)f_8236,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8256,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8258,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8258(t13,t9,t7);}

/* loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_fcall f_4061(C_word t0,C_word t1,C_word t2){
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
loop:
if(!C_demand(C_calculate_demand(11,0,3))){
C_save_and_reclaim_args((void *)trf_4061,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:270: loop */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4088,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li66),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_4088(t8,t1,t4);}}}

/* k7292 in k7285 in k7267 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_ccall f_7294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,4))){C_save_and_reclaim((void *)f_7294,2,av);}
/* modules.scm:733: append */
t2=*((C_word*)lf[17]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1870 in k7285 in k7267 in k7241 in k7213 in k7170 in k7125 in k7113 in a7110 in g1761 in k7096 in k7093 in k6161 in k6158 in k6155 in k6152 in k6149 in expand-import in k2962 in k2958 */
static void C_fcall f_7296(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(!C_demand(C_calculate_demand(3,0,2))){
C_save_and_reclaim_args((void *)trf_7296,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4773 in map-loop884 in k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(9,c,1))){C_save_and_reclaim((void *)f_4775,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4331 in k4323 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4333(C_word c,C_word *av){
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
if(!C_demand(C_calculate_demand(27,c,3))){C_save_and_reclaim((void *)f_4333,2,av);}
a=C_alloc(27);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_check_structure_2(t3,lf[3],lf[4]);
t5=C_i_block_ref(t3,C_fix(1));
t6=C_a_i_list(&a,2,lf[55],t5);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=((C_word*)t0)[2];
t13=C_i_check_structure_2(t12,lf[3],lf[56]);
t14=C_i_block_ref(t12,C_fix(12));
t15=C_i_check_list_2(t14,lf[16]);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t7,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4565,a[2]=t10,a[3]=t18,a[4]=t11,a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_4565(t20,t16,t14);}

/* k4749 in register-compiled-module in k2962 in k2958 */
static void C_ccall f_4751(C_word c,C_word *av){
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
C_word *a;
if(!C_demand(C_calculate_demand(20,c,3))){C_save_and_reclaim((void *)f_4751,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4791,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5052,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5052(t13,t9,t7);}

/* k4109 in k4234 in loop2 in loop in k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,2))){C_save_and_reclaim((void *)f_4111,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:276: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4088(t4,((C_word*)t0)[4],t3);}

/* k5601 in k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5603(C_word c,C_word *av){
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
C_word t21;
C_word *a;
if(!C_demand(C_calculate_demand(27,c,4))){C_save_and_reclaim((void *)f_5603,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[3],lf[10]);
t9=C_i_block_ref(t7,C_fix(2));
t10=C_i_check_structure_2(t7,lf[3],lf[4]);
t11=C_i_block_ref(t7,C_fix(1));
t12=t11;
t13=C_i_check_structure_2(t7,lf[3],lf[39]);
t14=C_i_block_ref(t7,C_fix(3));
t15=t14;
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4038,a[2]=t12,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t17=C_eqp(C_SCHEME_TRUE,t9);
if(C_truep(t17)){
t18=t6;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t18;
av2[1]=C_SCHEME_END_OF_LIST;
f_5638(2,av2);}}
else{
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4061,a[2]=t19,a[3]=t16,a[4]=t15,a[5]=t12,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_4061(t21,t6,t9);}}

/* k5598 in k5592 in k5438 in k5435 in k5432 in finalize-module in k2962 in k2958 */
static void C_ccall f_5600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(!C_demand(C_calculate_demand(7,c,3))){C_save_and_reclaim((void *)f_5600,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:522: ##sys#error */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[96];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2;
if(c >= 2) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(2);
}
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5603(2,av2);}}}

/* k4319 in k4315 in compiled-module-registration in k2962 in k2958 */
static void C_ccall f_4321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(!C_demand(C_calculate_demand(0,c,3))){C_save_and_reclaim((void *)f_4321,2,av);}
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[466] = {
{"f_4741:modules_2escm",(void*)f_4741},
{"f_5594:modules_2escm",(void*)f_5594},
{"f_4329:modules_2escm",(void*)f_4329},
{"f_3805:modules_2escm",(void*)f_3805},
{"f_4325:modules_2escm",(void*)f_4325},
{"f_4125:modules_2escm",(void*)f_4125},
{"f_4150:modules_2escm",(void*)f_4150},
{"f_7236:modules_2escm",(void*)f_7236},
{"f_7232:modules_2escm",(void*)f_7232},
{"f_5178:modules_2escm",(void*)f_5178},
{"f_5174:modules_2escm",(void*)f_5174},
{"f_3812:modules_2escm",(void*)f_3812},
{"f_3819:modules_2escm",(void*)f_3819},
{"f_4183:modules_2escm",(void*)f_4183},
{"f_4716:modules_2escm",(void*)f_4716},
{"f_7243:modules_2escm",(void*)f_7243},
{"f_7240:modules_2escm",(void*)f_7240},
{"f_7099:modules_2escm",(void*)f_7099},
{"f_7098:modules_2escm",(void*)f_7098},
{"f_7095:modules_2escm",(void*)f_7095},
{"f_7249:modules_2escm",(void*)f_7249},
{"f_7215:modules_2escm",(void*)f_7215},
{"f_7218:modules_2escm",(void*)f_7218},
{"f_4165:modules_2escm",(void*)f_4165},
{"f_7022:modules_2escm",(void*)f_7022},
{"f_7228:modules_2escm",(void*)f_7228},
{"f_7221:modules_2escm",(void*)f_7221},
{"f_5182:modules_2escm",(void*)f_5182},
{"f_4194:modules_2escm",(void*)f_4194},
{"f_4939:modules_2escm",(void*)f_4939},
{"f_7276:modules_2escm",(void*)f_7276},
{"f_5242:modules_2escm",(void*)f_5242},
{"f_5244:modules_2escm",(void*)f_5244},
{"f_5139:modules_2escm",(void*)f_5139},
{"f_5220:modules_2escm",(void*)f_5220},
{"f_5130:modules_2escm",(void*)f_5130},
{"f_4931:modules_2escm",(void*)f_4931},
{"f_4935:modules_2escm",(void*)f_4935},
{"f_6507:modules_2escm",(void*)f_6507},
{"f_7287:modules_2escm",(void*)f_7287},
{"f_5126:modules_2escm",(void*)f_5126},
{"f_6512:modules_2escm",(void*)f_6512},
{"f_5152:modules_2escm",(void*)f_5152},
{"f_5158:modules_2escm",(void*)f_5158},
{"f_4912:modules_2escm",(void*)f_4912},
{"f_4915:modules_2escm",(void*)f_4915},
{"f_5638:modules_2escm",(void*)f_5638},
{"f_7060:modules_2escm",(void*)f_7060},
{"f_5631:modules_2escm",(void*)f_5631},
{"f_6524:modules_2escm",(void*)f_6524},
{"f_5145:modules_2escm",(void*)f_5145},
{"f_4941:modules_2escm",(void*)f_4941},
{"f_5644:modules_2escm",(void*)f_5644},
{"f_5647:modules_2escm",(void*)f_5647},
{"f_6532:modules_2escm",(void*)f_6532},
{"f_7400:modules_2escm",(void*)f_7400},
{"f_4974:modules_2escm",(void*)f_4974},
{"f_7047:modules_2escm",(void*)f_7047},
{"f_4377:modules_2escm",(void*)f_4377},
{"f_5655:modules_2escm",(void*)f_5655},
{"f_5651:modules_2escm",(void*)f_5651},
{"f_5650:modules_2escm",(void*)f_5650},
{"f_7434:modules_2escm",(void*)f_7434},
{"f_6542:modules_2escm",(void*)f_6542},
{"f_4137:modules_2escm",(void*)f_4137},
{"f_5278:modules_2escm",(void*)f_5278},
{"f_7013:modules_2escm",(void*)f_7013},
{"f_4133:modules_2escm",(void*)f_4133},
{"f_6555:modules_2escm",(void*)f_6555},
{"f_5269:modules_2escm",(void*)f_5269},
{"f_4951:modules_2escm",(void*)f_4951},
{"f_7614:modules_2escm",(void*)f_7614},
{"f_7610:modules_2escm",(void*)f_7610},
{"f_4987:modules_2escm",(void*)f_4987},
{"f_6565:modules_2escm",(void*)f_6565},
{"f_3591:modules_2escm",(void*)f_3591},
{"f_7621:modules_2escm",(void*)f_7621},
{"f_6328:modules_2escm",(void*)f_6328},
{"f_6325:modules_2escm",(void*)f_6325},
{"f_3584:modules_2escm",(void*)f_3584},
{"f_3582:modules_2escm",(void*)f_3582},
{"f_3587:modules_2escm",(void*)f_3587},
{"f_4964:modules_2escm",(void*)f_4964},
{"f_7603:modules_2escm",(void*)f_7603},
{"f_7606:modules_2escm",(void*)f_7606},
{"f_4997:modules_2escm",(void*)f_4997},
{"f_6318:modules_2escm",(void*)f_6318},
{"f_5580:modules_2escm",(void*)f_5580},
{"f_6383:modules_2escm",(void*)f_6383},
{"f_5570:modules_2escm",(void*)f_5570},
{"f_8364:modules_2escm",(void*)f_8364},
{"f_6342:modules_2escm",(void*)f_6342},
{"f_6360:modules_2escm",(void*)f_6360},
{"f_6337:modules_2escm",(void*)f_6337},
{"f8830:modules_2escm",(void*)f8830},
{"f_8323:modules_2escm",(void*)f_8323},
{"f_8320:modules_2escm",(void*)f_8320},
{"f_6308:modules_2escm",(void*)f_6308},
{"f_6947:modules_2escm",(void*)f_6947},
{"f_6941:modules_2escm",(void*)f_6941},
{"f_8317:modules_2escm",(void*)f_8317},
{"f_7926:modules_2escm",(void*)f_7926},
{"f_8332:modules_2escm",(void*)f_8332},
{"f_6350:modules_2escm",(void*)f_6350},
{"f_6955:modules_2escm",(void*)f_6955},
{"f_6951:modules_2escm",(void*)f_6951},
{"f_8329:modules_2escm",(void*)f_8329},
{"f_8326:modules_2escm",(void*)f_8326},
{"f_8344:modules_2escm",(void*)f_8344},
{"f_8337:modules_2escm",(void*)f_8337},
{"f_8335:modules_2escm",(void*)f_8335},
{"f_3204:modules_2escm",(void*)f_3204},
{"f_3717:modules_2escm",(void*)f_3717},
{"f_6583:modules_2escm",(void*)f_6583},
{"f_3704:modules_2escm",(void*)f_3704},
{"f_7957:modules_2escm",(void*)f_7957},
{"f_3700:modules_2escm",(void*)f_3700},
{"f_7950:modules_2escm",(void*)f_7950},
{"f_6595:modules_2escm",(void*)f_6595},
{"f_6986:modules_2escm",(void*)f_6986},
{"f_6988:modules_2escm",(void*)f_6988},
{"f_3779:modules_2escm",(void*)f_3779},
{"f_7967:modules_2escm",(void*)f_7967},
{"f_8302:modules_2escm",(void*)f_8302},
{"f_5318:modules_2escm",(void*)f_5318},
{"f_3959:modules_2escm",(void*)f_3959},
{"f_7942:modules_2escm",(void*)f_7942},
{"f_6933:modules_2escm",(void*)f_6933},
{"f_4614:modules_2escm",(void*)f_4614},
{"f_5329:modules_2escm",(void*)f_5329},
{"f_3266:modules_2escm",(void*)f_3266},
{"f_4616:modules_2escm",(void*)f_4616},
{"f_3263:modules_2escm",(void*)f_3263},
{"f_3736:modules_2escm",(void*)f_3736},
{"f_3739:modules_2escm",(void*)f_3739},
{"f8869:modules_2escm",(void*)f8869},
{"f_3730:modules_2escm",(void*)f_3730},
{"f_3923:modules_2escm",(void*)f_3923},
{"f_3727:modules_2escm",(void*)f_3727},
{"f8856:modules_2escm",(void*)f8856},
{"f_5963:modules_2escm",(void*)f_5963},
{"f_3914:modules_2escm",(void*)f_3914},
{"f8884:modules_2escm",(void*)f8884},
{"f_5976:modules_2escm",(void*)f_5976},
{"f_6976:modules_2escm",(void*)f_6976},
{"f_6726:modules_2escm",(void*)f_6726},
{"f_4662:modules_2escm",(void*)f_4662},
{"f_6373:modules_2escm",(void*)f_6373},
{"f_5906:modules_2escm",(void*)f_5906},
{"f_6739:modules_2escm",(void*)f_6739},
{"f_3228:modules_2escm",(void*)f_3228},
{"f_4641:modules_2escm",(void*)f_4641},
{"f_6745:modules_2escm",(void*)f_6745},
{"f_3689:modules_2escm",(void*)f_3689},
{"f_3255:modules_2escm",(void*)f_3255},
{"f_3259:modules_2escm",(void*)f_3259},
{"f_3250:modules_2escm",(void*)f_3250},
{"f_6928:modules_2escm",(void*)f_6928},
{"f_6758:modules_2escm",(void*)f_6758},
{"f_6925:modules_2escm",(void*)f_6925},
{"f_3244:modules_2escm",(void*)f_3244},
{"f_3246:modules_2escm",(void*)f_3246},
{"f_5739:modules_2escm",(void*)f_5739},
{"f_5939:modules_2escm",(void*)f_5939},
{"f_3278:modules_2escm",(void*)f_3278},
{"f_3272:modules_2escm",(void*)f_3272},
{"f_5745:modules_2escm",(void*)f_5745},
{"f_5743:modules_2escm",(void*)f_5743},
{"f_3745:modules_2escm",(void*)f_3745},
{"f_8184:modules_2escm",(void*)f_8184},
{"f_5331:modules_2escm",(void*)f_5331},
{"f_6706:modules_2escm",(void*)f_6706},
{"f_6701:modules_2escm",(void*)f_6701},
{"f_6718:modules_2escm",(void*)f_6718},
{"f_5359:modules_2escm",(void*)f_5359},
{"f_7474:modules_2escm",(void*)f_7474},
{"f_8171:modules_2escm",(void*)f_8171},
{"f_5704:modules_2escm",(void*)f_5704},
{"f_8148:modules_2escm",(void*)f_8148},
{"f_5708:modules_2escm",(void*)f_5708},
{"f_5700:modules_2escm",(void*)f_5700},
{"f_5714:modules_2escm",(void*)f_5714},
{"f_5303:modules_2escm",(void*)f_5303},
{"f_3969:modules_2escm",(void*)f_3969},
{"f_5724:modules_2escm",(void*)f_5724},
{"f_7593:modules_2escm",(void*)f_7593},
{"f_8160:modules_2escm",(void*)f_8160},
{"f_8164:modules_2escm",(void*)f_8164},
{"f_8137:modules_2escm",(void*)f_8137},
{"f_5892:modules_2escm",(void*)f_5892},
{"f_5888:modules_2escm",(void*)f_5888},
{"f_6768:modules_2escm",(void*)f_6768},
{"f_7640:modules_2escm",(void*)f_7640},
{"f_5884:modules_2escm",(void*)f_5884},
{"f_5941:modules_2escm",(void*)f_5941},
{"f_8100:modules_2escm",(void*)f_8100},
{"f_5954:modules_2escm",(void*)f_5954},
{"f_7585:modules_2escm",(void*)f_7585},
{"f_6781:modules_2escm",(void*)f_6781},
{"f_7674:modules_2escm",(void*)f_7674},
{"f_5770:modules_2escm",(void*)f_5770},
{"f_6130:modules_2escm",(void*)f_6130},
{"f_6147:modules_2escm",(void*)f_6147},
{"f_6140:modules_2escm",(void*)f_6140},
{"f_4409:modules_2escm",(void*)f_4409},
{"f_6144:modules_2escm",(void*)f_6144},
{"f_6157:modules_2escm",(void*)f_6157},
{"f_6151:modules_2escm",(void*)f_6151},
{"f_6154:modules_2escm",(void*)f_6154},
{"f_6001:modules_2escm",(void*)f_6001},
{"f_6011:modules_2escm",(void*)f_6011},
{"f_6018:modules_2escm",(void*)f_6018},
{"f_6015:modules_2escm",(void*)f_6015},
{"f_3309:modules_2escm",(void*)f_3309},
{"f_3305:modules_2escm",(void*)f_3305},
{"f_4213:modules_2escm",(void*)f_4213},
{"f_7991:modules_2escm",(void*)f_7991},
{"f_6184:modules_2escm",(void*)f_6184},
{"f_3693:modules_2escm",(void*)f_3693},
{"f_3520:modules_2escm",(void*)f_3520},
{"f_5209:modules_2escm",(void*)f_5209},
{"f_6197:modules_2escm",(void*)f_6197},
{"f_2960:modules_2escm",(void*)f_2960},
{"f_2964:modules_2escm",(void*)f_2964},
{"f_4684:modules_2escm",(void*)f_4684},
{"f_4686:modules_2escm",(void*)f_4686},
{"f_5215:modules_2escm",(void*)f_5215},
{"f_3511:modules_2escm",(void*)f_3511},
{"f_3512:modules_2escm",(void*)f_3512},
{"f_6127:modules_2escm",(void*)f_6127},
{"f_7366:modules_2escm",(void*)f_7366},
{"f_6120:modules_2escm",(void*)f_6120},
{"f_6124:modules_2escm",(void*)f_6124},
{"f_7989:modules_2escm",(void*)f_7989},
{"f_4458:modules_2escm",(void*)f_4458},
{"f_4899:modules_2escm",(void*)f_4899},
{"f_5506:modules_2escm",(void*)f_5506},
{"f_5505:modules_2escm",(void*)f_5505},
{"f_5502:modules_2escm",(void*)f_5502},
{"f_4257:modules_2escm",(void*)f_4257},
{"f_4886:modules_2escm",(void*)f_4886},
{"f_4887:modules_2escm",(void*)f_4887},
{"f_2978:modules_2escm",(void*)f_2978},
{"f_4242:modules_2escm",(void*)f_4242},
{"f_4246:modules_2escm",(void*)f_4246},
{"f_4434:modules_2escm",(void*)f_4434},
{"f_7391:modules_2escm",(void*)f_7391},
{"f_7398:modules_2escm",(void*)f_7398},
{"f_5525:modules_2escm",(void*)f_5525},
{"f_4236:modules_2escm",(void*)f_4236},
{"f_6165:modules_2escm",(void*)f_6165},
{"f_6163:modules_2escm",(void*)f_6163},
{"f_6160:modules_2escm",(void*)f_6160},
{"f_3359:modules_2escm",(void*)f_3359},
{"f_6083:modules_2escm",(void*)f_6083},
{"f_6080:modules_2escm",(void*)f_6080},
{"f_3351:modules_2escm",(void*)f_3351},
{"f_4869:modules_2escm",(void*)f_4869},
{"f_7173:modules_2escm",(void*)f_7173},
{"f_7172:modules_2escm",(void*)f_7172},
{"f_4419:modules_2escm",(void*)f_4419},
{"f_4853:modules_2escm",(void*)f_4853},
{"f_4852:modules_2escm",(void*)f_4852},
{"f_6098:modules_2escm",(void*)f_6098},
{"f_4294:modules_2escm",(void*)f_4294},
{"f_5086:modules_2escm",(void*)f_5086},
{"f_3534:modules_2escm",(void*)f_3534},
{"f_3537:modules_2escm",(void*)f_3537},
{"f_6067:modules_2escm",(void*)f_6067},
{"f_4284:modules_2escm",(void*)f_4284},
{"f_6063:modules_2escm",(void*)f_6063},
{"f_6109:modules_2escm",(void*)f_6109},
{"f_6104:modules_2escm",(void*)f_6104},
{"f_5077:modules_2escm",(void*)f_5077},
{"f_5483:modules_2escm",(void*)f_5483},
{"f_6077:modules_2escm",(void*)f_6077},
{"f_6071:modules_2escm",(void*)f_6071},
{"f_6074:modules_2escm",(void*)f_6074},
{"f_6115:modules_2escm",(void*)f_6115},
{"f_4839:modules_2escm",(void*)f_4839},
{"f_6204:modules_2escm",(void*)f_6204},
{"f_6049:modules_2escm",(void*)f_6049},
{"f_6046:modules_2escm",(void*)f_6046},
{"f_3311:modules_2escm",(void*)f_3311},
{"f_4823:modules_2escm",(void*)f_4823},
{"f_6040:modules_2escm",(void*)f_6040},
{"f_6042:modules_2escm",(void*)f_6042},
{"f_4826:modules_2escm",(void*)f_4826},
{"f_4827:modules_2escm",(void*)f_4827},
{"f_5052:modules_2escm",(void*)f_5052},
{"f_6295:modules_2escm",(void*)f_6295},
{"f_6291:modules_2escm",(void*)f_6291},
{"f_6059:modules_2escm",(void*)f_6059},
{"f_3345:modules_2escm",(void*)f_3345},
{"f_7330:modules_2escm",(void*)f_7330},
{"f_6055:modules_2escm",(void*)f_6055},
{"f_6052:modules_2escm",(void*)f_6052},
{"f_4817:modules_2escm",(void*)f_4817},
{"f_5043:modules_2escm",(void*)f_5043},
{"f_6021:modules_2escm",(void*)f_6021},
{"f_6024:modules_2escm",(void*)f_6024},
{"f_5557:modules_2escm",(void*)f_5557},
{"f_5558:modules_2escm",(void*)f_5558},
{"f_4807:modules_2escm",(void*)f_4807},
{"f_7115:modules_2escm",(void*)f_7115},
{"f_7111:modules_2escm",(void*)f_7111},
{"f_6271:modules_2escm",(void*)f_6271},
{"f_6036:modules_2escm",(void*)f_6036},
{"f_6030:modules_2escm",(void*)f_6030},
{"f_6033:modules_2escm",(void*)f_6033},
{"f_7127:modules_2escm",(void*)f_7127},
{"f_7128:modules_2escm",(void*)f_7128},
{"f_3554:modules_2escm",(void*)f_3554},
{"f_5016:modules_2escm",(void*)f_5016},
{"f_5012:modules_2escm",(void*)f_5012},
{"f_5018:modules_2escm",(void*)f_5018},
{"f_4226:modules_2escm",(void*)f_4226},
{"f_3544:modules_2escm",(void*)f_3544},
{"f_3548:modules_2escm",(void*)f_3548},
{"f_6250:modules_2escm",(void*)f_6250},
{"f_6252:modules_2escm",(void*)f_6252},
{"f_7377:modules_2escm",(void*)f_7377},
{"f_3059:modules_2escm",(void*)f_3059},
{"f_3489:modules_2escm",(void*)f_3489},
{"f_6227:modules_2escm",(void*)f_6227},
{"f_7528:modules_2escm",(void*)f_7528},
{"f_7105:modules_2escm",(void*)f_7105},
{"f_5513:modules_2escm",(void*)f_5513},
{"f_5510:modules_2escm",(void*)f_5510},
{"f_3477:modules_2escm",(void*)f_3477},
{"f_4476:modules_2escm",(void*)f_4476},
{"f_4474:modules_2escm",(void*)f_4474},
{"f_7730:modules_2escm",(void*)f_7730},
{"f_6231:modules_2escm",(void*)f_6231},
{"f_5562:modules_2escm",(void*)f_5562},
{"f_7708:modules_2escm",(void*)f_7708},
{"f_7166:modules_2escm",(void*)f_7166},
{"f_6287:modules_2escm",(void*)f_6287},
{"f_6280:modules_2escm",(void*)f_6280},
{"f_5535:modules_2escm",(void*)f_5535},
{"f_3493:modules_2escm",(void*)f_3493},
{"f_3495:modules_2escm",(void*)f_3495},
{"f_7713:modules_2escm",(void*)f_7713},
{"f_7711:modules_2escm",(void*)f_7711},
{"f_3068:modules_2escm",(void*)f_3068},
{"f_6423:modules_2escm",(void*)f_6423},
{"f_6401:modules_2escm",(void*)f_6401},
{"f_5696:modules_2escm",(void*)f_5696},
{"f_5495:modules_2escm",(void*)f_5495},
{"f_5492:modules_2escm",(void*)f_5492},
{"f_5685:modules_2escm",(void*)f_5685},
{"f_5682:modules_2escm",(void*)f_5682},
{"f_5673:modules_2escm",(void*)f_5673},
{"f_5476:modules_2escm",(void*)f_5476},
{"f_5679:modules_2escm",(void*)f_5679},
{"f_6698:modules_2escm",(void*)f_6698},
{"toplevel:modules_2escm",(void*)C_modules_toplevel},
{"f_6457:modules_2escm",(void*)f_6457},
{"f_5425:modules_2escm",(void*)f_5425},
{"f_6660:modules_2escm",(void*)f_6660},
{"f_6636:modules_2escm",(void*)f_6636},
{"f_3628:modules_2escm",(void*)f_3628},
{"f_3614:modules_2escm",(void*)f_3614},
{"f_7829:modules_2escm",(void*)f_7829},
{"f_4501:modules_2escm",(void*)f_4501},
{"f_6624:modules_2escm",(void*)f_6624},
{"f_7803:modules_2escm",(void*)f_7803},
{"f_8051:modules_2escm",(void*)f_8051},
{"f_4565:modules_2escm",(void*)f_4565},
{"f_4563:modules_2escm",(void*)f_4563},
{"f_8063:modules_2escm",(void*)f_8063},
{"f_8030:modules_2escm",(void*)f_8030},
{"f_7843:modules_2escm",(void*)f_7843},
{"f_6482:modules_2escm",(void*)f_6482},
{"f_5440:modules_2escm",(void*)f_5440},
{"f_5441:modules_2escm",(void*)f_5441},
{"f_3641:modules_2escm",(void*)f_3641},
{"f_5844:modules_2escm",(void*)f_5844},
{"f_5840:modules_2escm",(void*)f_5840},
{"f_7572:modules_2escm",(void*)f_7572},
{"f_6498:modules_2escm",(void*)f_6498},
{"f_6495:modules_2escm",(void*)f_6495},
{"f_5856:modules_2escm",(void*)f_5856},
{"f_5853:modules_2escm",(void*)f_5853},
{"f_6820:modules_2escm",(void*)f_6820},
{"f_7507:modules_2escm",(void*)f_7507},
{"f_5465:modules_2escm",(void*)f_5465},
{"f_5462:modules_2escm",(void*)f_5462},
{"f_5468:modules_2escm",(void*)f_5468},
{"f_3644:modules_2escm",(void*)f_3644},
{"f_6836:modules_2escm",(void*)f_6836},
{"f_7484:modules_2escm",(void*)f_7484},
{"f_8085:modules_2escm",(void*)f_8085},
{"f_5434:modules_2escm",(void*)f_5434},
{"f_5437:modules_2escm",(void*)f_5437},
{"f_8089:modules_2escm",(void*)f_8089},
{"f_3638:modules_2escm",(void*)f_3638},
{"f_3650:modules_2escm",(void*)f_3650},
{"f_7497:modules_2escm",(void*)f_7497},
{"f_7562:modules_2escm",(void*)f_7562},
{"f_7560:modules_2escm",(void*)f_7560},
{"f_6685:modules_2escm",(void*)f_6685},
{"f_5809:modules_2escm",(void*)f_5809},
{"f_7771:modules_2escm",(void*)f_7771},
{"f_5455:modules_2escm",(void*)f_5455},
{"f_5459:modules_2escm",(void*)f_5459},
{"f_8292:modules_2escm",(void*)f_8292},
{"f_3653:modules_2escm",(void*)f_3653},
{"f_3656:modules_2escm",(void*)f_3656},
{"f_7543:modules_2escm",(void*)f_7543},
{"f_3607:modules_2escm",(void*)f_3607},
{"f_3798:modules_2escm",(void*)f_3798},
{"f_7209:modules_2escm",(void*)f_7209},
{"f_7724:modules_2escm",(void*)f_7724},
{"f_4038:modules_2escm",(void*)f_4038},
{"f_7721:modules_2escm",(void*)f_7721},
{"f_3783:modules_2escm",(void*)f_3783},
{"f_8283:modules_2escm",(void*)f_8283},
{"f_4317:modules_2escm",(void*)f_4317},
{"f_8250:modules_2escm",(void*)f_8250},
{"f_8256:modules_2escm",(void*)f_8256},
{"f_8258:modules_2escm",(void*)f_8258},
{"f_5868:modules_2escm",(void*)f_5868},
{"f_4088:modules_2escm",(void*)f_4088},
{"f_3442:modules_2escm",(void*)f_3442},
{"f_3449:modules_2escm",(void*)f_3449},
{"f_6889:modules_2escm",(void*)f_6889},
{"f_5792:modules_2escm",(void*)f_5792},
{"f_8211:modules_2escm",(void*)f_8211},
{"f_4050:modules_2escm",(void*)f_4050},
{"f_3464:modules_2escm",(void*)f_3464},
{"f_3864:modules_2escm",(void*)f_3864},
{"f_5782:modules_2escm",(void*)f_5782},
{"f_8224:modules_2escm",(void*)f_8224},
{"f_3452:modules_2escm",(void*)f_3452},
{"f_3455:modules_2escm",(void*)f_3455},
{"f_8228:modules_2escm",(void*)f_8228},
{"f_3458:modules_2escm",(void*)f_3458},
{"f_5396:modules_2escm",(void*)f_5396},
{"f_4046:modules_2escm",(void*)f_4046},
{"f_6873:modules_2escm",(void*)f_6873},
{"f_7252:modules_2escm",(void*)f_7252},
{"f_7259:modules_2escm",(void*)f_7259},
{"f_4590:modules_2escm",(void*)f_4590},
{"f_7269:modules_2escm",(void*)f_7269},
{"f_3386:modules_2escm",(void*)f_3386},
{"f_7870:modules_2escm",(void*)f_7870},
{"f_5111:modules_2escm",(void*)f_5111},
{"f_3388:modules_2escm",(void*)f_3388},
{"f_4791:modules_2escm",(void*)f_4791},
{"f_7884:modules_2escm",(void*)f_7884},
{"f_4361:modules_2escm",(void*)f_4361},
{"f_4365:modules_2escm",(void*)f_4365},
{"f_8232:modules_2escm",(void*)f_8232},
{"f_8236:modules_2escm",(void*)f_8236},
{"f_4061:modules_2escm",(void*)f_4061},
{"f_7294:modules_2escm",(void*)f_7294},
{"f_7296:modules_2escm",(void*)f_7296},
{"f_4775:modules_2escm",(void*)f_4775},
{"f_4333:modules_2escm",(void*)f_4333},
{"f_4751:modules_2escm",(void*)f_4751},
{"f_4111:modules_2escm",(void*)f_4111},
{"f_5603:modules_2escm",(void*)f_5603},
{"f_5600:modules_2escm",(void*)f_5600},
{"f_4321:modules_2escm",(void*)f_4321},
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
S|applied compiler syntax:
S|  for-each		16
S|  map		22
o|eliminated procedure checks: 333 
o|specializations:
o|  2 (cddr (pair * pair))
o|  1 (< fixnum fixnum)
o|  2 (string-append string string)
o|  1 (= fixnum fixnum)
o|  6 (##sys#check-list (or pair list) *)
o|  2 (cdar (pair pair *))
o|  1 (caar (pair pair *))
o|  28 (car pair)
o|  47 (cdr pair)
(o e)|safe calls: 728 
o|safe globals: (lookup) 
o|Removed `not' forms: 7 
o|removed side-effect free assignment to unused variable: module? 
o|contracted procedure: "(modules.scm:118) %make-module" 
o|inlining procedure: k3313 
o|contracted procedure: "(modules.scm:127) g406415" 
o|inlining procedure: k3313 
o|inlining procedure: k3364 
o|inlining procedure: k3364 
o|inlining procedure: k3356 
o|inlining procedure: k3356 
o|inlining procedure: k3405 
o|inlining procedure: k3405 
o|inlining procedure: k3456 
o|inlining procedure: k3456 
o|inlining procedure: k3517 
o|inlining procedure: k3517 
o|inlining procedure: k3500 
o|inlining procedure: k3556 
o|inlining procedure: k3556 
o|inlining procedure: k3500 
o|inlining procedure: k3592 
o|contracted procedure: "(modules.scm:181) set-module-meta-expressions!" 
o|inlining procedure: k3592 
o|inlining procedure: k3618 
o|inlining procedure: k3618 
o|inlining procedure: k3630 
o|inlining procedure: k3630 
o|inlining procedure: k3719 
o|contracted procedure: "(modules.scm:223) set-module-defined-syntax-list!" 
o|inlining procedure: k3719 
o|inlining procedure: k3800 
o|inlining procedure: k3814 
o|inlining procedure: k3814 
o|inlining procedure: k3857 
o|inlining procedure: k3857 
o|inlining procedure: k3800 
o|inlining procedure: k3961 
o|contracted procedure: "(modules.scm:244) g611618" 
o|inlining procedure: k3918 
o|contracted procedure: "(modules.scm:249) g624625" 
o|inlining procedure: k3918 
o|inlining procedure: k3961 
o|merged explicitly consed rest parameter: ses689 
o|inlining procedure: k4259 
o|inlining procedure: k4259 
o|inlining procedure: k4363 
o|inlining procedure: k4363 
o|inlining procedure: k4379 
o|inlining procedure: k4379 
o|inlining procedure: k4442 
o|inlining procedure: k4442 
o|inlining procedure: k4478 
o|inlining procedure: k4478 
o|inlining procedure: k4567 
o|contracted procedure: "(modules.scm:318) g755764" 
o|inlining procedure: k4519 
o|inlining procedure: k4519 
o|inlining procedure: k4567 
o|inlining procedure: k4618 
o|inlining procedure: k4618 
o|inlining procedure: k4722 
o|contracted procedure: "(modules.scm:357) find-reexport849" 
o|inlining procedure: k4697 
o|inlining procedure: k4697 
o|inlining procedure: k4722 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4844 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4844 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4855 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4874 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4874 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4855 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|inlining procedure: k4904 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|inlining procedure: k4904 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:391) merge-se" 1 
o|inlining procedure: k4943 
o|inlining procedure: k4943 
o|inlining procedure: k4966 
o|inlining procedure: k4966 
o|inlining procedure: k4989 
o|inlining procedure: k4989 
o|consed rest parameter at call site: "(modules.scm:371) merge-se" 1 
o|inlining procedure: k5020 
o|contracted procedure: "(modules.scm:367) g918927" 
o|inlining procedure: k5020 
o|inlining procedure: k5054 
o|contracted procedure: "(modules.scm:361) g890899" 
o|inlining procedure: k4757 
o|inlining procedure: k4757 
o|inlining procedure: k5054 
o|inlining procedure: k5088 
o|inlining procedure: k5088 
o|contracted procedure: "(modules.scm:400) g10121013" 
o|consed rest parameter at call site: "(modules.scm:423) merge-se" 1 
o|inlining procedure: k5222 
o|inlining procedure: k5222 
o|inlining procedure: k5246 
o|inlining procedure: k5246 
o|inlining procedure: k5280 
o|contracted procedure: "(modules.scm:407) g10421051" 
o|inlining procedure: k5197 
o|inlining procedure: k5197 
o|inlining procedure: k5280 
o|inlining procedure: k5333 
o|inlining procedure: k5333 
o|inlining procedure: k5345 
o|inlining procedure: k5360 
o|inlining procedure: k5360 
o|inlining procedure: k5345 
o|inlining procedure: k5447 
o|inlining procedure: k5447 
o|inlining procedure: k5484 
o|inlining procedure: k5484 
o|inlining procedure: k5527 
o|inlining procedure: k5527 
o|substituted constant variable: a5547 
o|contracted procedure: "(modules.scm:506) g12161217" 
o|inlining procedure: k5572 
o|inlining procedure: k5572 
o|consed rest parameter at call site: "(modules.scm:536) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:554) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:551) merge-se" 1 
o|contracted procedure: "(modules.scm:547) set-module-vexports!" 
o|inlining procedure: k5716 
o|inlining procedure: k5716 
o|consed rest parameter at call site: "(modules.scm:529) merge-se" 1 
o|inlining procedure: k5747 
o|contracted procedure: "(modules.scm:524) g12671276" 
o|inlining procedure: k5609 
o|inlining procedure: k5609 
o|inlining procedure: k5747 
o|contracted procedure: "(modules.scm:528) module-indirect-exports" 
o|removed side-effect free assignment to unused variable: indirect?640 
o|inlining procedure: k4051 
o|inlining procedure: k4051 
o|inlining procedure: k4063 
o|inlining procedure: k4063 
o|inlining procedure: k4090 
o|inlining procedure: k4090 
o|inlining procedure: k4148 
o|inlining procedure: k4148 
o|inlining procedure: k4122 
o|inlining procedure: k4122 
o|inlining procedure: k4167 
o|inlining procedure: k4167 
o|inlining procedure: k5784 
o|inlining procedure: k5784 
o|inlining procedure: k5811 
o|inlining procedure: k5811 
o|inlining procedure: k5851 
o|inlining procedure: k5851 
o|contracted procedure: k5878 
o|inlining procedure: k5875 
o|inlining procedure: k5875 
o|consed rest parameter at call site: "(modules.scm:454) merge-se" 1 
o|inlining procedure: k5943 
o|inlining procedure: k5943 
o|inlining procedure: k5978 
o|contracted procedure: "(modules.scm:450) g11331142" 
o|inlining procedure: k5978 
o|inlining procedure: k6019 
o|inlining procedure: k6019 
o|substituted constant variable: a6145 
o|inlining procedure: k6170 
o|inlining procedure: k6170 
o|contracted procedure: "(modules.scm:591) lookup" 
o|inlining procedure: k2943 
o|inlining procedure: k2943 
o|contracted procedure: "(modules.scm:60) g229230" 
o|inlining procedure: k6186 
o|inlining procedure: k6186 
o|inlining procedure: k6205 
o|inlining procedure: k6205 
o|inlining procedure: k6254 
o|inlining procedure: k6254 
o|inlining procedure: k6275 
o|inlining procedure: k6275 
o|inlining procedure: k6320 
o|inlining procedure: k6344 
o|inlining procedure: k6375 
o|inlining procedure: k6375 
o|inlining procedure: k6344 
o|inlining procedure: k6420 
o|inlining procedure: k6420 
o|inlining procedure: k6459 
o|inlining procedure: k6459 
o|inlining procedure: k6320 
o|inlining procedure: k6514 
o|inlining procedure: k6526 
o|inlining procedure: k6557 
o|inlining procedure: k6557 
o|inlining procedure: k6526 
o|inlining procedure: k6514 
o|inlining procedure: k6662 
o|inlining procedure: k6662 
o|inlining procedure: k6693 
o|inlining procedure: k6708 
o|inlining procedure: k6720 
o|inlining procedure: k6760 
o|inlining procedure: k6760 
o|inlining procedure: k6783 
o|inlining procedure: k6783 
o|inlining procedure: k6720 
o|inlining procedure: k6708 
o|inlining procedure: k6693 
o|inlining procedure: k6990 
o|inlining procedure: k6990 
o|inlining procedure: k7024 
o|inlining procedure: k7024 
o|inlining procedure: k7061 
o|inlining procedure: k7061 
o|substituted constant variable: a7088 
o|inlining procedure: k7133 
o|inlining procedure: k7143 
o|contracted procedure: k7149 
o|inlining procedure: k7143 
o|inlining procedure: k7133 
o|inlining procedure: k7178 
o|contracted procedure: k7184 
o|inlining procedure: k7178 
o|consed rest parameter at call site: "(modules.scm:746) merge-se" 1 
o|inlining procedure: k7298 
o|inlining procedure: k7298 
o|inlining procedure: k7332 
o|inlining procedure: k7332 
o|inlining procedure: k7402 
o|inlining procedure: k7402 
o|inlining procedure: k7436 
o|inlining procedure: k7436 
o|inlining procedure: k7476 
o|inlining procedure: k7476 
o|inlining procedure: k7499 
o|inlining procedure: k7499 
o|inlining procedure: k7519 
o|contracted procedure: "(modules.scm:701) set-module-meta-import-forms!" 
o|inlining procedure: k7519 
o|contracted procedure: "(modules.scm:704) set-module-import-forms!" 
o|inlining procedure: k7564 
o|inlining procedure: k7564 
o|inlining procedure: k7611 
o|inlining procedure: k7611 
o|inlining procedure: k7635 
o|inlining procedure: k7635 
o|contracted procedure: "(modules.scm:760) g20062007" 
o|inlining procedure: k7657 
o|inlining procedure: k7657 
o|inlining procedure: k7682 
o|inlining procedure: k7682 
o|contracted procedure: "(modules.scm:783) g20312032" 
o|contracted procedure: "(modules.scm:774) g20122013" 
o|contracted procedure: "(modules.scm:770) g20022003" 
o|contracted procedure: "(modules.scm:788) g20402041" 
o|merged explicitly consed rest parameter: args2054 
o|inlining procedure: k7737 
o|inlining procedure: k7737 
o|consed rest parameter at call site: "(modules.scm:796) err2052" 1 
o|contracted procedure: "(modules.scm:795) g20592060" 
o|inlining procedure: k7743 
o|inlining procedure: k7743 
o|contracted procedure: k7761 
o|inlining procedure: k7758 
o|inlining procedure: k7773 
o|inlining procedure: k7773 
o|contracted procedure: k7782 
o|inlining procedure: k7791 
o|inlining procedure: k7791 
o|contracted procedure: k7809 
o|inlining procedure: k7815 
o|inlining procedure: k7815 
o|inlining procedure: k7838 
o|inlining procedure: k7838 
o|consed rest parameter at call site: "(modules.scm:816) err2052" 1 
o|inlining procedure: k7872 
o|inlining procedure: k7872 
o|consed rest parameter at call site: "(modules.scm:821) err2052" 1 
o|consed rest parameter at call site: "(modules.scm:810) err2052" 1 
o|consed rest parameter at call site: "(modules.scm:805) err2052" 1 
o|inlining procedure: k7758 
o|consed rest parameter at call site: "(modules.scm:800) err2052" 1 
o|contracted procedure: "(modules.scm:824) g20902091" 
o|merged explicitly consed rest parameter: args2105 
o|consed rest parameter at call site: "(modules.scm:835) err2104" 1 
o|inlining procedure: k7993 
o|inlining procedure: k7993 
o|inlining procedure: k8044 
o|inlining procedure: k8044 
o|inlining procedure: k8053 
o|inlining procedure: k8065 
o|inlining procedure: k8065 
o|inlining procedure: k8053 
o|consed rest parameter at call site: "(modules.scm:830) err2104" 1 
o|contracted procedure: "(modules.scm:827) g21002101" 
o|inlining procedure: k8165 
o|inlining procedure: k8176 
o|inlining procedure: k8176 
o|inlining procedure: k8165 
o|inlining procedure: k8260 
o|contracted procedure: "(modules.scm:890) g22032212" 
o|substituted constant variable: a8246 
o|inlining procedure: k8260 
o|inlining procedure: k8294 
o|inlining procedure: k8294 
o|propagated global variable: r4rs-syntax2224 ##sys#default-macro-environment 
o|replaced variables: 849 
o|removed binding forms: 412 
o|substituted constant variable: defined-list246 
o|substituted constant variable: exist-list247 
o|substituted constant variable: defined-syntax-list248 
o|substituted constant variable: undefined-list249 
o|substituted constant variable: import-forms250 
o|substituted constant variable: meta-import-forms251 
o|substituted constant variable: meta-expressions252 
o|substituted constant variable: saved-environments256 
o|substituted constant variable: r35938390 
o|substituted constant variable: r36198392 
o|removed call to pure procedure with unused result: "(modules.scm:202) void" 
o|removed call to pure procedure with unused result: "(modules.scm:217) void" 
o|substituted constant variable: r38588402 
o|substituted constant variable: r38588402 
o|substituted constant variable: prop627 
o|substituted constant variable: val628 
o|removed call to pure procedure with unused result: "(modules.scm:248) void" 
o|removed call to pure procedure with unused result: "(modules.scm:298) void" 
o|substituted constant variable: r42608409 
o|removed call to pure procedure with unused result: "(modules.scm:295) void" 
o|substituted constant variable: r43648411 
o|substituted constant variable: r43648411 
o|substituted constant variable: r43808415 
o|removed call to pure procedure with unused result: "(modules.scm:331) void" 
o|substituted constant variable: r48458433 
o|substituted constant variable: r48458433 
o|substituted constant variable: r48758438 
o|substituted constant variable: r48758438 
o|substituted constant variable: r49058443 
o|substituted constant variable: r49058443 
o|contracted procedure: "(modules.scm:355) g862871" 
o|substituted constant variable: prop1015 
o|substituted constant variable: r53348467 
o|substituted constant variable: prop1219 
o|removed call to pure procedure with unused result: "(modules.scm:535) void" 
o|removed call to pure procedure with unused result: "(modules.scm:540) void" 
o|substituted constant variable: r40528487 
o|substituted constant variable: r40648489 
o|converted assignments to bindings: (warn641) 
o|substituted constant variable: r58128503 
o|removed call to pure procedure with unused result: "(modules.scm:476) void" 
o|inlining procedure: k5851 
o|substituted constant variable: r58768510 
o|substituted constant variable: r59448511 
o|inlining procedure: k6019 
o|substituted constant variable: se219 
o|substituted constant variable: prop232 
o|converted assignments to bindings: (ren1698) 
o|substituted constant variable: r70628564 
o|substituted constant variable: r71448567 
o|substituted constant variable: r71348568 
o|substituted constant variable: r71798570 
o|removed call to pure procedure with unused result: "(modules.scm:747) void" 
o|removed call to pure procedure with unused result: "(modules.scm:709) void" 
o|removed call to pure procedure with unused result: "(modules.scm:708) void" 
o|removed call to pure procedure with unused result: "(modules.scm:707) void" 
o|removed call to pure procedure with unused result: "(modules.scm:763) void" 
o|removed call to pure procedure with unused result: "(modules.scm:771) void" 
o|removed call to pure procedure with unused result: "(modules.scm:775) void" 
o|substituted constant variable: prop2034 
o|removed call to pure procedure with unused result: "(modules.scm:778) void" 
o|substituted constant variable: prop2015 
o|substituted constant variable: prop2005 
o|converted assignments to bindings: (mrename1986) 
o|substituted constant variable: prop2043 
o|substituted constant variable: prop2062 
o|substituted constant variable: r77748600 
o|substituted constant variable: prop2093 
o|substituted constant variable: r80458613 
o|substituted constant variable: r80458613 
o|substituted constant variable: r80668618 
o|converted assignments to bindings: (merr2112) 
o|converted assignments to bindings: (err2104) 
o|substituted constant variable: prop2103 
o|simplifications: ((let . 5)) 
o|replaced variables: 48 
o|removed binding forms: 879 
o|contracted procedure: k3660 
o|contracted procedure: k3740 
o|contracted procedure: k3924 
o|contracted procedure: k4247 
o|contracted procedure: k4253 
o|contracted procedure: k4463 
o|inlining procedure: k5133 
o|inlining procedure: k5474 
o|contracted procedure: k5656 
o|contracted procedure: k5674 
o|contracted procedure: k5869 
o|substituted constant variable: r58528700 
o|inlining procedure: k2951 
o|inlining procedure: "(modules.scm:626) warn1414" 
o|inlining procedure: "(modules.scm:646) warn1414" 
o|inlining procedure: "(modules.scm:667) warn1414" 
o|contracted procedure: k7116 
o|contracted procedure: k7119 
o|contracted procedure: k7122 
o|contracted procedure: k7616 
o|inlining procedure: k7619 
o|contracted procedure: k7651 
o|contracted procedure: k7665 
o|contracted procedure: k7679 
o|inlining procedure: k7693 
o|replaced variables: 12 
o|removed binding forms: 117 
o|inlining procedure: k4700 
o|contracted procedure: k5471 
o|removed side-effect free assignment to unused variable: warn1414 
o|substituted constant variable: msg14228852 
o|substituted constant variable: msg14228865 
o|substituted constant variable: msg14228880 
o|contracted procedure: k7643 
o|contracted procedure: k7662 
o|contracted procedure: k7734 
o|contracted procedure: k7946 
o|simplifications: ((let . 1)) 
o|replaced variables: 9 
o|removed binding forms: 39 
o|inlining procedure: "(modules.scm:240) make-module" 
o|inlining procedure: "(modules.scm:370) make-module" 
o|substituted constant variable: r47018959 
o|inlining procedure: "(modules.scm:405) make-module" 
o|replaced variables: 7 
o|removed binding forms: 14 
o|removed conditional forms: 1 
o|removed side-effect free assignment to unused variable: make-module 
o|substituted constant variable: iexports3809053 
o|substituted constant variable: explist3779074 
o|substituted constant variable: explist3779086 
o|substituted constant variable: iexports3809089 
o|inlining procedure: k6167 
o|inlining procedure: k6167 
o|replaced variables: 10 
o|removed binding forms: 5 
o|substituted constant variable: r61689229 
o|substituted constant variable: r61689229 
o|substituted constant variable: r61689229 
o|replaced variables: 3 
o|removed binding forms: 15 
o|removed conditional forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 18) (##core#call . 647)) 
o|  call simplifications:
o|    list?	3
o|    fx<
o|    fixnum?
o|    cddr
o|    ##sys#call-with-values	2
o|    ##sys#intern-symbol
o|    string?
o|    number?
o|    cdar	3
o|    length	2
o|    write-char	2
o|    caddr	2
o|    set-car!	4
o|    ##sys#cons	17
o|    ##sys#list	19
o|    apply	4
o|    caar	10
o|    symbol?	18
o|    ##sys#make-structure	4
o|    list	8
o|    not	3
o|    set-cdr!
o|    eq?	20
o|    null?	30
o|    assq	30
o|    cdr	36
o|    memq	6
o|    ##sys#check-list	32
o|    pair?	52
o|    car	46
o|    cadr	15
o|    ##sys#setslot	22
o|    ##sys#slot	101
o|    cons	105
o|    values	6
o|    ##sys#check-structure	25
o|    ##sys#block-ref	13
o|contracted procedure: k2980 
o|contracted procedure: k2989 
o|contracted procedure: k2998 
o|contracted procedure: k3007 
o|contracted procedure: k3016 
o|contracted procedure: k3025 
o|contracted procedure: k3034 
o|contracted procedure: k3043 
o|contracted procedure: k3061 
o|contracted procedure: k3070 
o|contracted procedure: k3079 
o|contracted procedure: k3097 
o|contracted procedure: k3115 
o|contracted procedure: k3133 
o|contracted procedure: k3151 
o|contracted procedure: k3160 
o|contracted procedure: k3169 
o|contracted procedure: k3178 
o|contracted procedure: k3187 
o|contracted procedure: k3196 
o|contracted procedure: k3238 
o|contracted procedure: k3234 
o|contracted procedure: k3284 
o|contracted procedure: k3300 
o|contracted procedure: k3316 
o|contracted procedure: k3319 
o|contracted procedure: k3322 
o|contracted procedure: k3330 
o|contracted procedure: k3338 
o|contracted procedure: k3293 
o|contracted procedure: k3297 
o|contracted procedure: k3353 
o|contracted procedure: k3361 
o|contracted procedure: k3367 
o|contracted procedure: k3377 
o|contracted procedure: k3435 
o|contracted procedure: k3390 
o|contracted procedure: k3429 
o|contracted procedure: k3393 
o|contracted procedure: k3423 
o|contracted procedure: k3396 
o|contracted procedure: k3417 
o|contracted procedure: k3399 
o|contracted procedure: k3402 
o|contracted procedure: k3444 
o|contracted procedure: k3471 
o|contracted procedure: k3503 
o|contracted procedure: k3514 
o|contracted procedure: k3523 
o|contracted procedure: k3529 
o|contracted procedure: k3559 
o|contracted procedure: k3569 
o|contracted procedure: k3573 
o|contracted procedure: k3599 
o|contracted procedure: k3124 
o|contracted procedure: k3609 
o|contracted procedure: k3615 
o|contracted procedure: k3633 
o|contracted procedure: k3645 
o|contracted procedure: k3671 
o|contracted procedure: k3667 
o|contracted procedure: k3679 
o|contracted procedure: k3722 
o|contracted procedure: k3754 
o|contracted procedure: k3750 
o|contracted procedure: k3052 
o|contracted procedure: k3769 
o|contracted procedure: k3765 
o|contracted procedure: k3784 
o|contracted procedure: k3806 
o|contracted procedure: k3828 
o|contracted procedure: k3824 
o|contracted procedure: k3839 
o|contracted procedure: k3835 
o|contracted procedure: k3849 
o|contracted procedure: k3857 
o|contracted procedure: k3907 
o|contracted procedure: k3866 
o|contracted procedure: k3901 
o|contracted procedure: k3869 
o|contracted procedure: k3895 
o|contracted procedure: k3872 
o|contracted procedure: k3889 
o|contracted procedure: k3875 
o|contracted procedure: k3878 
o|contracted procedure: k3886 
o|contracted procedure: k3882 
o|contracted procedure: k3952 
o|contracted procedure: k3964 
o|contracted procedure: k3974 
o|contracted procedure: k3978 
o|contracted procedure: k3949 
o|contracted procedure: k3934 
o|contracted procedure: k3941 
o|contracted procedure: k4262 
o|contracted procedure: k4288 
o|contracted procedure: k4268 
o|contracted procedure: k4343 
o|contracted procedure: k4514 
o|contracted procedure: k4558 
o|contracted procedure: k4347 
o|contracted procedure: k4351 
o|contracted procedure: k4431 
o|contracted procedure: k4436 
o|contracted procedure: k4439 
o|contracted procedure: k4445 
o|contracted procedure: k4452 
o|contracted procedure: k4469 
o|contracted procedure: k4355 
o|contracted procedure: k4339 
o|contracted procedure: k4335 
o|contracted procedure: k4366 
o|contracted procedure: k4382 
o|contracted procedure: k4427 
o|contracted procedure: k4388 
o|contracted procedure: k4396 
o|contracted procedure: k4413 
o|contracted procedure: k4403 
o|contracted procedure: k4481 
o|contracted procedure: k4484 
o|contracted procedure: k4487 
o|contracted procedure: k4495 
o|contracted procedure: k4503 
o|contracted procedure: k4570 
o|contracted procedure: k4573 
o|contracted procedure: k4576 
o|contracted procedure: k4584 
o|contracted procedure: k4592 
o|contracted procedure: k4552 
o|contracted procedure: k4522 
o|contracted procedure: k4529 
o|contracted procedure: k4540 
o|contracted procedure: k4544 
o|contracted procedure: k4603 
o|contracted procedure: k4609 
o|contracted procedure: k4621 
o|contracted procedure: k4624 
o|contracted procedure: k4627 
o|contracted procedure: k4635 
o|contracted procedure: k4643 
o|contracted procedure: k4649 
o|contracted procedure: k4656 
o|contracted procedure: k4663 
o|contracted procedure: k4678 
o|contracted procedure: k4674 
o|contracted procedure: k4670 
o|contracted procedure: k5119 
o|contracted procedure: k4688 
o|contracted procedure: k4717 
o|contracted procedure: k4746 
o|contracted procedure: k4752 
o|contracted procedure: k4786 
o|contracted procedure: k4792 
o|contracted procedure: k4812 
o|contracted procedure: k4818 
o|contracted procedure: k4833 
o|contracted procedure: k4841 
o|contracted procedure: k4847 
o|contracted procedure: k4878 
o|contracted procedure: k4858 
o|contracted procedure: k4871 
o|contracted procedure: k4881 
o|contracted procedure: k4893 
o|contracted procedure: k4901 
o|contracted procedure: k4907 
o|contracted procedure: k4921 
o|contracted procedure: k4917 
o|contracted procedure: k4925 
o|contracted procedure: k4946 
o|contracted procedure: k4956 
o|contracted procedure: k4960 
o|contracted procedure: k4969 
o|contracted procedure: k4979 
o|contracted procedure: k4983 
o|contracted procedure: k4992 
o|contracted procedure: k5002 
o|contracted procedure: k5006 
o|contracted procedure: k5023 
o|contracted procedure: k5026 
o|contracted procedure: k5029 
o|contracted procedure: k5037 
o|contracted procedure: k5045 
o|contracted procedure: k4801 
o|contracted procedure: k5057 
o|contracted procedure: k5060 
o|contracted procedure: k5063 
o|contracted procedure: k5071 
o|contracted procedure: k5079 
o|contracted procedure: k4783 
o|contracted procedure: k4760 
o|contracted procedure: k4769 
o|contracted procedure: k4777 
o|contracted procedure: k5091 
o|contracted procedure: k5094 
o|contracted procedure: k5097 
o|contracted procedure: k5105 
o|contracted procedure: k5113 
o|contracted procedure: k4725 
o|contracted procedure: k4694 
o|contracted procedure: k4710 
o|contracted procedure: k4700 
o|contracted procedure: k4735 
o|contracted procedure: k5141 
o|contracted procedure: k5311 
o|contracted procedure: k5147 
o|contracted procedure: k5192 
o|contracted procedure: k5210 
o|contracted procedure: k5217 
o|contracted procedure: k5225 
o|contracted procedure: k5228 
o|contracted procedure: k5237 
o|contracted procedure: k5153 
o|contracted procedure: k5164 
o|contracted procedure: k5160 
o|contracted procedure: k5168 
o|contracted procedure: k5249 
o|contracted procedure: k5252 
o|contracted procedure: k5255 
o|contracted procedure: k5263 
o|contracted procedure: k5271 
o|contracted procedure: k5283 
o|contracted procedure: k5286 
o|contracted procedure: k5289 
o|contracted procedure: k5297 
o|contracted procedure: k5305 
o|contracted procedure: k5200 
o|contracted procedure: k5336 
o|contracted procedure: k5386 
o|contracted procedure: k5339 
o|contracted procedure: k5348 
o|contracted procedure: k5375 
o|contracted procedure: k5351 
o|contracted procedure: k5389 
o|contracted procedure: k5410 
o|contracted procedure: k5429 
o|contracted procedure: k5443 
o|contracted procedure: k5450 
o|contracted procedure: k5549 
o|contracted procedure: k5487 
o|contracted procedure: k5518 
o|contracted procedure: k5530 
o|contracted procedure: k5540 
o|contracted procedure: k5544 
o|contracted procedure: k5552 
o|contracted procedure: k5575 
o|contracted procedure: k5585 
o|contracted procedure: k5589 
o|contracted procedure: k5595 
o|contracted procedure: k5604 
o|contracted procedure: k5639 
o|contracted procedure: k5665 
o|contracted procedure: k5668 
o|contracted procedure: k5690 
o|contracted procedure: k3142 
o|contracted procedure: k5719 
o|contracted procedure: k5729 
o|contracted procedure: k5733 
o|contracted procedure: k5750 
o|contracted procedure: k5753 
o|contracted procedure: k5756 
o|contracted procedure: k5764 
o|contracted procedure: k5772 
o|contracted procedure: k5633 
o|contracted procedure: k5612 
o|contracted procedure: k5615 
o|contracted procedure: k4054 
o|contracted procedure: k4066 
o|contracted procedure: k4238 
o|contracted procedure: k4072 
o|contracted procedure: k4084 
o|contracted procedure: k4093 
o|contracted procedure: k4100 
o|contracted procedure: k4230 
o|contracted procedure: k4106 
o|contracted procedure: k4119 
o|contracted procedure: k4141 
o|contracted procedure: k4145 
o|contracted procedure: k4159 
o|contracted procedure: k4205 
o|contracted procedure: k4170 
o|contracted procedure: k4187 
o|contracted procedure: k4177 
o|contracted procedure: k4201 
o|contracted procedure: k5787 
o|contracted procedure: k5797 
o|contracted procedure: k5801 
o|contracted procedure: k5920 
o|contracted procedure: k5805 
o|contracted procedure: k5814 
o|contracted procedure: k5817 
o|contracted procedure: k5914 
o|contracted procedure: k5820 
o|contracted procedure: k5826 
o|contracted procedure: k5848 
o|inlining procedure: k5851 
o|contracted procedure: k5860 
o|inlining procedure: k5851 
o|contracted procedure: k5900 
o|contracted procedure: k5911 
o|contracted procedure: k5923 
o|contracted procedure: k5946 
o|contracted procedure: k5972 
o|contracted procedure: k5981 
o|contracted procedure: k5984 
o|contracted procedure: k5987 
o|contracted procedure: k5995 
o|contracted procedure: k6003 
o|contracted procedure: k5419 
o|contracted procedure: k6167 
o|contracted procedure: k6189 
o|contracted procedure: k6208 
o|contracted procedure: k6217 
o|contracted procedure: k6257 
o|contracted procedure: k7090 
o|contracted procedure: k6266 
o|contracted procedure: k6297 
o|contracted procedure: k6301 
o|contracted procedure: k6314 
o|contracted procedure: k6329 
o|contracted procedure: k6332 
o|contracted procedure: k6347 
o|contracted procedure: k6355 
o|contracted procedure: k6369 
o|contracted procedure: k6365 
o|contracted procedure: k6378 
o|contracted procedure: k6388 
o|contracted procedure: k6392 
o|contracted procedure: k6453 
o|contracted procedure: k6395 
o|contracted procedure: k6407 
o|contracted procedure: k6411 
o|contracted procedure: k6417 
o|contracted procedure: k6429 
o|contracted procedure: k6433 
o|contracted procedure: k6445 
o|contracted procedure: k6462 
o|contracted procedure: k6465 
o|contracted procedure: k6468 
o|contracted procedure: k6476 
o|contracted procedure: k6484 
o|contracted procedure: k6499 
o|contracted procedure: k6502 
o|contracted procedure: k6517 
o|contracted procedure: k6529 
o|contracted procedure: k6537 
o|contracted procedure: k6551 
o|contracted procedure: k6547 
o|contracted procedure: k6560 
o|contracted procedure: k6570 
o|contracted procedure: k6574 
o|contracted procedure: k6615 
o|contracted procedure: k6577 
o|contracted procedure: k6589 
o|contracted procedure: k6597 
o|contracted procedure: k6609 
o|contracted procedure: k6656 
o|contracted procedure: k6618 
o|contracted procedure: k6630 
o|contracted procedure: k6638 
o|contracted procedure: k6650 
o|contracted procedure: k6665 
o|contracted procedure: k6668 
o|contracted procedure: k6671 
o|contracted procedure: k6679 
o|contracted procedure: k6687 
o|contracted procedure: k6711 
o|contracted procedure: k6723 
o|contracted procedure: k6731 
o|contracted procedure: k6734 
o|contracted procedure: k6740 
o|contracted procedure: k6754 
o|contracted procedure: k6750 
o|contracted procedure: k6763 
o|contracted procedure: k6773 
o|contracted procedure: k6777 
o|contracted procedure: k6786 
o|contracted procedure: k6808 
o|contracted procedure: k6804 
o|contracted procedure: k6789 
o|contracted procedure: k6792 
o|contracted procedure: k6800 
o|contracted procedure: k6864 
o|contracted procedure: k6814 
o|contracted procedure: k6826 
o|contracted procedure: k6842 
o|contracted procedure: k6846 
o|contracted procedure: k6838 
o|contracted procedure: k6830 
o|contracted procedure: k6858 
o|contracted procedure: k6917 
o|contracted procedure: k6867 
o|contracted procedure: k6879 
o|contracted procedure: k6895 
o|contracted procedure: k6899 
o|contracted procedure: k6891 
o|contracted procedure: k6883 
o|contracted procedure: k6911 
o|contracted procedure: k6929 
o|contracted procedure: k6957 
o|contracted procedure: k6964 
o|contracted procedure: k6968 
o|contracted procedure: k6971 
o|contracted procedure: k6978 
o|contracted procedure: k6981 
o|contracted procedure: k6993 
o|contracted procedure: k6996 
o|contracted procedure: k6999 
o|contracted procedure: k7007 
o|contracted procedure: k7015 
o|contracted procedure: k7027 
o|contracted procedure: k7030 
o|contracted procedure: k7033 
o|contracted procedure: k7041 
o|contracted procedure: k7049 
o|contracted procedure: k7074 
o|contracted procedure: k7064 
o|contracted procedure: k7078 
o|contracted procedure: k7085 
o|contracted procedure: k7130 
o|contracted procedure: k7136 
o|contracted procedure: k7160 
o|contracted procedure: k7156 
o|contracted procedure: k7167 
o|contracted procedure: k7203 
o|contracted procedure: k7175 
o|contracted procedure: k7199 
o|contracted procedure: k7193 
o|contracted procedure: k7210 
o|contracted procedure: k7264 
o|contracted procedure: k7282 
o|contracted procedure: k7289 
o|contracted procedure: k7301 
o|contracted procedure: k7323 
o|contracted procedure: k7319 
o|contracted procedure: k7304 
o|contracted procedure: k7307 
o|contracted procedure: k7315 
o|contracted procedure: k7335 
o|contracted procedure: k7357 
o|contracted procedure: k7353 
o|contracted procedure: k7338 
o|contracted procedure: k7341 
o|contracted procedure: k7349 
o|contracted procedure: k7467 
o|contracted procedure: k7382 
o|contracted procedure: k7386 
o|contracted procedure: k7393 
o|contracted procedure: k7405 
o|contracted procedure: k7427 
o|contracted procedure: k7423 
o|contracted procedure: k7408 
o|contracted procedure: k7411 
o|contracted procedure: k7419 
o|contracted procedure: k7439 
o|contracted procedure: k7461 
o|contracted procedure: k7457 
o|contracted procedure: k7442 
o|contracted procedure: k7445 
o|contracted procedure: k7453 
o|contracted procedure: k7479 
o|contracted procedure: k7489 
o|contracted procedure: k7493 
o|contracted procedure: k7502 
o|contracted procedure: k7512 
o|contracted procedure: k7516 
o|contracted procedure: k3106 
o|contracted procedure: k7534 
o|contracted procedure: k3088 
o|contracted procedure: k7549 
o|contracted procedure: k7552 
o|contracted procedure: k7555 
o|contracted procedure: k7567 
o|contracted procedure: k7577 
o|contracted procedure: k7581 
o|contracted procedure: k7595 
o|contracted procedure: k7599 
o|contracted procedure: k7668 
o|contracted procedure: k7676 
o|contracted procedure: k7685 
o|contracted procedure: k7746 
o|contracted procedure: k7752 
o|contracted procedure: k7922 
o|contracted procedure: k7776 
o|contracted procedure: k7918 
o|contracted procedure: k7788 
o|contracted procedure: k7794 
o|contracted procedure: k7914 
o|contracted procedure: k7910 
o|contracted procedure: k7818 
o|contracted procedure: k7835 
o|contracted procedure: k7848 
o|contracted procedure: k7854 
o|contracted procedure: k7861 
o|contracted procedure: k7875 
o|contracted procedure: k7886 
o|contracted procedure: k7904 
o|contracted procedure: k7892 
o|contracted procedure: k7938 
o|contracted procedure: k7934 
o|contracted procedure: k7958 
o|contracted procedure: k7961 
o|contracted procedure: k7973 
o|contracted procedure: k7981 
o|contracted procedure: k7984 
o|contracted procedure: k7977 
o|contracted procedure: k7996 
o|contracted procedure: k8018 
o|contracted procedure: k8014 
o|contracted procedure: k7999 
o|contracted procedure: k8002 
o|contracted procedure: k8010 
o|contracted procedure: k8047 
o|contracted procedure: k8040 
o|contracted procedure: k8036 
o|contracted procedure: k8032 
o|contracted procedure: k8056 
o|contracted procedure: k8068 
o|contracted procedure: k8071 
o|contracted procedure: k8107 
o|contracted procedure: k8077 
o|contracted procedure: k8080 
o|contracted procedure: k8094 
o|contracted procedure: k8113 
o|contracted procedure: k8119 
o|contracted procedure: k8122 
o|contracted procedure: k8125 
o|contracted procedure: k8128 
o|contracted procedure: k8131 
o|contracted procedure: k8142 
o|contracted procedure: k8168 
o|contracted procedure: k8200 
o|contracted procedure: k8173 
o|contracted procedure: k8179 
o|contracted procedure: k8186 
o|contracted procedure: k8206 
o|contracted procedure: k8215 
o|contracted procedure: k8238 
o|contracted procedure: k8251 
o|contracted procedure: k8263 
o|contracted procedure: k8266 
o|contracted procedure: k8269 
o|contracted procedure: k8277 
o|contracted procedure: k8285 
o|contracted procedure: k8297 
o|contracted procedure: k8307 
o|contracted procedure: k8311 
o|contracted procedure: k8355 
o|contracted procedure: k8339 
o|contracted procedure: k8352 
o|simplifications: ((let . 95)) 
o|removed binding forms: 547 
o|inlining procedure: "(modules.scm:115) module-sexports" 
o|inlining procedure: "(modules.scm:114) module-vexports" 
o|inlining procedure: "(modules.scm:113) module-export-list" 
o|inlining procedure: "(modules.scm:155) module-saved-environments" 
o|inlining procedure: "(modules.scm:152) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:174) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:173) set-module-sexports!" 
o|inlining procedure: "(modules.scm:173) module-sexports" 
o|inlining procedure: "(modules.scm:164) module-exist-list" 
o|inlining procedure: "(modules.scm:175) set-module-export-list!" 
o|inlining procedure: "(modules.scm:162) module-export-list" 
o|inlining procedure: "(modules.scm:181) module-meta-expressions" 
o|inlining procedure: "(modules.scm:203) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:206) module-defined-list" 
o|inlining procedure: "(modules.scm:200) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:200) module-exist-list" 
o|inlining procedure: "(modules.scm:195) module-name" 
o|inlining procedure: "(modules.scm:191) module-export-list" 
o|inlining procedure: "(modules.scm:225) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:219) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:222) module-defined-list" 
o|inlining procedure: "(modules.scm:213) module-name" 
o|inlining procedure: "(modules.scm:210) module-export-list" 
o|inlining procedure: k3853 
o|inlining procedure: k3853 
o|inlining procedure: "(modules.scm:337) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:323) module-vexports" 
o|inlining procedure: "(modules.scm:322) module-iexports" 
o|inlining procedure: "(modules.scm:316) module-name" 
o|inlining procedure: "(modules.scm:314) module-meta-expressions" 
o|inlining procedure: "(modules.scm:311) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:310) module-sexports" 
o|inlining procedure: "(modules.scm:309) module-import-forms" 
o|inlining procedure: "(modules.scm:308) module-name" 
o|inlining procedure: "(modules.scm:307) module-defined-list" 
o|inlining procedure: "(modules.scm:389) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:421) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:425) module-sexports" 
o|inlining procedure: "(modules.scm:424) module-vexports" 
o|inlining procedure: "(modules.scm:432) module-exist-list" 
o|inlining procedure: "(modules.scm:431) module-export-list" 
o|inlining procedure: "(modules.scm:552) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:549) set-module-iexports!" 
o|inlining procedure: "(modules.scm:551) module-iexports" 
o|inlining procedure: "(modules.scm:548) set-module-sexports!" 
o|inlining procedure: "(modules.scm:255) module-defined-list" 
o|inlining procedure: "(modules.scm:254) module-name" 
o|inlining procedure: "(modules.scm:253) module-export-list" 
o|inlining procedure: "(modules.scm:454) module-sexports" 
o|inlining procedure: "(modules.scm:451) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:448) module-exist-list" 
o|inlining procedure: "(modules.scm:447) module-defined-list" 
o|inlining procedure: "(modules.scm:446) module-name" 
o|inlining procedure: "(modules.scm:445) module-export-list" 
o|inlining procedure: "(modules.scm:605) module-name" 
o|inlining procedure: "(modules.scm:604) module-iexports" 
o|inlining procedure: "(modules.scm:603) module-sexports" 
o|inlining procedure: "(modules.scm:602) module-vexports" 
o|inlining procedure: "(modules.scm:744) set-module-iexports!" 
o|inlining procedure: "(modules.scm:746) module-iexports" 
o|inlining procedure: "(modules.scm:731) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:733) module-exist-list" 
o|inlining procedure: "(modules.scm:730) set-module-sexports!" 
o|inlining procedure: "(modules.scm:730) module-sexports" 
o|inlining procedure: "(modules.scm:737) set-module-export-list!" 
o|inlining procedure: "(modules.scm:740) module-export-list" 
o|inlining procedure: "(modules.scm:728) module-export-list" 
o|inlining procedure: "(modules.scm:703) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:706) module-import-forms" 
o|inlining procedure: "(modules.scm:767) module-name" 
o|inlining procedure: "(modules.scm:767) module-name" 
o|inlining procedure: "(modules.scm:879) module-sexports" 
o|inlining procedure: "(modules.scm:878) module-vexports" 
o|inlining procedure: "(modules.scm:945) module-saved-environments" 
o|replaced variables: 203 
o|removed side-effect free assignment to unused variable: module-export-list 
o|removed side-effect free assignment to unused variable: set-module-export-list! 
o|removed side-effect free assignment to unused variable: module-defined-list 
o|removed side-effect free assignment to unused variable: set-module-defined-list! 
o|removed side-effect free assignment to unused variable: module-exist-list 
o|removed side-effect free assignment to unused variable: set-module-exist-list! 
o|removed side-effect free assignment to unused variable: module-defined-syntax-list 
o|removed side-effect free assignment to unused variable: module-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-expressions 
o|removed side-effect free assignment to unused variable: module-vexports 
o|removed side-effect free assignment to unused variable: module-sexports 
o|removed side-effect free assignment to unused variable: set-module-sexports! 
o|removed side-effect free assignment to unused variable: module-iexports 
o|removed side-effect free assignment to unused variable: set-module-iexports! 
o|removed side-effect free assignment to unused variable: module-saved-environments 
o|removed side-effect free assignment to unused variable: set-module-saved-environments! 
o|replaced variables: 138 
o|removed binding forms: 106 
o|inlining procedure: k3218 
o|contracted procedure: k3334 
o|inlining procedure: k3550 
o|inlining procedure: k3706 
o|inlining procedure: k5188 
o|inlining procedure: k5710 
o|inlining procedure: k5930 
o|inlining procedure: k6241 
o|inlining procedure: k7261 
o|inlining procedure: k7368 
o|inlining procedure: k7530 
o|inlining procedure: k7545 
o|inlining procedure: k7626 
o|inlining procedure: k76268915 
o|inlining procedure: k8193 
o|inlining procedure: k8345 
o|replaced variables: 3 
o|removed binding forms: 129 
o|contracted procedure: k3210 
o|contracted procedure: k3214 
o|contracted procedure: k3497 
o|contracted procedure: k3506 
o|contracted procedure: k3603 
o|contracted procedure: k3713 
o|contracted procedure: k3675 
o|contracted procedure: k3683 
o|contracted procedure: k3794 
o|contracted procedure: k3731 
o|contracted procedure: k3758 
o|contracted procedure: k3773 
o|contracted procedure: k4296 
o|contracted procedure: k4299 
o|contracted procedure: k4302 
o|contracted procedure: k4305 
o|contracted procedure: k4308 
o|contracted procedure: k4599 
o|contracted procedure: k4555 
o|contracted procedure: k4510 
o|contracted procedure: k4373 
o|contracted procedure: k4606 
o|contracted procedure: k5184 
o|contracted procedure: k5320 
o|contracted procedure: k5398 
o|contracted procedure: k5401 
o|contracted procedure: k5404 
o|contracted procedure: k5407 
o|contracted procedure: k5426 
o|contracted procedure: k3984 
o|contracted procedure: k3987 
o|contracted procedure: k3990 
o|contracted procedure: k6232 
o|contracted procedure: k6235 
o|contracted procedure: k6238 
o|contracted procedure: k7244 
o|contracted procedure: k7278 
o|contracted procedure: k7379 
o|contracted procedure: k8197 
o|removed binding forms: 55 
o|replaced variables: 32 
o|removed binding forms: 17 
o|direct leaf routine/allocation: g513514 3 
o|direct leaf routine with hoistable closures/allocation: g497504 (g513514) 3 
o|contracted procedure: "(modules.scm:164) k3562" 
o|removed binding forms: 2 
o|customizable procedures: (g21762183 for-each-loop21752190 map-loop21972215 k8182 loop2139 merr2112 loop22146 map-loop21152132 err2104 loop22075 k7841 loop2063 iface2053 err2052 g20222023 mrename1986 g19941995 g17611768 for-each-loop17601962 g18001807 for-each-loop17991813 g18211828 for-each-loop18201832 map-loop18981915 map-loop19241941 map-loop18441861 map-loop18701887 k7216 k6269 k6278 map-loop17051722 map-loop17311748 tostr1415 g16921693 loop1620 g16871688 loop1629 map-loop16531670 g16411648 for-each-loop16401677 map-loop15451562 g16151616 loop1569 g16101611 loop1578 g15901597 for-each-loop15891600 map-loop14761493 g15371538 g15331534 loop1500 g15131520 for-each-loop15121523 import-spec1417 import-name1416 map-loop11271145 loop1153 k5854 k5866 k5838 loop1161 g11821189 for-each-loop11811253 g675676 g668669 k4131 warn641 loop2659 loop653 map-loop12611286 g12971304 for-each-loop12961311 g11981205 for-each-loop11971209 g12291236 for-each-loop12281241 k5327 k5357 loop1098 map-loop10361054 g10691078 map-loop10631084 map-loop856874 map-loop884902 map-loop912930 g942949 for-each-loop941955 g963970 for-each-loop962976 g984991 for-each-loop983997 merge-se k4315 k4323 map-loop723740 k4588 map-loop749773 g788797 map-loop782815 loop822 k4359 loop694 k3921 for-each-loop610630 g581582 k3817 for-each-loop496516 g480481 k3453 g441442 loop432 map-loop400418) 
o|calls to known targets: 251 
o|identified direct recursive calls: f_3311 1 
o|identified direct recursive calls: f_3554 1 
o|identified direct recursive calls: f_4257 2 
o|identified direct recursive calls: f_4377 1 
o|identified direct recursive calls: f_5331 1 
o|identified direct recursive calls: f_4061 1 
o|identified direct recursive calls: f_5809 1 
o|identified direct recursive calls: f_6342 1 
o|identified direct recursive calls: f_6524 1 
o|identified direct recursive calls: f_6512 1 
o|identified direct recursive calls: f_6781 1 
o|identified direct recursive calls: f_6718 1 
o|identified direct recursive calls: f_6706 1 
o|identified direct recursive calls: f_7296 1 
o|identified direct recursive calls: f_7330 1 
o|identified direct recursive calls: f_7400 1 
o|identified direct recursive calls: f_7434 1 
o|identified direct recursive calls: f_7870 1 
o|identified direct recursive calls: f_7771 2 
o|identified direct recursive calls: f_7991 1 
o|fast box initializations: 61 
o|fast global references: 16 
o|fast global assignments: 2 
o|dropping unused closure argument: f_4242 
o|dropping unused closure argument: f_6227 
*/
/* end of file */

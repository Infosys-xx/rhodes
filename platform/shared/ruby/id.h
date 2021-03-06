/* DO NOT EDIT THIS FILE DIRECTLY */
/**********************************************************************

  id.h - 

  $Author: ko1 $
  created at: Thu Jul 12 04:38:07 2007

  Copyright (C) 2007 Koichi Sasada

**********************************************************************/

#ifndef RUBY_ID_H
#define RUBY_ID_H

#define ID_SCOPE_SHIFT 3
#define ID_SCOPE_MASK 0x07
#define ID_LOCAL      0x00
#define ID_INSTANCE   0x01
#define ID_GLOBAL     0x03
#define ID_ATTRSET    0x04
#define ID_CONST      0x05
#define ID_CLASS      0x06
#define ID_JUNK       0x07
#define ID_INTERNAL   ID_JUNK

#ifdef USE_PARSE_H
#include "parse.h"
#endif

#define symIFUNC ID2SYM(idIFUNC)
#define symCFUNC ID2SYM(idCFUNC)

enum ruby_method_ids {
#ifndef tLAST_TOKEN
    tUPLUS = 321,
    tUMINUS = 322,
    tPOW = 323,
    tCMP = 324,
    tEQ = 325,
    tEQQ = 326,
    tNEQ = 327,
    tGEQ = 328,
    tLEQ = 329,
    tANDOP = 330,
    tOROP = 331,
    tMATCH = 332,
    tNMATCH = 333,
    tDOT2 = 334,
    tDOT3 = 335,
    tAREF = 336,
    tASET = 337,
    tLSHFT = 338,
    tRSHFT = 339,
    tLAMBDA = 352,
    idNULL = 365,
    idRespond_to = 366,
    idIFUNC = 367,
    idCFUNC = 368,
    idThrowState = 369,
    id_core_set_method_alias = 370,
    id_core_set_variable_alias = 371,
    id_core_undef_method = 372,
    id_core_define_method = 373,
    id_core_define_singleton_method = 374,
    id_core_set_postexe = 375,
    tLAST_TOKEN = 376,
#elif tUPLUS != 321
#error tUPLUS differs
#elif tUMINUS != 322
#error tUMINUS differs
#elif tPOW != 323
#error tPOW differs
#elif tCMP != 324
#error tCMP differs
#elif tEQ != 325
#error tEQ differs
#elif tEQQ != 326
#error tEQQ differs
#elif tNEQ != 327
#error tNEQ differs
#elif tGEQ != 328
#error tGEQ differs
#elif tLEQ != 329
#error tLEQ differs
#elif tANDOP != 330
#error tANDOP differs
#elif tOROP != 331
#error tOROP differs
#elif tMATCH != 332
#error tMATCH differs
#elif tNMATCH != 333
#error tNMATCH differs
#elif tDOT2 != 334
#error tDOT2 differs
#elif tDOT3 != 335
#error tDOT3 differs
#elif tAREF != 336
#error tAREF differs
#elif tASET != 337
#error tASET differs
#elif tLSHFT != 338
#error tLSHFT differs
#elif tRSHFT != 339
#error tRSHFT differs
#elif tLAMBDA != 352
#error tLAMBDA differs
#elif idNULL != 365
#error idNULL differs
#elif idRespond_to != 366
#error idRespond_to differs
#elif idIFUNC != 367
#error idIFUNC differs
#elif idCFUNC != 368
#error idCFUNC differs
#elif idThrowState != 369
#error idThrowState differs
#elif id_core_set_method_alias != 370
#error id_core_set_method_alias differs
#elif id_core_set_variable_alias != 371
#error id_core_set_variable_alias differs
#elif id_core_undef_method != 372
#error id_core_undef_method differs
#elif id_core_define_method != 373
#error id_core_define_method differs
#elif id_core_define_singleton_method != 374
#error id_core_define_singleton_method differs
#elif id_core_set_postexe != 375
#error id_core_set_postexe differs
#elif tLAST_TOKEN != 376
#error tLAST_TOKEN differs
#endif
    idPLUS = '+',
    idMINUS = '-',
    idMULT = '*',
    idDIV = '/',
    idMOD = '%',
    idLT = '<',
    idLTLT = tLSHFT,
    idLE = tLEQ,
    idGT = '>',
    idGE = tGEQ,
    idEq = tEQ,
    idEqq = tEQQ,
    idNeq = tNEQ,
    idNot = '!',
    idBackquote = '`',
    idEqTilde = tMATCH,
    idAREF = tAREF,
    idASET = tASET,
    idLAST_TOKEN = tLAST_TOKEN >> ID_SCOPE_SHIFT,
    tIntern,
    tMethodMissing,
    tLength,
    tGets,
    tSucc,
    tEach,
    tLambda,
    tSend,
    t__send__,
    tInitialize,
#if SUPPORT_JOKE
    tBitblt,
    tAnswer,
#endif
    tLAST_ID,
#define TOKEN2ID(n) id##n = ((t##n<<ID_SCOPE_SHIFT)|ID_LOCAL)
    TOKEN2ID(Intern),
    TOKEN2ID(MethodMissing),
    TOKEN2ID(Length),
    TOKEN2ID(Gets),
    TOKEN2ID(Succ),
    TOKEN2ID(Each),
    TOKEN2ID(Lambda),
    TOKEN2ID(Send),
    TOKEN2ID(__send__),
    TOKEN2ID(Initialize),
#if SUPPORT_JOKE
    TOKEN2ID(Bitblt),
    TOKEN2ID(Answer),
#endif
};

#endif /* RUBY_ID_H */

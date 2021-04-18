// This file is fully generated by running scannergen v1.6.0

#include "StrLiteralScanner.h"

namespace {

using namespace bux;

// ASCII TABLE:
//  0: \x00\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f
// 20:  !\"#$%&\'()*+,-./0123456789:;<=>?
// 40: @ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_
// 60: `abcdefghijklmnopqrstuvwxyz{|}~\x7f
constinit const C_StrLiteralScanner::C_GotoPair
GOTO_STATE1[3] ={
    {'\x00', 12},
    {'\n', 2},
    {'\v', 12}},
GOTO_STATE2[3] ={
    {'\x00', 32},
    {'*', 33},
    {'+', 32}},
GOTO_STATE3[5] ={
    {'\x00', 32},
    {'*', 33},
    {'+', 32},
    {'/', 3},
    {'0', 32}},
GOTO_STATE4[5] ={
    {' ', 8},
    {'\'', std::numeric_limits<int8_t>::max()},
    {'(', 8},
    {'\\', 9},
    {']', 8}},
GOTO_STATE5[5] ={
    {' ', 10},
    {'\"', 1},
    {'#', 10},
    {'\\', 11},
    {']', 10}},
GOTO_STATE6[6] ={
    {'\"', 6},
    {'#', std::numeric_limits<int8_t>::max()},
    {'\'', 5},
    {'(', std::numeric_limits<int8_t>::max()},
    {'/', 7},
    {'0', std::numeric_limits<int8_t>::max()}},
GOTO_STATE7[22] ={
    {'\"', 8},
    {'#', std::numeric_limits<int8_t>::max()},
    {'\'', 8},
    {'(', std::numeric_limits<int8_t>::max()},
    {'U', 16},
    {'V', std::numeric_limits<int8_t>::max()},
    {'\\', 8},
    {']', std::numeric_limits<int8_t>::max()},
    {'a', 8},
    {'c', std::numeric_limits<int8_t>::max()},
    {'f', 8},
    {'g', std::numeric_limits<int8_t>::max()},
    {'n', 8},
    {'o', std::numeric_limits<int8_t>::max()},
    {'r', 8},
    {'s', std::numeric_limits<int8_t>::max()},
    {'t', 8},
    {'u', 15},
    {'v', 8},
    {'w', std::numeric_limits<int8_t>::max()},
    {'x', 14},
    {'y', std::numeric_limits<int8_t>::max()}},
GOTO_STATE8[22] ={
    {'\"', 10},
    {'#', std::numeric_limits<int8_t>::max()},
    {'\'', 10},
    {'(', std::numeric_limits<int8_t>::max()},
    {'U', 17},
    {'V', std::numeric_limits<int8_t>::max()},
    {'\\', 10},
    {']', std::numeric_limits<int8_t>::max()},
    {'a', 10},
    {'c', std::numeric_limits<int8_t>::max()},
    {'f', 10},
    {'g', std::numeric_limits<int8_t>::max()},
    {'n', 10},
    {'o', std::numeric_limits<int8_t>::max()},
    {'r', 10},
    {'s', std::numeric_limits<int8_t>::max()},
    {'t', 10},
    {'u', 24},
    {'v', 10},
    {'w', std::numeric_limits<int8_t>::max()},
    {'x', 29},
    {'y', std::numeric_limits<int8_t>::max()}},
GOTO_STATE9[2] ={
    {'\'', 4},
    {'(', std::numeric_limits<int8_t>::max()}},
GOTO_STATE10[8] ={
    {'\'', 4},
    {'(', std::numeric_limits<int8_t>::max()},
    {'0', 8},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 8},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 8},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE11[4] ={
    {'*', 13},
    {'+', std::numeric_limits<int8_t>::max()},
    {'/', 12},
    {'0', std::numeric_limits<int8_t>::max()}},
GOTO_STATE12[6] ={
    {'0', 8},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 8},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 8},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE13[6] ={
    {'0', 10},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 10},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 10},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE14[6] ={
    {'0', 15},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 15},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 15},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE15[6] ={
    {'0', 18},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 18},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 18},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE16[6] ={
    {'0', 19},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 19},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 19},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE17[6] ={
    {'0', 20},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 20},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 20},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE18[6] ={
    {'0', 21},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 21},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 21},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE19[6] ={
    {'0', 22},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 22},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 22},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE20[6] ={
    {'0', 23},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 23},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 23},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE21[6] ={
    {'0', 24},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 24},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 24},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE22[6] ={
    {'0', 25},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 25},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 25},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE23[6] ={
    {'0', 26},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 26},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 26},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE24[6] ={
    {'0', 27},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 27},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 27},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE25[6] ={
    {'0', 28},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 28},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 28},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE26[6] ={
    {'0', 30},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 30},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 30},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE27[6] ={
    {'0', 31},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 31},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 31},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE28[6] ={
    {'0', 34},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 34},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 34},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE29[6] ={
    {'0', 35},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 35},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 35},
    {'g', std::numeric_limits<int8_t>::max()}};
// Token-def %LOCAL_ACTION_DEFS begins
enum
{
    TID_LEX_Key         = bux::TOKENGEN_LB+0,   // $Key
    TID_LEX_Spaces      = bux::TOKENGEN_LB+1,   // $Spaces
    TID_LEX_String      = bux::TOKENGEN_LB+2    // $String
};
// Token-def %LOCAL_ACTION_DEFS ends


constinit const C_StrLiteralScanner::C_StateRec STATES[36] = {
    { GOTO_STATE6,	nullptr	},  // 0
    { nullptr,	bux::createEscapeString<TID_LEX_String,C_LexUTF32, 1, 1>	},  // 1
    { nullptr,	bux::createNothing<'\n',C_LexUTF32>	},  // 2
    { GOTO_STATE2,	bux::createNothing<TID_LEX_Spaces,C_LexUTF32>	},  // 3
    { nullptr,	bux::createCharLiteral<TID_LEX_Key,C_LexUTF32>	},  // 4
    { GOTO_STATE4,	nullptr	},  // 5
    { GOTO_STATE5,	nullptr	},  // 6
    { GOTO_STATE11,	nullptr	},  // 7
    { GOTO_STATE9,	nullptr	},  // 8
    { GOTO_STATE7,	nullptr	},  // 9
    { GOTO_STATE5,	nullptr	},  // 10
    { GOTO_STATE8,	nullptr	},  // 11
    { GOTO_STATE1,	nullptr	},  // 12
    { GOTO_STATE2,	nullptr	},  // 13
    { GOTO_STATE28,	nullptr	},  // 14
    { GOTO_STATE22,	nullptr	},  // 15
    { GOTO_STATE15,	nullptr	},  // 16
    { GOTO_STATE16,	nullptr	},  // 17
    { GOTO_STATE17,	nullptr	},  // 18
    { GOTO_STATE18,	nullptr	},  // 19
    { GOTO_STATE19,	nullptr	},  // 20
    { GOTO_STATE20,	nullptr	},  // 21
    { GOTO_STATE14,	nullptr	},  // 22
    { GOTO_STATE21,	nullptr	},  // 23
    { GOTO_STATE23,	nullptr	},  // 24
    { GOTO_STATE24,	nullptr	},  // 25
    { GOTO_STATE25,	nullptr	},  // 26
    { GOTO_STATE26,	nullptr	},  // 27
    { GOTO_STATE27,	nullptr	},  // 28
    { GOTO_STATE29,	nullptr	},  // 29
    { GOTO_STATE12,	nullptr	},  // 30
    { GOTO_STATE13,	nullptr	},  // 31
    { GOTO_STATE2,	nullptr	},  // 32
    { GOTO_STATE3,	nullptr	},  // 33
    { GOTO_STATE10,	nullptr	},  // 34
    { GOTO_STATE5,	nullptr	}}; // 35

constinit const uint8_t GOTO_SIZE[36] = {
    6,	// 0
    0,	// 1
    0,	// 2
    3,	// 3
    0,	// 4
    5,	// 5
    5,	// 6
    4,	// 7
    2,	// 8
    22,	// 9
    5,	// 10
    22,	// 11
    3,	// 12
    3,	// 13
    6,	// 14
    6,	// 15
    6,	// 16
    6,	// 17
    6,	// 18
    6,	// 19
    6,	// 20
    6,	// 21
    6,	// 22
    6,	// 23
    6,	// 24
    6,	// 25
    6,	// 26
    6,	// 27
    6,	// 28
    6,	// 29
    6,	// 30
    6,	// 31
    3,	// 32
    5,	// 33
    8,	// 34
    5};	// 35

constinit const int8_t FIRST_FITS[1] = {
    3};

constinit C_StrLiteralScanner::F_IsFinal *const IS_FINALS[1] = {
    nullptr};

} // namespace

namespace bux {

C_StrLiteralScanner::C_StrLiteralScanner(I_Parser &parser):
    C_ScannerImpl<uint8_t,int8_t,C_LexUTF32>(parser)
{
    stateTables(STATES, GOTO_SIZE);
    firstFits(FIRST_FITS, IS_FINALS, 1);
}

} // namespace bux

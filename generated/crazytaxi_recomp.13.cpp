#include "crazytaxi_init.h"

__attribute__((alias("__imp__sub_8221F638"))) PPC_WEAK_FUNC(sub_8221F638);
PPC_FUNC_IMPL(__imp__sub_8221F638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x8221f690
	if (!ctx.cr6.eq) goto loc_8221F690;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8221f690
	if (!ctx.cr6.eq) goto loc_8221F690;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8221f690
	if (!ctx.cr6.eq) goto loc_8221F690;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r9,r11,-1360
	ctx.r9.s64 = ctx.r11.s64 + -1360;
	// lfs f0,856(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_8221F690:
	// lfs f8,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,-3200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bl 0x820ca790
	ctx.lr = 0x8221F700;
	sub_820CA790(ctx, base);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82184480
	ctx.lr = 0x8221F714;
	sub_82184480(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F728"))) PPC_WEAK_FUNC(sub_8221F728);
PPC_FUNC_IMPL(__imp__sub_8221F728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82184a84
	ctx.lr = 0x8221F740;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// bne cr6,0x8221f790
	if (!ctx.cr6.eq) goto loc_8221F790;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8221f790
	if (!ctx.cr6.eq) goto loc_8221F790;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x8221f790
	if (!ctx.cr6.eq) goto loc_8221F790;
	// lfs f13,856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_8221F790:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,15176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15176);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f8,732(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 732, temp.u32);
	// fneg f7,f11
	ctx.f7.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f7,736(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 736, temp.u32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f6,740(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 740, temp.u32);
	// lwz r8,784(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r7,r8,1024
	ctx.r7.u64 = ctx.r8.u64 | 1024;
	// stw r7,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r7.u32);
	// beq cr6,0x8221f870
	if (ctx.cr6.eq) goto loc_8221F870;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f9,f0,f0,f8
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// beq cr6,0x8221f81c
	if (ctx.cr6.eq) goto loc_8221F81C;
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
loc_8221F81C:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// lfd f10,848(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 848);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmul f31,f7,f10
	ctx.f31.f64 = ctx.f7.f64 * ctx.f10.f64;
	// fsubs f30,f13,f11
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmsubs f29,f0,f12,f9
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82181e58
	ctx.lr = 0x8221F854;
	sub_82181E58(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f31,f27,f30
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// bl 0x82181f38
	ctx.lr = 0x8221F864;
	sub_82181F38(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f27,f28
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmadds f10,f27,f29,f6
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 + ctx.f6.f64));
loc_8221F870:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,-3200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bl 0x820ca790
	ctx.lr = 0x8221F8DC;
	sub_820CA790(ctx, base);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82184480
	ctx.lr = 0x8221F8F0;
	sub_82184480(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82184ad0
	ctx.lr = 0x8221F8FC;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F910"))) PPC_WEAK_FUNC(sub_8221F910);
PPC_FUNC_IMPL(__imp__sub_8221F910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// lwz r11,-3200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3200);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// vpermwi128 v61,v62,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x15));
	// li r4,64
	ctx.r4.s64 = 64;
	// vpermwi128 v60,v62,186
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x45));
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// vpermwi128 v59,v62,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x51));
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// vpermwi128 v58,v62,171
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x54));
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stvlx128 v61,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// stvlx128 v58,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r10,r4
	ea = ctx.r10.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F988"))) PPC_WEAK_FUNC(sub_8221F988);
PPC_FUNC_IMPL(__imp__sub_8221F988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821809d0
	ctx.lr = 0x8221F9A4;
	sub_821809D0(ctx, base);
	// lis r30,-32168
	ctx.r30.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r31,-3200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3200);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// bl 0x82184480
	ctx.lr = 0x8221F9CC;
	sub_82184480(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca8a0
	ctx.lr = 0x8221F9D8;
	sub_820CA8A0(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// vpermwi128 v61,v62,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x15));
	// vpermwi128 v60,v62,186
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x45));
	// vpermwi128 v59,v62,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x51));
	// vpermwi128 v58,v62,171
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x54));
	// lwz r11,-3200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stvlx128 v61,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// stvlx128 v58,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r10,r4
	ea = ctx.r10.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FA68"))) PPC_WEAK_FUNC(sub_8221FA68);
PPC_FUNC_IMPL(__imp__sub_8221FA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x8221FA70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-3200
	ctx.r30.s64 = ctx.r11.s64 + -3200;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ble cr6,0x8221fae8
	if (!ctx.cr6.gt) goto loc_8221FAE8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8221FA90:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221fae8
	if (ctx.cr6.eq) goto loc_8221FAE8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221fad4
	if (ctx.cr6.eq) goto loc_8221FAD4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x82183380
	ctx.lr = 0x8221FABC;
	sub_82183380(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r29,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r29.u32);
loc_8221FAD4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bgt 0x8221fa90
	if (ctx.cr0.gt) goto loc_8221FA90;
loc_8221FAE8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221fb90
	if (!ctx.cr6.eq) goto loc_8221FB90;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821809d0
	ctx.lr = 0x8221FAFC;
	sub_821809D0(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	ctx.r11.s64 = 48;
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vpermwi128 v61,v62,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x15));
	// vpermwi128 v60,v62,186
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x45));
	// vpermwi128 v59,v62,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x51));
	// vpermwi128 v58,v62,171
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x54));
	// stvlx128 v61,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// stvlx128 v58,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221fb74
	if (!ctx.cr6.eq) goto loc_8221FB74;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x82183bc8
	ctx.lr = 0x8221FB70;
	sub_82183BC8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8221FB74:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_8221FB90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FBA0"))) PPC_WEAK_FUNC(sub_8221FBA0);
PPC_FUNC_IMPL(__imp__sub_8221FBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221fbd8
	if (!ctx.cr6.eq) goto loc_8221FBD8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-3200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// b 0x8221fbdc
	goto loc_8221FBDC;
loc_8221FBD8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8221FBDC:
	// li r9,16
	ctx.r9.s64 = 16;
	// lvlx128 v63,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	ctx.r11.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvrx128 v62,r9,r31
	temp.u32 = ctx.r9.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvrx128 v61,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvlx128 v60,r9,r31
	temp.u32 = ctx.r9.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvlx128 v59,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v58,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v53,r8,r31
	temp.u32 = ctx.r8.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v56,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v57,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v52,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v58,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x820c9e40
	ctx.lr = 0x8221FC60;
	sub_820C9E40(ctx, base);
	// vspltw128 v51,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvewx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x820ca698
	ctx.lr = 0x8221FC78;
	sub_820CA698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x8221FC88;
	sub_82184480(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FCA0"))) PPC_WEAK_FUNC(sub_8221FCA0);
PPC_FUNC_IMPL(__imp__sub_8221FCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843ec
	ctx.lr = 0x8221FCA8;
	__savegprlr_21(ctx, base);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r26,r10,-3208
	ctx.r26.s64 = ctx.r10.s64 + -3208;
	// addi r28,r11,-3200
	ctx.r28.s64 = ctx.r11.s64 + -3200;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// addi r25,r9,-3216
	ctx.r25.s64 = ctx.r9.s64 + -3216;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r21,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r21.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r21,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r21.u32);
	// stw r21,-3204(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3204, ctx.r21.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,-3212(r7)
	PPC_STORE_U32(ctx.r7.u32 + -3212, ctx.r10.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r24,r8,-3204
	ctx.r24.s64 = ctx.r8.s64 + -3204;
	// addi r22,r7,-3212
	ctx.r22.s64 = ctx.r7.s64 + -3212;
	// bl 0x821809d0
	ctx.lr = 0x8221FD0C;
	sub_821809D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,32
	ctx.r31.s64 = 32;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fd38
	if (ctx.cr6.eq) goto loc_8221FD38;
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bl 0x82183b60
	ctx.lr = 0x8221FD30;
	sub_82183B60(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x8221fd3c
	goto loc_8221FD3C;
loc_8221FD38:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8221FD3C:
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821809d0
	ctx.lr = 0x8221FD48;
	sub_821809D0(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r30,48
	ctx.r30.s64 = 48;
	// li r23,64
	ctx.r23.s64 = 64;
	// vupkd3d128 v127,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v127 = vTemp;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vpermwi128 v62,v127,234
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x15));
	// vpermwi128 v61,v127,186
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x45));
	// vpermwi128 v60,v127,174
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x51));
	// vpermwi128 v59,v127,171
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x54));
	// stvlx128 v62,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r3,r29
	ea = ctx.r3.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v61,r3,r29
	ea = ctx.r3.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r3,r31
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r3,r31
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r3,r30
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r3,r30
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r3,r23
	ea = ctx.r3.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x820ca8a0
	ctx.lr = 0x8221FDA0;
	sub_820CA8A0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x821809d0
	ctx.lr = 0x8221FDB0;
	sub_821809D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fdd8
	if (ctx.cr6.eq) goto loc_8221FDD8;
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// bl 0x82183b60
	ctx.lr = 0x8221FDD0;
	sub_82183B60(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x8221fddc
	goto loc_8221FDDC;
loc_8221FDD8:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_8221FDDC:
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821809d0
	ctx.lr = 0x8221FDE8;
	sub_821809D0(ctx, base);
	// vpermwi128 v58,v127,234
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x15));
	// vpermwi128 v57,v127,186
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x45));
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// vpermwi128 v56,v127,174
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x51));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v55,v127,171
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x54));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stvlx128 v58,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r3,r29
	ea = ctx.r3.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// stvlx128 v57,r3,r29
	ea = ctx.r3.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvrx128 v57,r3,r31
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v57.u8[i]);
	// stvlx128 v56,r3,r31
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvrx128 v56,r3,r30
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v56.u8[i]);
	// stvlx128 v55,r3,r30
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r3,r23
	ea = ctx.r3.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x820ca8a0
	ctx.lr = 0x8221FE2C;
	sub_820CA8A0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x821809d0
	ctx.lr = 0x8221FE3C;
	sub_821809D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fe64
	if (ctx.cr6.eq) goto loc_8221FE64;
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// bl 0x82183b60
	ctx.lr = 0x8221FE5C;
	sub_82183B60(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x8221fe68
	goto loc_8221FE68;
loc_8221FE64:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_8221FE68:
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821809d0
	ctx.lr = 0x8221FE74;
	sub_821809D0(ctx, base);
	// vpermwi128 v54,v127,234
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x15));
	// vpermwi128 v53,v127,186
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x45));
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// vpermwi128 v52,v127,174
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x51));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v51,v127,171
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x54));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stvlx128 v54,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r3,r29
	ea = ctx.r3.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// stvlx128 v53,r3,r29
	ea = ctx.r3.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvrx128 v53,r3,r31
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v53.u8[i]);
	// stvlx128 v52,r3,r31
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r3,r30
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// stvlx128 v51,r3,r30
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r3,r23
	ea = ctx.r3.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x820ca8a0
	ctx.lr = 0x8221FEB8;
	sub_820CA8A0(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221fecc
	if (!ctx.cr6.eq) goto loc_8221FECC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x8221fee0
	goto loc_8221FEE0;
loc_8221FECC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221fedc
	if (!ctx.cr6.eq) goto loc_8221FEDC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x8221fee0
	goto loc_8221FEE0;
loc_8221FEDC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_8221FEE0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8218443c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FF08"))) PPC_WEAK_FUNC(sub_8221FF08);
PPC_FUNC_IMPL(__imp__sub_8221FF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fff8
	if (ctx.cr6.eq) goto loc_8221FFF8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221fff8
	if (ctx.cr6.eq) goto loc_8221FFF8;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,-3200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3200);
	// li r9,16
	ctx.r9.s64 = 16;
	// lvrx128 v62,r6,r7
	temp.u32 = ctx.r6.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v61,v62,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// vor128 v60,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// vspltw128 v59,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vspltw128 v12,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltw128 v10,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r31,8
	ctx.r31.s64 = 8;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lvrx128 v58,r5,r3
	temp.u32 = ctx.r5.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v55,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v0,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v53,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v11,v59,v56
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vor128 v13,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmaddfp v0,v12,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v51,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v50,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v49,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v51,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_8221FFF8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220000"))) PPC_WEAK_FUNC(sub_82220000);
PPC_FUNC_IMPL(__imp__sub_82220000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221ff08
	ctx.lr = 0x82220018;
	sub_8221FF08(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-3200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lfs f11,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220078"))) PPC_WEAK_FUNC(sub_82220078);
PPC_FUNC_IMPL(__imp__sub_82220078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x82220080;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f0,15176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15176);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v61,v62,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x15));
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// vpermwi128 v60,v62,186
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x45));
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v59,v62,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x51));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvlx128 v61,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stvrx128 v61,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// li r7,64
	ctx.r7.s64 = 64;
	// stvlx128 v60,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// stvrx128 v60,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvrx128 v59,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// lvx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,-3200(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -3200);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x8222014C;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x8222015C;
	sub_82184480(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220168"))) PPC_WEAK_FUNC(sub_82220168);
PPC_FUNC_IMPL(__imp__sub_82220168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184404
	ctx.lr = 0x82220170;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f0,15176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15176);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vpermwi128 v61,v62,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x15));
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v60,v62,186
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x45));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vpermwi128 v59,v62,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x51));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// stvlx128 v61,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// li r8,64
	ctx.r8.s64 = 64;
	// stvrx128 v61,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// stvlx128 v60,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvrx128 v60,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvlx128 v59,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// lvx128 v63,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r28,r11
	ea = ctx.r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r27,r8
	ea = ctx.r27.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,-3200(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -3200);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x82220230;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x82220240;
	sub_82184480(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82184454
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220248"))) PPC_WEAK_FUNC(sub_82220248);
PPC_FUNC_IMPL(__imp__sub_82220248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843fc
	ctx.lr = 0x82220250;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f0,15176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15176);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v61,v62,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x15));
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v60,v62,186
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x45));
	// li r11,48
	ctx.r11.s64 = 48;
	// vpermwi128 v59,v62,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x51));
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// li r26,64
	ctx.r26.s64 = 64;
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// stvlx128 v61,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvrx128 v61,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvlx128 v60,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// lvx128 v63,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r28,r11
	ea = ctx.r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r27,r26
	ea = ctx.r27.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,-3200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x82220304;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x82220314;
	sub_82184480(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8218444c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220320"))) PPC_WEAK_FUNC(sub_82220320);
PPC_FUNC_IMPL(__imp__sub_82220320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r11,-1360
	ctx.r9.s64 = ctx.r11.s64 + -1360;
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,-3200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3200);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r31,-4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x822203B0;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x822203C0;
	sub_82184480(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822203D8"))) PPC_WEAK_FUNC(sub_822203D8);
PPC_FUNC_IMPL(__imp__sub_822203D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ca578
	ctx.lr = 0x822203F0;
	sub_820CA578(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,-3200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x8222041C;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x8222042C;
	sub_82184480(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220440"))) PPC_WEAK_FUNC(sub_82220440);
PPC_FUNC_IMPL(__imp__sub_82220440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220640
	if (ctx.cr6.eq) goto loc_82220640;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82220640
	if (ctx.cr6.eq) goto loc_82220640;
	// li r11,12
	ctx.r11.s64 = 12;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvrx128 v60,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r31,8
	ctx.r31.s64 = 8;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r5,-1360
	ctx.r5.s64 = ctx.r5.s64 + -1360;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v58,v63,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v59,v60,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// vor128 v56,v62,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// li r10,4
	ctx.r10.s64 = 4;
	// vor128 v57,v61,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vpermwi128 v54,v56,99
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x9C));
	// vpermwi128 v0,v56,135
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x78));
	// vpermwi128 v55,v57,135
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x78));
	// vpermwi128 v13,v57,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x9C));
	// vmulfp128 v12,v54,v55
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vnmsubfp v12,v0,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v53,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v52,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v51,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v53,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r4,r31
	ea = (ctx.r4.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f8,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bne cr6,0x82220550
	if (!ctx.cr6.eq) goto loc_82220550;
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bne cr6,0x82220550
	if (!ctx.cr6.eq) goto loc_82220550;
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// beq cr6,0x82220640
	if (ctx.cr6.eq) goto loc_82220640;
loc_82220550:
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lvrx128 v48,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// lvlx128 v45,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lvrx128 v50,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v46,v50,v50,4
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), 12));
	// vsldoi128 v47,v48,v48,4
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 12));
	// lvlx128 v49,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v43,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// fmadds f8,f13,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f7,f10,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// vor128 v44,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vmsum3fp128 v42,v43,v44
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v44.f32), 0xEF));
	// fmadds f6,f12,f12,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f5,f9,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f4,f6
	ctx.f4.f64 = double(float(sqrt(ctx.f6.f64)));
	// vspltw128 v41,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// stvewx128 v41,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,15176(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 15176);
	ctx.f8.f64 = double(temp.f32);
	// fsqrts f2,f5
	ctx.f2.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fdivs f1,f3,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f1.f64));
	// fcmpu cr6,f1,f8
	ctx.cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// bgt cr6,0x82220640
	if (ctx.cr6.gt) goto loc_82220640;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,15132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82220640
	if (ctx.cr6.lt) goto loc_82220640;
	// bl 0x820c9bc0
	ctx.lr = 0x822205F8;
	sub_820C9BC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820ca600
	ctx.lr = 0x82220604;
	sub_820CA600(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,-3200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x82220630;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x82220640;
	sub_82184480(ctx, base);
loc_82220640:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220658"))) PPC_WEAK_FUNC(sub_82220658);
PPC_FUNC_IMPL(__imp__sub_82220658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843fc
	ctx.lr = 0x82220660;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r9,-1360
	ctx.r8.s64 = ctx.r9.s64 + -1360;
	// lfd f0,848(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 848);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// bl 0x820ca030
	ctx.lr = 0x82220690;
	sub_820CA030(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stvrx128 v63,r5,r9
	ea = ctx.r5.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// li r26,64
	ctx.r26.s64 = 64;
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r28,r11
	ea = ctx.r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r27,r26
	ea = ctx.r27.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,-3200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x8222072C;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x8222073C;
	sub_82184480(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8218444c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220748"))) PPC_WEAK_FUNC(sub_82220748);
PPC_FUNC_IMPL(__imp__sub_82220748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843fc
	ctx.lr = 0x82220750;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r9,-1360
	ctx.r8.s64 = ctx.r9.s64 + -1360;
	// lfd f0,848(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 848);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// bl 0x820c9f90
	ctx.lr = 0x82220780;
	sub_820C9F90(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stvrx128 v63,r5,r9
	ea = ctx.r5.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// li r26,64
	ctx.r26.s64 = 64;
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r28,r11
	ea = ctx.r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r27,r26
	ea = ctx.r27.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,-3200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x8222081C;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x8222082C;
	sub_82184480(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8218444c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220838"))) PPC_WEAK_FUNC(sub_82220838);
PPC_FUNC_IMPL(__imp__sub_82220838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r9,-1360
	ctx.r8.s64 = ctx.r9.s64 + -1360;
	// lfd f0,848(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 848);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// bl 0x820ca578
	ctx.lr = 0x82220874;
	sub_820CA578(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,-3200(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -3200);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x822208A0;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x822208B0;
	sub_82184480(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822208C8"))) PPC_WEAK_FUNC(sub_822208C8);
PPC_FUNC_IMPL(__imp__sub_822208C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220964
	if (ctx.cr6.eq) goto loc_82220964;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r10,-1360
	ctx.r8.s64 = ctx.r10.s64 + -1360;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfd f0,848(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 848);
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// bl 0x820ca600
	ctx.lr = 0x82220928;
	sub_820CA600(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,-3200(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -3200);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x82220954;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x82220964;
	sub_82184480(ctx, base);
loc_82220964:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220978"))) PPC_WEAK_FUNC(sub_82220978);
PPC_FUNC_IMPL(__imp__sub_82220978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,-3216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3216);
	// lwz r10,-3200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3200);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// lwz r3,-4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// b 0x820ca460
	sub_820CA460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822209B8"))) PPC_WEAK_FUNC(sub_822209B8);
PPC_FUNC_IMPL(__imp__sub_822209B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821809d0
	ctx.lr = 0x822209D4;
	sub_821809D0(ctx, base);
	// lis r30,-32168
	ctx.r30.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r31,-3200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3200);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// bl 0x82184480
	ctx.lr = 0x822209FC;
	sub_82184480(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca8a0
	ctx.lr = 0x82220A08;
	sub_820CA8A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lwz r10,-3200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3200);
	// lwz r11,-3216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3216);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,-4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// bl 0x820ca460
	ctx.lr = 0x82220A40;
	sub_820CA460(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220A58"))) PPC_WEAK_FUNC(sub_82220A58);
PPC_FUNC_IMPL(__imp__sub_82220A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220aac
	if (ctx.cr6.eq) goto loc_82220AAC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820c72a8
	ctx.lr = 0x82220A9C;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184480
	ctx.lr = 0x82220AAC;
	sub_82184480(ctx, base);
loc_82220AAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220AC0"))) PPC_WEAK_FUNC(sub_82220AC0);
PPC_FUNC_IMPL(__imp__sub_82220AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30548
	ctx.r3.s64 = ctx.r11.s64 + 30548;
	// b 0x822208c8
	sub_822208C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220AD0"))) PPC_WEAK_FUNC(sub_82220AD0);
PPC_FUNC_IMPL(__imp__sub_82220AD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82220a58
	sub_82220A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220AD8"))) PPC_WEAK_FUNC(sub_82220AD8);
PPC_FUNC_IMPL(__imp__sub_82220AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82182058
	ctx.lr = 0x82220AEC;
	sub_82182058(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220B00"))) PPC_WEAK_FUNC(sub_82220B00);
PPC_FUNC_IMPL(__imp__sub_82220B00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// lwz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// stw r11,15168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15168, ctx.r11.u32);
	// lhz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 15168);
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220B28"))) PPC_WEAK_FUNC(sub_82220B28);
PPC_FUNC_IMPL(__imp__sub_82220B28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,12345
	ctx.r11.s64 = 12345;
	// stw r11,15168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220B38"))) PPC_WEAK_FUNC(sub_82220B38);
PPC_FUNC_IMPL(__imp__sub_82220B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// lfs f31,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82220b74
	if (ctx.cr6.lt) goto loc_82220B74;
	// fsqrts f1,f1
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82220B74:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7716
	ctx.r4.s64 = ctx.r11.s64 + -7716;
	// bl 0x821833e0
	ctx.lr = 0x82220B8C;
	sub_821833E0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220BA8"))) PPC_WEAK_FUNC(sub_82220BA8);
PPC_FUNC_IMPL(__imp__sub_82220BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r9,-1360
	ctx.r8.s64 = ctx.r9.s64 + -1360;
	// lfd f0,848(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 848);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmul f31,f13,f0
	ctx.f31.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82181e58
	ctx.lr = 0x82220BF0;
	sub_82181E58(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82181f38
	ctx.lr = 0x82220C00;
	sub_82181F38(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220C28"))) PPC_WEAK_FUNC(sub_82220C28);
PPC_FUNC_IMPL(__imp__sub_82220C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r8,-1360
	ctx.r6.s64 = ctx.r8.s64 + -1360;
	// lwz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lfs f0,912(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// stw r11,15168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15168, ctx.r11.u32);
	// lhz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 15168);
	// clrlwi r4,r11,17
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFF;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220C70"))) PPC_WEAK_FUNC(sub_82220C70);
PPC_FUNC_IMPL(__imp__sub_82220C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82181d28
	ctx.lr = 0x82220C80;
	sub_82181D28(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-1360
	ctx.r11.s64 = ctx.r11.s64 + -1360;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82220ca4
	if (!ctx.cr6.lt) goto loc_82220CA4;
	// lfd f13,1616(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1616);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82220CA4:
	// lfd f13,984(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 984);
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f0,1624(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1624);
	// lfd f13,960(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 960);
	// fmadd f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220CD8"))) PPC_WEAK_FUNC(sub_82220CD8);
PPC_FUNC_IMPL(__imp__sub_82220CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,15132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82220d04
	if (ctx.cr6.lt) goto loc_82220D04;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,15176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82220d08
	if (!ctx.cr6.gt) goto loc_82220D08;
loc_82220D04:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82220D08:
	// bl 0x820c9bc0
	ctx.lr = 0x82220D0C;
	sub_820C9BC0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// lfd f0,984(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 984);
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lfd f0,1624(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1624);
	// lfd f13,960(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 960);
	// fmadd f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220D48"))) PPC_WEAK_FUNC(sub_82220D48);
PPC_FUNC_IMPL(__imp__sub_82220D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82220d5c
	if (ctx.cr6.lt) goto loc_82220D5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82220D5C:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// addi r3,r11,220
	ctx.r3.s64 = ctx.r11.s64 + 220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220D78"))) PPC_WEAK_FUNC(sub_82220D78);
PPC_FUNC_IMPL(__imp__sub_82220D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// ori r9,r10,56324
	ctx.r9.u64 = ctx.r10.u64 | 56324;
	// addi r11,r11,13080
	ctx.r11.s64 = ctx.r11.s64 + 13080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x82220db4
	if (ctx.cr6.lt) goto loc_82220DB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82220eac
	goto loc_82220EAC;
loc_82220DB4:
	// addis r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 262144;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// mulli r9,r10,988
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(988));
	// addi r8,r8,-9208
	ctx.r8.s64 = ctx.r8.s64 + -9208;
	// ori r4,r7,47112
	ctx.r4.u64 = ctx.r7.u64 | 47112;
	// ori r7,r6,47116
	ctx.r7.u64 = ctx.r6.u64 | 47116;
	// ori r6,r5,56324
	ctx.r6.u64 = ctx.r5.u64 | 56324;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// ori r5,r9,47120
	ctx.r5.u64 = ctx.r9.u64 | 47120;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lfsx f0,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r4,47124
	ctx.r3.u64 = ctx.r4.u64 | 47124;
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stb r30,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r30.u8);
	// lwz r10,-3208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3208);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x82129710
	ctx.lr = 0x82220E4C;
	sub_82129710(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwz r11,-3204(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -3204);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// bl 0x82129710
	ctx.lr = 0x82220E74;
	sub_82129710(ctx, base);
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220ea8
	if (ctx.cr6.eq) goto loc_82220EA8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3216);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x82129710
	ctx.lr = 0x82220EA8;
	sub_82129710(ctx, base);
loc_82220EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82220EAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220EC8"))) PPC_WEAK_FUNC(sub_82220EC8);
PPC_FUNC_IMPL(__imp__sub_82220EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// addi r9,r11,-1360
	ctx.r9.s64 = ctx.r11.s64 + -1360;
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lfs f13,15176(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15176);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lfs f0,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r31,r7,13080
	ctx.r31.s64 = ctx.r7.s64 + 13080;
	// ori r30,r10,47124
	ctx.r30.u64 = ctx.r10.u64 | 47124;
	// ori r6,r6,47112
	ctx.r6.u64 = ctx.r6.u64 | 47112;
	// ori r5,r5,56324
	ctx.r5.u64 = ctx.r5.u64 | 56324;
	// ori r4,r4,47116
	ctx.r4.u64 = ctx.r4.u64 | 47116;
	// ori r3,r3,47120
	ctx.r3.u64 = ctx.r3.u64 | 47120;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,13080(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13080, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stfsx f13,r31,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r8,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220F48"))) PPC_WEAK_FUNC(sub_82220F48);
PPC_FUNC_IMPL(__imp__sub_82220F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220F50"))) PPC_WEAK_FUNC(sub_82220F50);
PPC_FUNC_IMPL(__imp__sub_82220F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221000
	if (ctx.cr6.eq) goto loc_82221000;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82221000
	if (!ctx.cr6.gt) goto loc_82221000;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_82220F7C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// bl 0x82220d78
	ctx.lr = 0x82220F8C;
	sub_82220D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222101c
	if (ctx.cr6.eq) goto loc_8222101C;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r7,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r7.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// ble 0x82220ff4
	if (!ctx.cr0.gt) goto loc_82220FF4;
loc_82220FA8:
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8222101c
	if (!ctx.cr6.lt) goto loc_8222101C;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// addic. r11,r8,220
	ctx.xer.ca = ctx.r8.u32 > 4294967075;
	ctx.r11.s64 = ctx.r8.s64 + 220;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222101c
	if (ctx.cr0.eq) goto loc_8222101C;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blt cr6,0x82220fa8
	if (ctx.cr6.lt) goto loc_82220FA8;
loc_82220FF4:
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82220f7c
	if (!ctx.cr6.eq) goto loc_82220F7C;
loc_82221000:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82221004:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8222101C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82221004
	goto loc_82221004;
}

__attribute__((alias("__imp__sub_82221028"))) PPC_WEAK_FUNC(sub_82221028);
PPC_FUNC_IMPL(__imp__sub_82221028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822210d8
	if (ctx.cr6.eq) goto loc_822210D8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822210d8
	if (!ctx.cr6.gt) goto loc_822210D8;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_82221054:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// bl 0x82220d78
	ctx.lr = 0x82221064;
	sub_82220D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822210f4
	if (ctx.cr6.eq) goto loc_822210F4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r7,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r7.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// ble 0x822210cc
	if (!ctx.cr0.gt) goto loc_822210CC;
loc_82221080:
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x822210f4
	if (!ctx.cr6.lt) goto loc_822210F4;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// addic. r11,r8,220
	ctx.xer.ca = ctx.r8.u32 > 4294967075;
	ctx.r11.s64 = ctx.r8.s64 + 220;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822210f4
	if (ctx.cr0.eq) goto loc_822210F4;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blt cr6,0x82221080
	if (ctx.cr6.lt) goto loc_82221080;
loc_822210CC:
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82221054
	if (!ctx.cr6.eq) goto loc_82221054;
loc_822210D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822210DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822210F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822210dc
	goto loc_822210DC;
}

__attribute__((alias("__imp__sub_82221100"))) PPC_WEAK_FUNC(sub_82221100);
PPC_FUNC_IMPL(__imp__sub_82221100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82219240
	ctx.lr = 0x82221114;
	sub_82219240(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r9,r11,13080
	ctx.r9.s64 = ctx.r11.s64 + 13080;
	// ori r8,r10,47120
	ctx.r8.u64 = ctx.r10.u64 | 47120;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x82219240
	ctx.lr = 0x82221134;
	sub_82219240(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,47124
	ctx.r6.u64 = ctx.r7.u64 | 47124;
	// stwx r3,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221150"))) PPC_WEAK_FUNC(sub_82221150);
PPC_FUNC_IMPL(__imp__sub_82221150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r8,r11,-1360
	ctx.r8.s64 = ctx.r11.s64 + -1360;
	// addi r7,r10,13080
	ctx.r7.s64 = ctx.r10.s64 + 13080;
	// ori r6,r9,47116
	ctx.r6.u64 = ctx.r9.u64 | 47116;
	// lfs f0,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221178"))) PPC_WEAK_FUNC(sub_82221178);
PPC_FUNC_IMPL(__imp__sub_82221178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r8,r11,-1360
	ctx.r8.s64 = ctx.r11.s64 + -1360;
	// addi r7,r10,13080
	ctx.r7.s64 = ctx.r10.s64 + 13080;
	// ori r6,r9,47112
	ctx.r6.u64 = ctx.r9.u64 | 47112;
	// lfs f0,64(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822211A0"))) PPC_WEAK_FUNC(sub_822211A0);
PPC_FUNC_IMPL(__imp__sub_822211A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x822211A8;
	__savegprlr_29(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// addi r9,r11,-1360
	ctx.r9.s64 = ctx.r11.s64 + -1360;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lfs f12,15176(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15176);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lfs f0,1588(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lfs f13,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stfs f0,15172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15172, temp.u32);
	// addi r31,r7,13080
	ctx.r31.s64 = ctx.r7.s64 + 13080;
	// ori r30,r3,47120
	ctx.r30.u64 = ctx.r3.u64 | 47120;
	// ori r29,r10,47124
	ctx.r29.u64 = ctx.r10.u64 | 47124;
	// ori r6,r6,47112
	ctx.r6.u64 = ctx.r6.u64 | 47112;
	// ori r5,r5,56324
	ctx.r5.u64 = ctx.r5.u64 | 56324;
	// ori r4,r4,47116
	ctx.r4.u64 = ctx.r4.u64 | 47116;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stfsx f13,r31,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,13080(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13080, ctx.r11.u32);
	// stfsx f12,r31,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r9,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// stwx r8,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221228"))) PPC_WEAK_FUNC(sub_82221228);
PPC_FUNC_IMPL(__imp__sub_82221228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843dc
	ctx.lr = 0x82221230;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r29,r11,13080
	ctx.r29.s64 = ctx.r11.s64 + 13080;
	// ori r9,r10,56324
	ctx.r9.u64 = ctx.r10.u64 | 56324;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bgt cr6,0x8222126c
	if (ctx.cr6.gt) goto loc_8222126C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8218442c
	__restgprlr_17(ctx, base);
	return;
loc_8222126C:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r27,r11,2308
	ctx.r27.s64 = ctx.r11.s64 + 2308;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822212a4
	if (ctx.cr6.eq) goto loc_822212A4;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r8,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r8.u32);
	// lfs f0,15176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// lwz r9,784(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 4;
	// stw r7,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r7.u32);
loc_822212A4:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r7,256(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,-1360
	ctx.r10.s64 = ctx.r10.s64 + -1360;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// lfs f0,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x822212d4
	if (ctx.cr6.eq) goto loc_822212D4;
	// stw r9,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r9.u32);
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// lwz r7,784(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stw r6,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r6.u32);
loc_822212D4:
	// lwz r7,248(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lfs f31,1132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1132);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x822212fc
	if (ctx.cr6.eq) goto loc_822212FC;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// stfs f31,280(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// lwz r7,784(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stw r6,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r6.u32);
loc_822212FC:
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82221318
	if (ctx.cr6.eq) goto loc_82221318;
	// stw r8,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r8.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// stw r8,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r8.u32);
loc_82221318:
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82221334
	if (ctx.cr6.eq) goto loc_82221334;
	// stw r9,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r9.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// stw r8,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r8.u32);
loc_82221334:
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82221354
	if (ctx.cr6.eq) goto loc_82221354;
	// stw r9,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// stfs f0,292(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
loc_82221354:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r26,r11,3264
	ctx.r26.s64 = ctx.r11.s64 + 3264;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,3264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3264);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82221378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r8,r9,56540
	ctx.r8.u64 = ctx.r9.u64 | 56540;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r5,r29,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222139C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// li r4,9
	ctx.r4.s64 = 9;
	// ori r11,r5,56544
	ctx.r11.u64 = ctx.r5.u64 | 56544;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x822213C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// bl 0x820d4d68
	ctx.lr = 0x822213D8;
	sub_820D4D68(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// beq cr6,0x8222143c
	if (ctx.cr6.eq) goto loc_8222143C;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221410
	if (ctx.cr6.eq) goto loc_82221410;
	// lwz r3,3428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82221410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82221410:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,3428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82221434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82207928
	ctx.lr = 0x8222143C;
	sub_82207928(ctx, base);
loc_8222143C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// stw r19,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r19.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82221464
	if (ctx.cr6.eq) goto loc_82221464;
	// stw r19,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r19.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
loc_82221464:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82221708
	if (!ctx.cr6.gt) goto loc_82221708;
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// addi r31,r11,-9080
	ctx.r31.s64 = ctx.r11.s64 + -9080;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// li r22,16
	ctx.r22.s64 = 16;
	// li r23,32
	ctx.r23.s64 = 32;
	// li r24,48
	ctx.r24.s64 = 48;
	// li r20,64
	ctx.r20.s64 = 64;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// addi r18,r11,15172
	ctx.r18.s64 = ctx.r11.s64 + 15172;
loc_82221498:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82129710
	ctx.lr = 0x822214A8;
	sub_82129710(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r30,524
	ctx.r3.s64 = ctx.r30.s64 + 524;
	// bl 0x82184480
	ctx.lr = 0x822214BC;
	sub_82184480(ctx, base);
	// addi r11,r30,776
	ctx.r11.s64 = ctx.r30.s64 + 776;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 776);
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// oris r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 1048576;
	// std r10,776(r30)
	PPC_STORE_U64(ctx.r30.u32 + 776, ctx.r10.u64);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r8,776(r30)
	PPC_STORE_U64(ctx.r30.u32 + 776, ctx.r8.u64);
	// bl 0x82129710
	ctx.lr = 0x822214E8;
	sub_82129710(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r30,652
	ctx.r3.s64 = ctx.r30.s64 + 652;
	// bl 0x82184480
	ctx.lr = 0x822214FC;
	sub_82184480(ctx, base);
	// ld r7,776(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 776);
	// oris r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 1048576;
	// std r6,776(r30)
	PPC_STORE_U64(ctx.r30.u32 + 776, ctx.r6.u64);
	// lbz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222152c
	if (ctx.cr6.eq) goto loc_8222152C;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82129710
	ctx.lr = 0x82221524;
	sub_82129710(ctx, base);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82221588
	goto loc_82221588;
loc_8222152C:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r17,88(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vpermwi128 v61,v62,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x15));
	// vpermwi128 v60,v62,186
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x45));
	// vpermwi128 v59,v62,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x51));
	// vpermwi128 v58,v62,171
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x54));
	// stvlx128 v61,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r10,r22
	ea = ctx.r10.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r9,r22
	ea = ctx.r9.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r8,r23
	ea = ctx.r8.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r7,r23
	ea = ctx.r7.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r6,r24
	ea = ctx.r6.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// stvlx128 v58,r5,r24
	ea = ctx.r5.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r4,r20
	ea = ctx.r4.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
loc_82221588:
	// addi r3,r30,588
	ctx.r3.s64 = ctx.r30.s64 + 588;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82184480
	ctx.lr = 0x82221598;
	sub_82184480(ctx, base);
	// ld r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 776);
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// std r10,776(r30)
	PPC_STORE_U64(ctx.r30.u32 + 776, ctx.r10.u64);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x822215e8
	if (!ctx.cr6.gt) goto loc_822215E8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822215E8:
	// bl 0x82180a88
	ctx.lr = 0x822215EC;
	sub_82180A88(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822216b0
	if (!ctx.cr6.gt) goto loc_822216B0;
	// lfs f0,0(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82221618:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82221690
	if (!ctx.cr0.gt) goto loc_82221690;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82221634:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82221644
	if (ctx.cr6.eq) goto loc_82221644;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8222166c
	if (!ctx.cr6.gt) goto loc_8222166C;
loc_82221644:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8222166C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82221634
	if (ctx.cr6.lt) goto loc_82221634;
loc_82221690:
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82221618
	if (ctx.cr6.lt) goto loc_82221618;
loc_822216B0:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82224c78
	ctx.lr = 0x822216B8;
	sub_82224C78(ctx, base);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822216f4
	if (!ctx.cr6.gt) goto loc_822216F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225488
	ctx.lr = 0x822216CC;
	sub_82225488(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822216F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822216F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183a08
	ctx.lr = 0x822216FC;
	sub_82183A08(ctx, base);
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r31,r31,988
	ctx.r31.s64 = ctx.r31.s64 + 988;
	// bne 0x82221498
	if (!ctx.cr0.eq) goto loc_82221498;
loc_82221708:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8218442c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221718"))) PPC_WEAK_FUNC(sub_82221718);
PPC_FUNC_IMPL(__imp__sub_82221718) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221720"))) PPC_WEAK_FUNC(sub_82221720);
PPC_FUNC_IMPL(__imp__sub_82221720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221728"))) PPC_WEAK_FUNC(sub_82221728);
PPC_FUNC_IMPL(__imp__sub_82221728) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221730"))) PPC_WEAK_FUNC(sub_82221730);
PPC_FUNC_IMPL(__imp__sub_82221730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221738"))) PPC_WEAK_FUNC(sub_82221738);
PPC_FUNC_IMPL(__imp__sub_82221738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x82221740;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32168
	ctx.r28.s64 = -2108162048;
	// lis r29,-32168
	ctx.r29.s64 = -2108162048;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-3224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82221798
	if (!ctx.cr6.gt) goto loc_82221798;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82221760:
	// lwz r10,-3260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3260);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221788
	if (ctx.cr6.eq) goto loc_82221788;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82221784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-3224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3224);
loc_82221788:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82221760
	if (ctx.cr6.lt) goto loc_82221760;
loc_82221798:
	// lwz r3,-3260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3260);
	// bl 0x82183a08
	ctx.lr = 0x822217A0;
	sub_82183A08(ctx, base);
	// lis r29,-32168
	ctx.r29.s64 = -2108162048;
	// lis r28,-32168
	ctx.r28.s64 = -2108162048;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-3220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822217dc
	if (!ctx.cr6.gt) goto loc_822217DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822217BC:
	// lwz r11,-11556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11556);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82183380
	ctx.lr = 0x822217C8;
	sub_82183380(ctx, base);
	// lwz r11,-3220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3220);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822217bc
	if (ctx.cr6.lt) goto loc_822217BC;
loc_822217DC:
	// lwz r3,-11556(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11556);
	// bl 0x82183a08
	ctx.lr = 0x822217E4;
	sub_82183A08(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r31,r11,-3256
	ctx.r31.s64 = ctx.r11.s64 + -3256;
loc_822217F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221810
	if (ctx.cr6.eq) goto loc_82221810;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82221810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82221810:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822217f0
	if (!ctx.cr0.eq) goto loc_822217F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221828"))) PPC_WEAK_FUNC(sub_82221828);
PPC_FUNC_IMPL(__imp__sub_82221828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x82221830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82221854
	if (!ctx.cr6.eq) goto loc_82221854;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82221860
	goto loc_82221860;
loc_82221854:
	// bl 0x82184f50
	ctx.lr = 0x82221858;
	sub_82184F50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82221860:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221878
	if (ctx.cr6.eq) goto loc_82221878;
loc_8222186C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
loc_82221878:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82221888:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822218ac
	if (ctx.cr6.eq) goto loc_822218AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82185340
	ctx.lr = 0x822218A8;
	sub_82185340(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_822218AC:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822218e8
	if (ctx.cr6.eq) goto loc_822218E8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822218f0
	if (ctx.cr6.eq) goto loc_822218F0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r30,254
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 254, ctx.xer);
	// blt cr6,0x82221888
	if (ctx.cr6.lt) goto loc_82221888;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
loc_822218E8:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222186c
	if (ctx.cr6.eq) goto loc_8222186C;
loc_822218F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221908"))) PPC_WEAK_FUNC(sub_82221908);
PPC_FUNC_IMPL(__imp__sub_82221908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x822219c8
	if (!ctx.cr6.eq) goto loc_822219C8;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// bne cr6,0x822219c8
	if (!ctx.cr6.eq) goto loc_822219C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82221930:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82221930
	if (!ctx.cr6.eq) goto loc_82221930;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82221964:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8222197c
	if (ctx.cr6.lt) goto loc_8222197C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8222197c
	if (ctx.cr6.gt) goto loc_8222197C;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x822219a8
	goto loc_822219A8;
loc_8222197C:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82221994
	if (ctx.cr6.lt) goto loc_82221994;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x82221994
	if (ctx.cr6.gt) goto loc_82221994;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// b 0x822219a8
	goto loc_822219A8;
loc_82221994:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x822219b0
	if (ctx.cr6.lt) goto loc_822219B0;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x822219b0
	if (ctx.cr6.gt) goto loc_822219B0;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
loc_822219A8:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_822219B0:
	// lbzu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x82221964
	if (!ctx.cr6.eq) goto loc_82221964;
	// blr 
	return;
loc_822219C8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82183b50
	sub_82183B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822219D8"))) PPC_WEAK_FUNC(sub_822219D8);
PPC_FUNC_IMPL(__imp__sub_822219D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843f4
	ctx.lr = 0x822219E0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r5,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r5.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r23.u32);
	// addi r4,r11,6499
	ctx.r4.s64 = ctx.r11.s64 + 6499;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c1278
	ctx.lr = 0x82221A24;
	sub_820C1278(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r24,44
	ctx.r24.s64 = 44;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82221a64
	if (!ctx.cr6.gt) goto loc_82221A64;
loc_82221A38:
	// stb r24,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r24.u8);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c9588
	ctx.lr = 0x82221A4C;
	sub_820C9588(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82221ab8
	if (ctx.cr6.eq) goto loc_82221AB8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82221a38
	if (ctx.cr6.lt) goto loc_82221A38;
loc_82221A64:
	// stb r24,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r24.u8);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c9588
	ctx.lr = 0x82221A78;
	sub_820C9588(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82221a84
	if (!ctx.cr6.eq) goto loc_82221A84;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82221A84:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82221af4
	if (!ctx.cr6.eq) goto loc_82221AF4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9350
	ctx.lr = 0x82221AA0;
	sub_820C9350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c3cb8
	ctx.lr = 0x82221AAC;
	sub_820C3CB8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9a70
	ctx.lr = 0x82221AB4;
	sub_820C9A70(ctx, base);
	// b 0x82221b20
	goto loc_82221B20;
loc_82221AB8:
	// stw r23,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r23.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// stw r28,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r28,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r28.u8);
	// bl 0x820c3cb8
	ctx.lr = 0x82221AD0;
	sub_820C3CB8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221ae4
	if (ctx.cr6.lt) goto loc_82221AE4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82183380
	ctx.lr = 0x82221AE4;
	sub_82183380(ctx, base);
loc_82221AE4:
	// stw r23,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r23.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// b 0x82221b58
	goto loc_82221B58;
loc_82221AF4:
	// subf r11,r29,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9350
	ctx.lr = 0x82221B0C;
	sub_820C9350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c3cb8
	ctx.lr = 0x82221B18;
	sub_820C3CB8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9a70
	ctx.lr = 0x82221B20;
	sub_820C9A70(ctx, base);
loc_82221B20:
	// stw r23,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r23.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// stw r28,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r28,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r28.u8);
	// bl 0x820c3cb8
	ctx.lr = 0x82221B38;
	sub_820C3CB8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221b4c
	if (ctx.cr6.lt) goto loc_82221B4C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82183380
	ctx.lr = 0x82221B4C;
	sub_82183380(ctx, base);
loc_82221B4C:
	// stw r23,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r23.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
loc_82221B58:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221b6c
	if (ctx.cr6.lt) goto loc_82221B6C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82183380
	ctx.lr = 0x82221B6C;
	sub_82183380(ctx, base);
loc_82221B6C:
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x82184444
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221B84"))) PPC_WEAK_FUNC(sub_82221B84);
PPC_FUNC_IMPL(__imp__sub_82221B84) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x820c9a70
	ctx.lr = 0x82221B9C;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221BAC"))) PPC_WEAK_FUNC(sub_82221BAC);
PPC_FUNC_IMPL(__imp__sub_82221BAC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x82221BC4;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221BD4"))) PPC_WEAK_FUNC(sub_82221BD4);
PPC_FUNC_IMPL(__imp__sub_82221BD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9a70
	ctx.lr = 0x82221BEC;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221BFC"))) PPC_WEAK_FUNC(sub_82221BFC);
PPC_FUNC_IMPL(__imp__sub_82221BFC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9a70
	ctx.lr = 0x82221C14;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221C30"))) PPC_WEAK_FUNC(sub_82221C30);
PPC_FUNC_IMPL(__imp__sub_82221C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843d0
	ctx.lr = 0x82221C38;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82184a6c
	ctx.lr = 0x82221C40;
	__savefpr_21(ctx, base);
	// addi r31,r1,-1408
	ctx.r31.s64 = ctx.r1.s64 + -1408;
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// lwz r14,3368(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	// bl 0x8220beb0
	ctx.lr = 0x82221C58;
	sub_8220BEB0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r18,15
	ctx.r18.s64 = 15;
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r18,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r18.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stb r29,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r29.u8);
	// addi r26,r11,-7972
	ctx.r26.s64 = ctx.r11.s64 + -7972;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820c1278
	ctx.lr = 0x82221C84;
	sub_820C1278(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// bl 0x82212da8
	ctx.lr = 0x82221C90;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x822bb760
	ctx.lr = 0x82221C9C;
	sub_822BB760(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r16,-1
	ctx.r16.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x820c1178
	ctx.lr = 0x82221CB8;
	sub_820C1178(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// bl 0x8220b1f8
	ctx.lr = 0x82221CC8;
	sub_8220B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82221ce0
	if (ctx.cr6.lt) goto loc_82221CE0;
	// lwz r3,496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// bl 0x82183380
	ctx.lr = 0x82221CE0;
	sub_82183380(ctx, base);
loc_82221CE0:
	// stw r18,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r18.u32);
	// stw r29,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r29.u32);
	// stb r29,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r29.u8);
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221d00
	if (ctx.cr6.lt) goto loc_82221D00;
	// lwz r3,720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// bl 0x82183380
	ctx.lr = 0x82221D00;
	sub_82183380(ctx, base);
loc_82221D00:
	// stw r18,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r18.u32);
	// stw r29,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r29.u32);
	// stb r29,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r29.u8);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221d20
	if (ctx.cr6.lt) goto loc_82221D20;
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x82183380
	ctx.lr = 0x82221D20;
	sub_82183380(ctx, base);
loc_82221D20:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r18,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r18.u32);
	// li r5,254
	ctx.r5.s64 = 254;
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
	// addi r15,r11,6499
	ctx.r15.s64 = ctx.r11.s64 + 6499;
	// stb r29,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,913
	ctx.r3.s64 = ctx.r31.s64 + 913;
	// lbz r11,6499(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6499);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stb r11,912(r31)
	PPC_STORE_U8(ctx.r31.u32 + 912, ctx.r11.u8);
	// bl 0x821849b0
	ctx.lr = 0x82221D50;
	sub_821849B0(ctx, base);
	// stw r18,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r18.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// stb r29,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r29.u8);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// bl 0x820d1bf0
	ctx.lr = 0x82221D64;
	sub_820D1BF0(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stb r25,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r25.u8);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stb r25,45(r10)
	PPC_STORE_U8(ctx.r10.u32 + 45, ctx.r25.u8);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82221fc0
	if (ctx.cr6.eq) goto loc_82221FC0;
loc_82221DA0:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82221db8
	if (!ctx.cr6.eq) goto loc_82221DB8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82221dc4
	goto loc_82221DC4;
loc_82221DB8:
	// bl 0x82184f50
	ctx.lr = 0x82221DBC;
	sub_82184F50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82221DC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221fc0
	if (!ctx.cr6.eq) goto loc_82221FC0;
	// stw r18,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r18.u32);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stb r29,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r29.u8);
	// addi r4,r31,912
	ctx.r4.s64 = ctx.r31.s64 + 912;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82221828
	ctx.lr = 0x82221DE8;
	sub_82221828(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221f9c
	if (ctx.cr6.eq) goto loc_82221F9C;
	// addi r11,r31,912
	ctx.r11.s64 = ctx.r31.s64 + 912;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82221DFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82221dfc
	if (!ctx.cr6.eq) goto loc_82221DFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r31,912
	ctx.r4.s64 = ctx.r31.s64 + 912;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x820c1278
	ctx.lr = 0x82221E24;
	sub_820C1278(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x820c3d50
	ctx.lr = 0x82221E38;
	sub_820C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82221f9c
	if (ctx.cr6.eq) goto loc_82221F9C;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c1178
	ctx.lr = 0x82221E60;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x822219d8
	ctx.lr = 0x82221E70;
	sub_822219D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x820c3cb8
	ctx.lr = 0x82221E7C;
	sub_820C3CB8(ctx, base);
	// lwz r11,804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221e90
	if (ctx.cr6.lt) goto loc_82221E90;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x82183380
	ctx.lr = 0x82221E90;
	sub_82183380(ctx, base);
loc_82221E90:
	// stw r18,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r18.u32);
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// stw r29,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r29.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stb r29,784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 784, ctx.r29.u8);
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x820d1710
	ctx.lr = 0x82221EAC;
	sub_820D1710(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82221ef4
	if (ctx.cr6.eq) goto loc_82221EF4;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82221ed4
	if (ctx.cr6.lt) goto loc_82221ED4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82221ED4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x820c3d50
	ctx.lr = 0x82221EE4;
	sub_820C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82221ef4
	if (ctx.cr6.lt) goto loc_82221EF4;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// b 0x82221f00
	goto loc_82221F00;
loc_82221EF4:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82221F00:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82221f3c
	if (!ctx.cr6.eq) goto loc_82221F3C;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x820c3d50
	ctx.lr = 0x82221F20;
	sub_820C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82221f3c
	if (ctx.cr6.eq) goto loc_82221F3C;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c93a0
	ctx.lr = 0x82221F34;
	sub_820C93A0(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82221F3C:
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c1178
	ctx.lr = 0x82221F5C;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x822219d8
	ctx.lr = 0x82221F6C;
	sub_822219D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x820c3cb8
	ctx.lr = 0x82221F78;
	sub_820C3CB8(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221f8c
	if (ctx.cr6.lt) goto loc_82221F8C;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82183380
	ctx.lr = 0x82221F8C;
	sub_82183380(ctx, base);
loc_82221F8C:
	// stw r18,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r18.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r29,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r29.u32);
	// stb r29,848(r31)
	PPC_STORE_U8(ctx.r31.u32 + 848, ctx.r29.u8);
loc_82221F9C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221fb0
	if (ctx.cr6.lt) goto loc_82221FB0;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82183380
	ctx.lr = 0x82221FB0;
	sub_82183380(ctx, base);
loc_82221FB0:
	// stw r18,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r18.u32);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stb r29,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r29.u8);
	// b 0x82221da0
	goto loc_82221DA0;
loc_82221FC0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,-3224(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3224, ctx.r27.u32);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// stw r28,-3220(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3220, ctx.r28.u32);
	// ble cr6,0x82221fe8
	if (!ctx.cr6.gt) goto loc_82221FE8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82221FE8:
	// bl 0x82180a88
	ctx.lr = 0x82221FEC;
	sub_82180A88(ctx, base);
	// lis r21,-32168
	ctx.r21.s64 = -2108162048;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// stw r3,-3260(r21)
	PPC_STORE_U32(ctx.r21.u32 + -3260, ctx.r3.u32);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82222004
	if (!ctx.cr6.gt) goto loc_82222004;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82222004:
	// bl 0x82180a88
	ctx.lr = 0x82222008;
	sub_82180A88(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lis r17,-32168
	ctx.r17.s64 = -2108162048;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r18,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r18.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r3,-11556(r17)
	PPC_STORE_U32(ctx.r17.u32 + -11556, ctx.r3.u32);
	// stb r29,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r29.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822220dc
	if (ctx.cr6.eq) goto loc_822220DC;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r28,r10,-7944
	ctx.r28.s64 = ctx.r10.s64 + -7944;
loc_82222038:
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x820c8340
	ctx.lr = 0x8222204C;
	sub_820C8340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x820c3cb8
	ctx.lr = 0x82222058;
	sub_820C3CB8(ctx, base);
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222206c
	if (ctx.cr6.lt) goto loc_8222206C;
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82183380
	ctx.lr = 0x8222206C;
	sub_82183380(ctx, base);
loc_8222206C:
	// stw r18,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r18.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// stb r29,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r29.u8);
	// bl 0x821809d0
	ctx.lr = 0x82222080;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822220b4
	if (ctx.cr6.eq) goto loc_822220B4;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822220a0
	if (!ctx.cr6.lt) goto loc_822220A0;
	// addi r5,r31,272
	ctx.r5.s64 = ctx.r31.s64 + 272;
loc_822220A0:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82217190
	ctx.lr = 0x822220AC;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822220b8
	goto loc_822220B8;
loc_822220B4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822220B8:
	// lwz r10,-3260(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3260);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x820d1dd0
	ctx.lr = 0x822220CC;
	sub_820D1DD0(ctx, base);
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82222038
	if (!ctx.cr6.eq) goto loc_82222038;
loc_822220DC:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822220f8
	if (ctx.cr6.eq) goto loc_822220F8;
	// bl 0x82184230
	ctx.lr = 0x822220F4;
	sub_82184230(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_822220F8:
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x8220beb0
	ctx.lr = 0x82222100;
	sub_8220BEB0(ctx, base);
	// stw r18,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r18.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r29,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r29.u8);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x820c1278
	ctx.lr = 0x8222211C;
	sub_820C1278(ctx, base);
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82212da8
	ctx.lr = 0x82222128;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x822bb760
	ctx.lr = 0x82222134;
	sub_822BB760(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x820c1178
	ctx.lr = 0x8222214C;
	sub_820C1178(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x8220b1f8
	ctx.lr = 0x8222215C;
	sub_8220B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222174
	if (ctx.cr6.lt) goto loc_82222174;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x82183380
	ctx.lr = 0x82222174;
	sub_82183380(ctx, base);
loc_82222174:
	// stw r18,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r18.u32);
	// stw r29,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r29.u32);
	// stb r29,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r29.u8);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222194
	if (ctx.cr6.lt) goto loc_82222194;
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82183380
	ctx.lr = 0x82222194;
	sub_82183380(ctx, base);
loc_82222194:
	// stw r18,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r18.u32);
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
	// stb r29,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r29.u8);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822221b4
	if (ctx.cr6.lt) goto loc_822221B4;
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// bl 0x82183380
	ctx.lr = 0x822221B4;
	sub_82183380(ctx, base);
loc_822221B4:
	// stw r18,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r18.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// stb r29,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r29.u8);
	// stw r18,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r18.u32);
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222276c
	if (ctx.cr6.eq) goto loc_8222276C;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r19,r11,9824
	ctx.r19.s64 = ctx.r11.s64 + 9824;
loc_822221E8:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222200
	if (!ctx.cr6.eq) goto loc_82222200;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222220c
	goto loc_8222220C;
loc_82222200:
	// bl 0x82184f50
	ctx.lr = 0x82222204;
	sub_82184F50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8222220C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222276c
	if (!ctx.cr6.eq) goto loc_8222276C;
	// stw r18,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r18.u32);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stb r29,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r29.u8);
	// addi r4,r31,912
	ctx.r4.s64 = ctx.r31.s64 + 912;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82221828
	ctx.lr = 0x82222230;
	sub_82221828(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222764
	if (ctx.cr6.eq) goto loc_82222764;
	// addi r11,r31,912
	ctx.r11.s64 = ctx.r31.s64 + 912;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82222244:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82222244
	if (!ctx.cr6.eq) goto loc_82222244;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r31,912
	ctx.r4.s64 = ctx.r31.s64 + 912;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x820c1278
	ctx.lr = 0x8222226C;
	sub_820C1278(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x820c3d50
	ctx.lr = 0x82222280;
	sub_820C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82222740
	if (ctx.cr6.eq) goto loc_82222740;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c1178
	ctx.lr = 0x822222A8;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,752
	ctx.r3.s64 = ctx.r31.s64 + 752;
	// bl 0x822219d8
	ctx.lr = 0x822222B8;
	sub_822219D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x820c3cb8
	ctx.lr = 0x822222C4;
	sub_820C3CB8(ctx, base);
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822222d8
	if (ctx.cr6.lt) goto loc_822222D8;
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// bl 0x82183380
	ctx.lr = 0x822222D8;
	sub_82183380(ctx, base);
loc_822222D8:
	// stw r18,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 752, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x820c1178
	ctx.lr = 0x82222304;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x822219d8
	ctx.lr = 0x82222314;
	sub_822219D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222324
	if (ctx.cr6.lt) goto loc_82222324;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82222324:
	// bl 0x82221908
	ctx.lr = 0x82222328;
	sub_82221908(ctx, base);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222340
	if (ctx.cr6.lt) goto loc_82222340;
	// lwz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// bl 0x82183380
	ctx.lr = 0x82222340;
	sub_82183380(ctx, base);
loc_82222340:
	// stw r18,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x820c1178
	ctx.lr = 0x8222236C;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x822219d8
	ctx.lr = 0x8222237C;
	sub_822219D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222238c
	if (ctx.cr6.lt) goto loc_8222238C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222238C:
	// bl 0x82183b50
	ctx.lr = 0x82222390;
	sub_82183B50(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822223a8
	if (ctx.cr6.lt) goto loc_822223A8;
	// lwz r3,880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// bl 0x82183380
	ctx.lr = 0x822223A8;
	sub_82183380(ctx, base);
loc_822223A8:
	// stw r18,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,880(r31)
	PPC_STORE_U8(ctx.r31.u32 + 880, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x820c1178
	ctx.lr = 0x822223D4;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x822219d8
	ctx.lr = 0x822223E4;
	sub_822219D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822223f4
	if (ctx.cr6.lt) goto loc_822223F4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_822223F4:
	// bl 0x82183b50
	ctx.lr = 0x822223F8;
	sub_82183B50(ctx, base);
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222410
	if (ctx.cr6.lt) goto loc_82222410;
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// bl 0x82183380
	ctx.lr = 0x82222410;
	sub_82183380(ctx, base);
loc_82222410:
	// stw r18,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x820c1178
	ctx.lr = 0x8222243C;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x822219d8
	ctx.lr = 0x8222244C;
	sub_822219D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222245c
	if (ctx.cr6.lt) goto loc_8222245C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222245C:
	// bl 0x82183b50
	ctx.lr = 0x82222460;
	sub_82183B50(ctx, base);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222478
	if (ctx.cr6.lt) goto loc_82222478;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x82183380
	ctx.lr = 0x82222478;
	sub_82183380(ctx, base);
loc_82222478:
	// stw r18,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x820c1178
	ctx.lr = 0x822224A4;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// bl 0x822219d8
	ctx.lr = 0x822224B4;
	sub_822219D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822224c4
	if (ctx.cr6.lt) goto loc_822224C4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_822224C4:
	// bl 0x82183b50
	ctx.lr = 0x822224C8;
	sub_82183B50(ctx, base);
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822224e0
	if (ctx.cr6.lt) goto loc_822224E0;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x82183380
	ctx.lr = 0x822224E0;
	sub_82183380(ctx, base);
loc_822224E0:
	// stw r18,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x820c1178
	ctx.lr = 0x8222250C;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,592
	ctx.r3.s64 = ctx.r31.s64 + 592;
	// bl 0x822219d8
	ctx.lr = 0x8222251C;
	sub_822219D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222252c
	if (ctx.cr6.lt) goto loc_8222252C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222252C:
	// bl 0x82183b50
	ctx.lr = 0x82222530;
	sub_82183B50(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222548
	if (ctx.cr6.lt) goto loc_82222548;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// bl 0x82183380
	ctx.lr = 0x82222548;
	sub_82183380(ctx, base);
loc_82222548:
	// stw r18,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r18.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r29,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r29.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r18,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r18.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x820c1178
	ctx.lr = 0x82222574;
	sub_820C1178(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// bl 0x822219d8
	ctx.lr = 0x82222584;
	sub_822219D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222594
	if (ctx.cr6.lt) goto loc_82222594;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82222594:
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lbz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822225ac
	if (ctx.cr6.lt) goto loc_822225AC;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82183380
	ctx.lr = 0x822225AC;
	sub_82183380(ctx, base);
loc_822225AC:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// stw r18,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r18.u32);
	// stw r29,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r29.u32);
	// cmpwi cr6,r11,76
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 76, ctx.xer);
	// stb r29,656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 656, ctx.r29.u8);
	// beq cr6,0x822226a4
	if (ctx.cr6.eq) goto loc_822226A4;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x8222263c
	if (ctx.cr6.eq) goto loc_8222263C;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// bne cr6,0x82222710
	if (!ctx.cr6.eq) goto loc_82222710;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x821809d0
	ctx.lr = 0x822225DC;
	sub_821809D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222262c
	if (ctx.cr6.eq) goto loc_8222262C;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c93a0
	ctx.lr = 0x822225F8;
	sub_820C93A0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3260(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// sth r29,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r29.u16);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r29.u8);
	// b 0x82222630
	goto loc_82222630;
loc_8222262C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82222630:
	// lwz r11,-11556(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11556);
	// stwx r10,r23,r11
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82222714
	goto loc_82222714;
loc_8222263C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x821809d0
	ctx.lr = 0x82222644;
	sub_821809D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222694
	if (ctx.cr6.eq) goto loc_82222694;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c93a0
	ctx.lr = 0x82222660;
	sub_820C93A0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3260(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// sth r20,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r20.u16);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r29.u8);
	// b 0x82222698
	goto loc_82222698;
loc_82222694:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82222698:
	// lwz r11,-11556(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11556);
	// stwx r10,r23,r11
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82222714
	goto loc_82222714;
loc_822226A4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x821809d0
	ctx.lr = 0x822226AC;
	sub_821809D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222700
	if (ctx.cr6.eq) goto loc_82222700;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c93a0
	ctx.lr = 0x822226C8;
	sub_820C93A0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3260(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3260);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// sth r9,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r9.u16);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r29.u8);
	// b 0x82222704
	goto loc_82222704;
loc_82222700:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82222704:
	// lwz r11,-11556(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11556);
	// stwx r10,r23,r11
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82222714
	goto loc_82222714;
loc_82222710:
	// lwz r11,-11556(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11556);
loc_82222714:
	// stw r22,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r22.u32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r19,60
	ctx.r3.s64 = ctx.r19.s64 + 60;
	// lwzx r30,r23,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// bl 0x820d4d68
	ctx.lr = 0x82222728;
	sub_820D4D68(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r19,44
	ctx.r3.s64 = ctx.r19.s64 + 44;
	// bl 0x820d4d68
	ctx.lr = 0x82222738;
	sub_820D4D68(ctx, base);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
loc_82222740:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222754
	if (ctx.cr6.lt) goto loc_82222754;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82183380
	ctx.lr = 0x82222754;
	sub_82183380(ctx, base);
loc_82222754:
	// stw r18,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r18.u32);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stb r29,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r29.u8);
	// b 0x822221e8
	goto loc_822221E8;
loc_82222764:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x820c9a70
	ctx.lr = 0x8222276C;
	sub_820C9A70(ctx, base);
loc_8222276C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821809d0
	ctx.lr = 0x82222774;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222279c
	if (ctx.cr6.eq) goto loc_8222279C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,-7928
	ctx.r5.s64 = ctx.r11.s64 + -7928;
	// li r4,79
	ctx.r4.s64 = 79;
	// bl 0x82217190
	ctx.lr = 0x82222794;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822227a0
	goto loc_822227A0;
loc_8222279C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822227A0:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r25,r10,-3256
	ctx.r25.s64 = ctx.r10.s64 + -3256;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
	// bl 0x821809d0
	ctx.lr = 0x822227B4;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822227dc
	if (ctx.cr6.eq) goto loc_822227DC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,-7900
	ctx.r5.s64 = ctx.r11.s64 + -7900;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82217190
	ctx.lr = 0x822227D4;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822227e0
	goto loc_822227E0;
loc_822227DC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822227E0:
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821809d0
	ctx.lr = 0x822227EC;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222814
	if (ctx.cr6.eq) goto loc_82222814;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,-7872
	ctx.r5.s64 = ctx.r11.s64 + -7872;
	// li r4,81
	ctx.r4.s64 = 81;
	// bl 0x82217190
	ctx.lr = 0x8222280C;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222818
	goto loc_82222818;
loc_82222814:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82222818:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821809d0
	ctx.lr = 0x82222824;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-7844
	ctx.r30.s64 = ctx.r11.s64 + -7844;
	// beq cr6,0x82222850
	if (ctx.cr6.eq) goto loc_82222850;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// bl 0x82217190
	ctx.lr = 0x82222848;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222854
	goto loc_82222854;
loc_82222850:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82222854:
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821809d0
	ctx.lr = 0x82222860;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222884
	if (ctx.cr6.eq) goto loc_82222884;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x82217190
	ctx.lr = 0x8222287C;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222888
	goto loc_82222888;
loc_82222884:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82222888:
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821809d0
	ctx.lr = 0x82222894;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822228bc
	if (ctx.cr6.eq) goto loc_822228BC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,-7812
	ctx.r5.s64 = ctx.r11.s64 + -7812;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x82217190
	ctx.lr = 0x822228B4;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822228c0
	goto loc_822228C0;
loc_822228BC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822228C0:
	// stw r11,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821809d0
	ctx.lr = 0x822228CC;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822228f4
	if (ctx.cr6.eq) goto loc_822228F4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,-7780
	ctx.r5.s64 = ctx.r11.s64 + -7780;
	// li r4,85
	ctx.r4.s64 = 85;
	// bl 0x82217190
	ctx.lr = 0x822228EC;
	sub_82217190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822228f8
	goto loc_822228F8;
loc_822228F4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822228F8:
	// stw r11,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821809d0
	ctx.lr = 0x82222904;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222928
	if (ctx.cr6.eq) goto loc_82222928;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,-7748
	ctx.r5.s64 = ctx.r11.s64 + -7748;
	// li r4,86
	ctx.r4.s64 = 86;
	// bl 0x82217190
	ctx.lr = 0x82222924;
	sub_82217190(ctx, base);
	// b 0x8222292c
	goto loc_8222292C;
loc_82222928:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8222292C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// stw r3,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r26,r10,4136
	ctx.r26.s64 = ctx.r10.s64 + 4136;
	// beq cr6,0x82222950
	if (ctx.cr6.eq) goto loc_82222950;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// stb r10,104(r26)
	PPC_STORE_U8(ctx.r26.u32 + 104, ctx.r10.u8);
loc_82222950:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r26,20
	ctx.r3.s64 = ctx.r26.s64 + 20;
	// addi r30,r11,-1360
	ctx.r30.s64 = ctx.r11.s64 + -1360;
	// lfs f30,976(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	ctx.f30.f64 = double(temp.f32);
	// lfs f22,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f22.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222970;
	sub_82223A38(ctx, base);
	// lfs f31,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// lfs f29,4060(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4060);
	ctx.f29.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222988;
	sub_82223A38(ctx, base);
	// lfs f21,4064(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4064);
	ctx.f21.f64 = double(temp.f32);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// lfs f2,4068(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4068);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82223990
	ctx.lr = 0x8222299C;
	sub_82223990(ctx, base);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223990
	ctx.lr = 0x822229AC;
	sub_82223990(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r27,r11,4768
	ctx.r27.s64 = ctx.r11.s64 + 4768;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822229cc
	if (ctx.cr6.eq) goto loc_822229CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r11.u32);
	// stb r10,104(r27)
	PPC_STORE_U8(ctx.r27.u32 + 104, ctx.r10.u8);
loc_822229CC:
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x82223a38
	ctx.lr = 0x822229DC;
	sub_82223A38(ctx, base);
	// lfs f29,4072(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4072);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,856(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223a38
	ctx.lr = 0x822229F4;
	sub_82223A38(ctx, base);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// lfs f2,4076(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4076);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223990
	ctx.lr = 0x82222A04;
	sub_82223990(ctx, base);
	// lfs f28,4080(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4080);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// lfs f2,4084(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4084);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82223990
	ctx.lr = 0x82222A18;
	sub_82223990(ctx, base);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// lfs f1,4088(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4088);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82223990
	ctx.lr = 0x82222A28;
	sub_82223990(ctx, base);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// lfs f1,4092(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82223990
	ctx.lr = 0x82222A38;
	sub_82223990(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r28,r11,4652
	ctx.r28.s64 = ctx.r11.s64 + 4652;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222a58
	if (ctx.cr6.eq) goto loc_82222A58;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
	// stb r10,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r10.u8);
loc_82222A58:
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222A68;
	sub_82223A38(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f23,15176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15176);
	ctx.f23.f64 = double(temp.f32);
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222A80;
	sub_82223A38(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lfs f2,4096(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4096);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223990
	ctx.lr = 0x82222A90;
	sub_82223990(ctx, base);
	// lfs f30,4104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lfs f1,4100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4100);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82223990
	ctx.lr = 0x82222AA4;
	sub_82223990(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lfs f2,4112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82223990
	ctx.lr = 0x82222AB4;
	sub_82223990(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lfs f2,4120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82223990
	ctx.lr = 0x82222AC4;
	sub_82223990(ctx, base);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r23,r11,12980
	ctx.r23.s64 = ctx.r11.s64 + 12980;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222ADC;
	sub_820C8FC0(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222AEC;
	sub_820C8FC0(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222AFC;
	sub_820C8FC0(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r27,r11,4252
	ctx.r27.s64 = ctx.r11.s64 + 4252;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222b1c
	if (ctx.cr6.eq) goto loc_82222B1C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r11.u32);
	// stb r10,104(r27)
	PPC_STORE_U8(ctx.r27.u32 + 104, ctx.r10.u8);
loc_82222B1C:
	// lfs f28,4128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4128);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// lfs f29,4124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4124);
	ctx.f29.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222B34;
	sub_82223A38(ctx, base);
	// lfs f27,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222B48;
	sub_82223A38(ctx, base);
	// lfs f26,4136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4136);
	ctx.f26.f64 = double(temp.f32);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// lfs f25,4132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4132);
	ctx.f25.f64 = double(temp.f32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82223990
	ctx.lr = 0x82222B60;
	sub_82223990(ctx, base);
	// lfs f24,4140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4140);
	ctx.f24.f64 = double(temp.f32);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223990
	ctx.lr = 0x82222B74;
	sub_82223990(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r28,r11,4368
	ctx.r28.s64 = ctx.r11.s64 + 4368;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222b94
	if (ctx.cr6.eq) goto loc_82222B94;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
	// stb r10,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r10.u8);
loc_82222B94:
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222BA4;
	sub_82223A38(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222BB4;
	sub_82223A38(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223990
	ctx.lr = 0x82222BC4;
	sub_82223990(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lfs f1,4144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// bl 0x82223990
	ctx.lr = 0x82222BD4;
	sub_82223990(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82223990
	ctx.lr = 0x82222BE4;
	sub_82223990(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r24,r11,13000
	ctx.r24.s64 = ctx.r11.s64 + 13000;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222BFC;
	sub_820C8FC0(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222C0C;
	sub_820C8FC0(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r28,r11,4484
	ctx.r28.s64 = ctx.r11.s64 + 4484;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222c2c
	if (ctx.cr6.eq) goto loc_82222C2C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
	// stb r10,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r10.u8);
loc_82222C2C:
	// lfs f31,4148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222C40;
	sub_82223A38(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// fmr f2,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222C50;
	sub_82223A38(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r26,r11,13020
	ctx.r26.s64 = ctx.r11.s64 + 13020;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222C68;
	sub_820C8FC0(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r28,r11,4020
	ctx.r28.s64 = ctx.r11.s64 + 4020;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222c88
	if (ctx.cr6.eq) goto loc_82222C88;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
	// stb r10,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r10.u8);
loc_82222C88:
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// lfs f1,4152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222C98;
	sub_82223A38(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// fmr f2,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222CA8;
	sub_82223A38(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r27,r11,13040
	ctx.r27.s64 = ctx.r11.s64 + 13040;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222CC0;
	sub_820C8FC0(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r28,r11,3904
	ctx.r28.s64 = ctx.r11.s64 + 3904;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222ce0
	if (ctx.cr6.eq) goto loc_82222CE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
	// stb r10,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r10.u8);
loc_82222CE0:
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// lfs f2,4156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4156);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222CF0;
	sub_82223A38(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lfs f1,4160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4160);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// bl 0x82223a38
	ctx.lr = 0x82222D00;
	sub_82223A38(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r28,r11,13060
	ctx.r28.s64 = ctx.r11.s64 + 13060;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x82222D18;
	sub_820C8FC0(ctx, base);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r30,r9,4600
	ctx.r30.s64 = ctx.r9.s64 + 4600;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x820d4d68
	ctx.lr = 0x82222D34;
	sub_820D4D68(ctx, base);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x820d4d68
	ctx.lr = 0x82222D4C;
	sub_820D4D68(ctx, base);
	// li r7,257
	ctx.r7.s64 = 257;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x820d4d68
	ctx.lr = 0x82222D64;
	sub_820D4D68(ctx, base);
	// li r6,768
	ctx.r6.s64 = 768;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x820d4d68
	ctx.lr = 0x82222D7C;
	sub_820D4D68(ctx, base);
	// li r5,769
	ctx.r5.s64 = 769;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x820d4d68
	ctx.lr = 0x82222D94;
	sub_820D4D68(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222db4
	if (ctx.cr6.eq) goto loc_82222DB4;
	// bl 0x82184230
	ctx.lr = 0x82222DB0;
	sub_82184230(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82222DB4:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222dc8
	if (ctx.cr6.lt) goto loc_82222DC8;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82183380
	ctx.lr = 0x82222DC8;
	sub_82183380(ctx, base);
loc_82222DC8:
	// stw r18,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r18.u32);
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x8220be38
	ctx.lr = 0x82222DDC;
	sub_8220BE38(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222df0
	if (ctx.cr6.lt) goto loc_82222DF0;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82183380
	ctx.lr = 0x82222DF0;
	sub_82183380(ctx, base);
loc_82222DF0:
	// stw r18,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r18.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stb r29,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r29.u8);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c94a8
	ctx.lr = 0x82222E04;
	sub_820C94A8(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222e18
	if (ctx.cr6.lt) goto loc_82222E18;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82183380
	ctx.lr = 0x82222E18;
	sub_82183380(ctx, base);
loc_82222E18:
	// stw r18,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r18.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// stb r29,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r29.u8);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x8220be38
	ctx.lr = 0x82222E2C;
	sub_8220BE38(ctx, base);
	// addi r1,r31,1408
	ctx.r1.s64 = ctx.r31.s64 + 1408;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82184ab8
	ctx.lr = 0x82222E38;
	__restfpr_21(ctx, base);
	// b 0x82184420
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222E3C"))) PPC_WEAK_FUNC(sub_82222E3C);
PPC_FUNC_IMPL(__imp__sub_82222E3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x8220be38
	ctx.lr = 0x82222E54;
	sub_8220BE38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222E64"))) PPC_WEAK_FUNC(sub_82222E64);
PPC_FUNC_IMPL(__imp__sub_82222E64) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x820c9a70
	ctx.lr = 0x82222E7C;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222E8C"))) PPC_WEAK_FUNC(sub_82222E8C);
PPC_FUNC_IMPL(__imp__sub_82222E8C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// bl 0x820c9a70
	ctx.lr = 0x82222EA4;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222EB4"))) PPC_WEAK_FUNC(sub_82222EB4);
PPC_FUNC_IMPL(__imp__sub_82222EB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x820c9a70
	ctx.lr = 0x82222ECC;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222EDC"))) PPC_WEAK_FUNC(sub_82222EDC);
PPC_FUNC_IMPL(__imp__sub_82222EDC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x820c9a70
	ctx.lr = 0x82222EF4;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222F04"))) PPC_WEAK_FUNC(sub_82222F04);
PPC_FUNC_IMPL(__imp__sub_82222F04) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9348
	ctx.lr = 0x82222F1C;
	sub_820C9348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222F2C"))) PPC_WEAK_FUNC(sub_82222F2C);
PPC_FUNC_IMPL(__imp__sub_82222F2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x820c9a70
	ctx.lr = 0x82222F44;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222F54"))) PPC_WEAK_FUNC(sub_82222F54);
PPC_FUNC_IMPL(__imp__sub_82222F54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x820c9a70
	ctx.lr = 0x82222F6C;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222F7C"))) PPC_WEAK_FUNC(sub_82222F7C);
PPC_FUNC_IMPL(__imp__sub_82222F7C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x820c9a70
	ctx.lr = 0x82222F94;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222FA4"))) PPC_WEAK_FUNC(sub_82222FA4);
PPC_FUNC_IMPL(__imp__sub_82222FA4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x820c9a70
	ctx.lr = 0x82222FBC;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222FCC"))) PPC_WEAK_FUNC(sub_82222FCC);
PPC_FUNC_IMPL(__imp__sub_82222FCC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x820c9a70
	ctx.lr = 0x82222FE4;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222FF4"))) PPC_WEAK_FUNC(sub_82222FF4);
PPC_FUNC_IMPL(__imp__sub_82222FF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x8222300C;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222301C"))) PPC_WEAK_FUNC(sub_8222301C);
PPC_FUNC_IMPL(__imp__sub_8222301C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x8220be38
	ctx.lr = 0x82223034;
	sub_8220BE38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223044"))) PPC_WEAK_FUNC(sub_82223044);
PPC_FUNC_IMPL(__imp__sub_82223044) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x820c9a70
	ctx.lr = 0x8222305C;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222306C"))) PPC_WEAK_FUNC(sub_8222306C);
PPC_FUNC_IMPL(__imp__sub_8222306C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x820c9a70
	ctx.lr = 0x82223084;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223094"))) PPC_WEAK_FUNC(sub_82223094);
PPC_FUNC_IMPL(__imp__sub_82223094) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x820c9a70
	ctx.lr = 0x822230AC;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822230BC"))) PPC_WEAK_FUNC(sub_822230BC);
PPC_FUNC_IMPL(__imp__sub_822230BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x820c9a70
	ctx.lr = 0x822230D4;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822230E4"))) PPC_WEAK_FUNC(sub_822230E4);
PPC_FUNC_IMPL(__imp__sub_822230E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x820c9a70
	ctx.lr = 0x822230FC;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222310C"))) PPC_WEAK_FUNC(sub_8222310C);
PPC_FUNC_IMPL(__imp__sub_8222310C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,752
	ctx.r3.s64 = ctx.r31.s64 + 752;
	// bl 0x820c9a70
	ctx.lr = 0x82223124;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223134"))) PPC_WEAK_FUNC(sub_82223134);
PPC_FUNC_IMPL(__imp__sub_82223134) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x8222314C;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222315C"))) PPC_WEAK_FUNC(sub_8222315C);
PPC_FUNC_IMPL(__imp__sub_8222315C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82223174;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223184"))) PPC_WEAK_FUNC(sub_82223184);
PPC_FUNC_IMPL(__imp__sub_82223184) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x8222319C;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822231AC"))) PPC_WEAK_FUNC(sub_822231AC);
PPC_FUNC_IMPL(__imp__sub_822231AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822231C4;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822231D4"))) PPC_WEAK_FUNC(sub_822231D4);
PPC_FUNC_IMPL(__imp__sub_822231D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822231EC;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822231FC"))) PPC_WEAK_FUNC(sub_822231FC);
PPC_FUNC_IMPL(__imp__sub_822231FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82223214;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223224"))) PPC_WEAK_FUNC(sub_82223224);
PPC_FUNC_IMPL(__imp__sub_82223224) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x8222323C;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222324C"))) PPC_WEAK_FUNC(sub_8222324C);
PPC_FUNC_IMPL(__imp__sub_8222324C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82223264;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223274"))) PPC_WEAK_FUNC(sub_82223274);
PPC_FUNC_IMPL(__imp__sub_82223274) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x8222328C;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222329C"))) PPC_WEAK_FUNC(sub_8222329C);
PPC_FUNC_IMPL(__imp__sub_8222329C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822232B4;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822232C4"))) PPC_WEAK_FUNC(sub_822232C4);
PPC_FUNC_IMPL(__imp__sub_822232C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1408
	ctx.r31.s64 = ctx.r12.s64 + -1408;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822232DC;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822232F0"))) PPC_WEAK_FUNC(sub_822232F0);
PPC_FUNC_IMPL(__imp__sub_822232F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4600
	ctx.r11.s64 = ctx.r11.s64 + 4600;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223310"))) PPC_WEAK_FUNC(sub_82223310);
PPC_FUNC_IMPL(__imp__sub_82223310) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223328"))) PPC_WEAK_FUNC(sub_82223328);
PPC_FUNC_IMPL(__imp__sub_82223328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7980
	ctx.r10.s64 = ctx.r11.s64 + -7980;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223358
	if (ctx.cr6.eq) goto loc_82223358;
	// bl 0x82183380
	ctx.lr = 0x82223358;
	sub_82183380(ctx, base);
loc_82223358:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223380"))) PPC_WEAK_FUNC(sub_82223380);
PPC_FUNC_IMPL(__imp__sub_82223380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-7980
	ctx.r9.s64 = ctx.r10.s64 + -7980;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822233A0"))) PPC_WEAK_FUNC(sub_822233A0);
PPC_FUNC_IMPL(__imp__sub_822233A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822233e4
	if (ctx.cr6.eq) goto loc_822233E4;
loc_822233B4:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822233cc
	if (ctx.cr6.lt) goto loc_822233CC;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822233dc
	if (!ctx.cr6.gt) goto loc_822233DC;
loc_822233CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822233b4
	if (!ctx.cr6.eq) goto loc_822233B4;
loc_822233DC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822233ec
	if (!ctx.cr6.eq) goto loc_822233EC;
loc_822233E4:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_822233EC:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r8,r9,-1360
	ctx.r8.s64 = ctx.r9.s64 + -1360;
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfd f0,128(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 128);
	// fdivs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsub f7,f0,f8
	ctx.f7.f64 = ctx.f0.f64 - ctx.f8.f64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsub f5,f0,f6
	ctx.f5.f64 = ctx.f0.f64 - ctx.f6.f64;
	// fmuls f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmadds f1,f3,f9,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f4.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223430"))) PPC_WEAK_FUNC(sub_82223430);
PPC_FUNC_IMPL(__imp__sub_82223430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-7988
	ctx.r10.s64 = ctx.r11.s64 + -7988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820c6e58
	ctx.lr = 0x82223460;
	sub_820C6E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223468;
	sub_820C6E58(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183380
	ctx.lr = 0x82223470;
	sub_82183380(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223488"))) PPC_WEAK_FUNC(sub_82223488);
PPC_FUNC_IMPL(__imp__sub_82223488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820c8fc0
	ctx.lr = 0x822234A4;
	sub_820C8FC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822234B8"))) PPC_WEAK_FUNC(sub_822234B8);
PPC_FUNC_IMPL(__imp__sub_822234B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,112(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822233a0
	ctx.lr = 0x822234DC;
	sub_822233A0(ctx, base);
	// lwz r11,100(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// fmuls f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223520
	if (ctx.cr6.eq) goto loc_82223520;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82223500
	if (ctx.cr6.eq) goto loc_82223500;
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82223500:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82223520
	if (ctx.cr6.eq) goto loc_82223520;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82223520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223530"))) PPC_WEAK_FUNC(sub_82223530);
PPC_FUNC_IMPL(__imp__sub_82223530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x82223538;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223698
	if (ctx.cr6.eq) goto loc_82223698;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82223698
	if (ctx.cr6.eq) goto loc_82223698;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82223598
	if (!ctx.cr6.eq) goto loc_82223598;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223698
	if (ctx.cr6.eq) goto loc_82223698;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222358C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
loc_82223598:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822235c4
	if (ctx.cr6.eq) goto loc_822235C4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822235B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x822235c4
	if (ctx.cr6.lt) goto loc_822235C4;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// ble cr6,0x822235d0
	if (!ctx.cr6.gt) goto loc_822235D0;
loc_822235C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221e3c0
	ctx.lr = 0x822235D0;
	sub_8221E3C0(ctx, base);
loc_822235D0:
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r31,r11,-1360
	ctx.r31.s64 = ctx.r11.s64 + -1360;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f31,112(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822233a0
	ctx.lr = 0x82223604;
	sub_822233A0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f11,108(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222361c
	if (ctx.cr6.eq) goto loc_8222361C;
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8222361C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222363c
	if (ctx.cr6.eq) goto loc_8222363C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222363C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222363C:
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822233a0
	ctx.lr = 0x82223648;
	sub_822233A0(ctx, base);
	// lfd f0,960(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 960);
	// fsub f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f0,1632(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1632);
	// lfd f1,1640(r31)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1640);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// bl 0x82182558
	ctx.lr = 0x82223664;
	sub_82182558(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223678
	if (ctx.cr6.eq) goto loc_82223678;
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_82223678:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223698
	if (ctx.cr6.eq) goto loc_82223698;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82223698:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822236A8"))) PPC_WEAK_FUNC(sub_822236A8);
PPC_FUNC_IMPL(__imp__sub_822236A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x822236B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-7984
	ctx.r9.s64 = ctx.r11.s64 + -7984;
	// addi r29,r10,-7988
	ctx.r29.s64 = ctx.r10.s64 + -7988;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// stw r29,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x822236E0;
	sub_820C6E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x822236E8;
	sub_820C6E58(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82183380
	ctx.lr = 0x822236F0;
	sub_82183380(ctx, base);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223704;
	sub_820C6E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x8222370C;
	sub_820C6E58(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82183380
	ctx.lr = 0x82223714;
	sub_82183380(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223728;
	sub_820C6E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223730;
	sub_820C6E58(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82183380
	ctx.lr = 0x82223738;
	sub_82183380(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x8222374C;
	sub_820C6E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223754;
	sub_820C6E58(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82183380
	ctx.lr = 0x8222375C;
	sub_82183380(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223770;
	sub_820C6E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223778;
	sub_820C6E58(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82183380
	ctx.lr = 0x82223780;
	sub_82183380(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82223794;
	sub_820C6E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x8222379C;
	sub_820C6E58(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82183380
	ctx.lr = 0x822237A4;
	sub_82183380(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822237B0"))) PPC_WEAK_FUNC(sub_822237B0);
PPC_FUNC_IMPL(__imp__sub_822237B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4600
	ctx.r11.s64 = ctx.r11.s64 + 4600;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x820d4d68
	ctx.lr = 0x822237DC;
	sub_820D4D68(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822237F8"))) PPC_WEAK_FUNC(sub_822237F8);
PPC_FUNC_IMPL(__imp__sub_822237F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r31,r11,4600
	ctx.r31.s64 = ctx.r11.s64 + 4600;
	// addi r10,r10,-7976
	ctx.r10.s64 = ctx.r10.s64 + -7976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820cfef8
	ctx.lr = 0x82223828;
	sub_820CFEF8(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
loc_82223864:
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82223864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82223864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223888"))) PPC_WEAK_FUNC(sub_82223888);
PPC_FUNC_IMPL(__imp__sub_82223888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x82223890;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,166
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 166, ctx.xer);
	// beq cr6,0x82223958
	if (ctx.cr6.eq) goto loc_82223958;
	// cmpwi cr6,r4,4261
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4261, ctx.xer);
	// bne cr6,0x82223984
	if (!ctx.cr6.eq) goto loc_82223984;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82223984
	if (ctx.cr6.eq) goto loc_82223984;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r9,r10,-1360
	ctx.r9.s64 = ctx.r10.s64 + -1360;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_822238E4:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// stfs f31,108(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 108, temp.u32);
	// lfs f1,112(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822233a0
	ctx.lr = 0x822238F8;
	sub_822233A0(ctx, base);
	// lwz r11,100(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222393c
	if (ctx.cr6.eq) goto loc_8222393C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222391c
	if (ctx.cr6.eq) goto loc_8222391C;
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8222391C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222393c
	if (ctx.cr6.eq) goto loc_8222393C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222393C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222393C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822238e4
	if (!ctx.cr6.eq) goto loc_822238E4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
loc_82223958:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82223984
	if (ctx.cr6.eq) goto loc_82223984;
loc_82223968:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82223530
	ctx.lr = 0x82223974;
	sub_82223530(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82223968
	if (!ctx.cr6.eq) goto loc_82223968;
loc_82223984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223990"))) PPC_WEAK_FUNC(sub_82223990);
PPC_FUNC_IMPL(__imp__sub_82223990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822239d0
	if (ctx.cr6.eq) goto loc_822239D0;
loc_822239B8:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x822239d0
	if (ctx.cr6.gt) goto loc_822239D0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822239b8
	if (!ctx.cr6.eq) goto loc_822239B8;
loc_822239D0:
	// stfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820c9300
	ctx.lr = 0x822239E8;
	sub_820C9300(ctx, base);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82223a0c
	if (!ctx.cr6.lt) goto loc_82223A0C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// bl 0x82180878
	ctx.lr = 0x82223A0C;
	sub_82180878(ctx, base);
loc_82223A0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223A38"))) PPC_WEAK_FUNC(sub_82223A38);
PPC_FUNC_IMPL(__imp__sub_82223A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x820c6e58
	ctx.lr = 0x82223A64;
	sub_820C6E58(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// lfs f2,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82223990
	ctx.lr = 0x82223A7C;
	sub_82223990(ctx, base);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,15176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15176);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82223990
	ctx.lr = 0x82223A90;
	sub_82223990(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223AB8"))) PPC_WEAK_FUNC(sub_82223AB8);
PPC_FUNC_IMPL(__imp__sub_82223AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-7988
	ctx.r9.s64 = ctx.r11.s64 + -7988;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// bl 0x820c9110
	ctx.lr = 0x82223AFC;
	sub_820C9110(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,-1360
	ctx.r5.s64 = ctx.r6.s64 + -1360;
	// lfs f31,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223990
	ctx.lr = 0x82223B2C;
	sub_82223990(ctx, base);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,15176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 15176);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82223990
	ctx.lr = 0x82223B40;
	sub_82223990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223B60"))) PPC_WEAK_FUNC(sub_82223B60);
PPC_FUNC_IMPL(__imp__sub_82223B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x820c6d30
	ctx.lr = 0x82223B7C;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223B90"))) PPC_WEAK_FUNC(sub_82223B90);
PPC_FUNC_IMPL(__imp__sub_82223B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,165
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 165, ctx.xer);
	// beq cr6,0x82223c6c
	if (ctx.cr6.eq) goto loc_82223C6C;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4600
	ctx.r7.s64 = ctx.r11.s64 + 4600;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223c88
	if (ctx.cr6.eq) goto loc_82223C88;
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82223c18
	if (!ctx.cr6.eq) goto loc_82223C18;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82223BF0:
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82223c04
	if (!ctx.cr6.lt) goto loc_82223C04;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82223c0c
	goto loc_82223C0C;
loc_82223C04:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82223C0C:
	// lbz r6,21(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82223bf0
	if (ctx.cr6.eq) goto loc_82223BF0;
loc_82223C18:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82223c3c
	if (ctx.cr6.eq) goto loc_82223C3C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82223c3c
	if (ctx.cr6.lt) goto loc_82223C3C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82223c44
	goto loc_82223C44;
loc_82223C3C:
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82223C44:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82223c88
	if (ctx.cr6.eq) goto loc_82223C88;
	// addi r3,r7,36
	ctx.r3.s64 = ctx.r7.s64 + 36;
	// bl 0x820d4d68
	ctx.lr = 0x82223C58;
	sub_820D4D68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82223888
	ctx.lr = 0x82223C68;
	sub_82223888(ctx, base);
	// b 0x82223c88
	goto loc_82223C88;
loc_82223C6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82223c88
	if (ctx.cr6.eq) goto loc_82223C88;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4600
	ctx.r11.s64 = ctx.r11.s64 + 4600;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
loc_82223C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223CA0"))) PPC_WEAK_FUNC(sub_82223CA0);
PPC_FUNC_IMPL(__imp__sub_82223CA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r9,r10,-7976
	ctx.r9.s64 = ctx.r10.s64 + -7976;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x820d49e0
	sub_820D49E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223CC0"))) PPC_WEAK_FUNC(sub_82223CC0);
PPC_FUNC_IMPL(__imp__sub_82223CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x82223CC8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-7984
	ctx.r10.s64 = ctx.r11.s64 + -7984;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82223ab8
	ctx.lr = 0x82223CEC;
	sub_82223AB8(ctx, base);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223ab8
	ctx.lr = 0x82223CF8;
	sub_82223AB8(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82223ab8
	ctx.lr = 0x82223D00;
	sub_82223AB8(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82223ab8
	ctx.lr = 0x82223D08;
	sub_82223AB8(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x82223ab8
	ctx.lr = 0x82223D10;
	sub_82223AB8(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x82223ab8
	ctx.lr = 0x82223D18;
	sub_82223AB8(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r9,-1360
	ctx.r8.s64 = ctx.r9.s64 + -1360;
	// lfs f2,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82223a38
	ctx.lr = 0x82223D30;
	sub_82223A38(ctx, base);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,104(r30)
	PPC_STORE_U8(ctx.r30.u32 + 104, ctx.r6.u8);
	// lfs f0,15176(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223D50"))) PPC_WEAK_FUNC(sub_82223D50);
PPC_FUNC_IMPL(__imp__sub_82223D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82223430
	ctx.lr = 0x82223D6C;
	sub_82223430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223D7C"))) PPC_WEAK_FUNC(sub_82223D7C);
PPC_FUNC_IMPL(__imp__sub_82223D7C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82223430
	ctx.lr = 0x82223D98;
	sub_82223430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223DA8"))) PPC_WEAK_FUNC(sub_82223DA8);
PPC_FUNC_IMPL(__imp__sub_82223DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82223430
	ctx.lr = 0x82223DC4;
	sub_82223430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223DD4"))) PPC_WEAK_FUNC(sub_82223DD4);
PPC_FUNC_IMPL(__imp__sub_82223DD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x82223430
	ctx.lr = 0x82223DF0;
	sub_82223430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223E00"))) PPC_WEAK_FUNC(sub_82223E00);
PPC_FUNC_IMPL(__imp__sub_82223E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x82223430
	ctx.lr = 0x82223E1C;
	sub_82223430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223E2C"))) PPC_WEAK_FUNC(sub_82223E2C);
PPC_FUNC_IMPL(__imp__sub_82223E2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x82223430
	ctx.lr = 0x82223E48;
	sub_82223430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223E58"))) PPC_WEAK_FUNC(sub_82223E58);
PPC_FUNC_IMPL(__imp__sub_82223E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r3,-30820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30820);
	// bl 0x8220b620
	ctx.lr = 0x82223E70;
	sub_8220B620(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,-1360
	ctx.r9.s64 = ctx.r10.s64 + -1360;
	// lfd f0,72(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 72);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223E90"))) PPC_WEAK_FUNC(sub_82223E90);
PPC_FUNC_IMPL(__imp__sub_82223E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// bl 0x8212ac30
	ctx.lr = 0x82223EB8;
	sub_8212AC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a8a0
	ctx.lr = 0x82223EC0;
	sub_8212A8A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223ED8"))) PPC_WEAK_FUNC(sub_82223ED8);
PPC_FUNC_IMPL(__imp__sub_82223ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x82223EE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x821809d0
	ctx.lr = 0x82223EF0;
	sub_821809D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x82223f20
	if (ctx.cr6.eq) goto loc_82223F20;
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
	// std r31,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r31.u64);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// bl 0x8212ac30
	ctx.lr = 0x82223F10;
	sub_8212AC30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212a8a0
	ctx.lr = 0x82223F18;
	sub_8212A8A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82223f24
	goto loc_82223F24;
loc_82223F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82223F24:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
	// std r31,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r31.u64);
	// bl 0x8212ac30
	ctx.lr = 0x82223F38;
	sub_8212AC30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212a8a0
	ctx.lr = 0x82223F40;
	sub_8212A8A0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
	// std r31,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r31.u64);
	// bl 0x8212ac30
	ctx.lr = 0x82223F54;
	sub_8212AC30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212a8a0
	ctx.lr = 0x82223F5C;
	sub_8212A8A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223F68"))) PPC_WEAK_FUNC(sub_82223F68);
PPC_FUNC_IMPL(__imp__sub_82223F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223F70"))) PPC_WEAK_FUNC(sub_82223F70);
PPC_FUNC_IMPL(__imp__sub_82223F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223F78"))) PPC_WEAK_FUNC(sub_82223F78);
PPC_FUNC_IMPL(__imp__sub_82223F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223F80"))) PPC_WEAK_FUNC(sub_82223F80);
PPC_FUNC_IMPL(__imp__sub_82223F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223F88"))) PPC_WEAK_FUNC(sub_82223F88);
PPC_FUNC_IMPL(__imp__sub_82223F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223FB8"))) PPC_WEAK_FUNC(sub_82223FB8);
PPC_FUNC_IMPL(__imp__sub_82223FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223FE8"))) PPC_WEAK_FUNC(sub_82223FE8);
PPC_FUNC_IMPL(__imp__sub_82223FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,-15556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15556);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224018"))) PPC_WEAK_FUNC(sub_82224018);
PPC_FUNC_IMPL(__imp__sub_82224018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lfs f0,-15552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15552);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82224048
	if (ctx.cr6.eq) goto loc_82224048;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// lwz r9,784(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r8,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r8.u32);
loc_82224048:
	// lwz r9,180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224078"))) PPC_WEAK_FUNC(sub_82224078);
PPC_FUNC_IMPL(__imp__sub_82224078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,15125(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15125, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224090"))) PPC_WEAK_FUNC(sub_82224090);
PPC_FUNC_IMPL(__imp__sub_82224090) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224098"))) PPC_WEAK_FUNC(sub_82224098);
PPC_FUNC_IMPL(__imp__sub_82224098) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822240A0"))) PPC_WEAK_FUNC(sub_822240A0);
PPC_FUNC_IMPL(__imp__sub_822240A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822240A8"))) PPC_WEAK_FUNC(sub_822240A8);
PPC_FUNC_IMPL(__imp__sub_822240A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822240B0"))) PPC_WEAK_FUNC(sub_822240B0);
PPC_FUNC_IMPL(__imp__sub_822240B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822240C0"))) PPC_WEAK_FUNC(sub_822240C0);
PPC_FUNC_IMPL(__imp__sub_822240C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843f4
	ctx.lr = 0x822240C8;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r24,r11,3900
	ctx.r24.s64 = ctx.r11.s64 + 3900;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82180b08
	ctx.lr = 0x822240F0;
	sub_82180B08(ctx, base);
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x820c75e0
	ctx.lr = 0x822240FC;
	sub_820C75E0(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r11,3884
	ctx.r9.s64 = ctx.r11.s64 + 3884;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82224188
	if (ctx.cr6.eq) goto loc_82224188;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// li r26,36
	ctx.r26.s64 = 36;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r29,r10,16
	ctx.r29.s64 = ctx.r10.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r26
	ctx.r7.s32 = ctx.r26.s32 ? ctx.r8.s32 / ctx.r26.s32 : 0;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82224188
	if (ctx.cr0.eq) goto loc_82224188;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82224138:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82224154
	if (ctx.cr6.lt) goto loc_82224154;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82224158
	goto loc_82224158;
loc_82224154:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82224158:
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x820c3d50
	ctx.lr = 0x82224160;
	sub_820C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222419c
	if (ctx.cr6.eq) goto loc_8222419C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r26.s32 ? ctx.r9.s32 / ctx.r26.s32 : 0;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82224138
	if (ctx.cr6.lt) goto loc_82224138;
loc_82224188:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8222418C:
	// bl 0x82180b10
	ctx.lr = 0x82224190;
	sub_82180B10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82224194:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82184444
	__restgprlr_23(ctx, base);
	return;
loc_8222419C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822241c4
	if (!ctx.cr6.gt) goto loc_822241C4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x8222418c
	goto loc_8222418C;
loc_822241C4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822241d0
	if (!ctx.cr6.eq) goto loc_822241D0;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_822241D0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82129710
	ctx.lr = 0x822241E0;
	sub_82129710(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82180b10
	ctx.lr = 0x822241E8;
	sub_82180B10(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82224194
	goto loc_82224194;
}

__attribute__((alias("__imp__sub_822241F0"))) PPC_WEAK_FUNC(sub_822241F0);
PPC_FUNC_IMPL(__imp__sub_822241F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820c73c0
	ctx.lr = 0x82224200;
	sub_820C73C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224210"))) PPC_WEAK_FUNC(sub_82224210);
PPC_FUNC_IMPL(__imp__sub_82224210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r10,r11,3616
	ctx.r10.s64 = ctx.r11.s64 + 3616;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// lbz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224240"))) PPC_WEAK_FUNC(sub_82224240);
PPC_FUNC_IMPL(__imp__sub_82224240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x82224248;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-8004
	ctx.r4.s64 = ctx.r11.s64 + -8004;
	// bl 0x820c8340
	ctx.lr = 0x82224268;
	sub_820C8340(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r28,r11,3900
	ctx.r28.s64 = ctx.r11.s64 + 3900;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82180b08
	ctx.lr = 0x82224278;
	sub_82180B08(ctx, base);
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x820c75e0
	ctx.lr = 0x82224284;
	sub_820C75E0(ctx, base);
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r10,3884
	ctx.r9.s64 = ctx.r10.s64 + 3884;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822242ec
	if (ctx.cr6.eq) goto loc_822242EC;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822242ec
	if (ctx.cr6.eq) goto loc_822242EC;
loc_822242B0:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822242c4
	if (!ctx.cr6.lt) goto loc_822242C4;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
loc_822242C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x820c3d50
	ctx.lr = 0x822242D4;
	sub_820C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82224310
	if (ctx.cr6.eq) goto loc_82224310;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822242b0
	if (!ctx.cr6.eq) goto loc_822242B0;
loc_822242EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82180b10
	ctx.lr = 0x822242F4;
	sub_82180B10(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
loc_822242FC:
	// blt cr6,0x82224308
	if (ctx.cr6.lt) goto loc_82224308;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82183380
	ctx.lr = 0x82224308;
	sub_82183380(ctx, base);
loc_82224308:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
loc_82224310:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82183380
	ctx.lr = 0x82224318;
	sub_82183380(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x820c84b8
	ctx.lr = 0x82224328;
	sub_820C84B8(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r4,-36
	ctx.r3.s64 = ctx.r4.s64 + -36;
	// bl 0x820c79d8
	ctx.lr = 0x82224334;
	sub_820C79D8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82180b10
	ctx.lr = 0x82224348;
	sub_82180B10(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// b 0x822242fc
	goto loc_822242FC;
}

__attribute__((alias("__imp__sub_82224354"))) PPC_WEAK_FUNC(sub_82224354);
PPC_FUNC_IMPL(__imp__sub_82224354) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x8222436C;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222437C"))) PPC_WEAK_FUNC(sub_8222437C);
PPC_FUNC_IMPL(__imp__sub_8222437C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820c73c0
	ctx.lr = 0x8222438C;
	sub_820C73C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822243A8"))) PPC_WEAK_FUNC(sub_822243A8);
PPC_FUNC_IMPL(__imp__sub_822243A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843f0
	ctx.lr = 0x822243B0;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r23,r11,3900
	ctx.r23.s64 = ctx.r11.s64 + 3900;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82180b08
	ctx.lr = 0x822243D8;
	sub_82180B08(ctx, base);
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x820c75e0
	ctx.lr = 0x822243E4;
	sub_820C75E0(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r9,r11,3884
	ctx.r9.s64 = ctx.r11.s64 + 3884;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82224474
	if (ctx.cr6.eq) goto loc_82224474;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// li r26,36
	ctx.r26.s64 = 36;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r26
	ctx.r7.s32 = ctx.r26.s32 ? ctx.r8.s32 / ctx.r26.s32 : 0;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82224474
	if (ctx.cr0.eq) goto loc_82224474;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82224424:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82224440
	if (ctx.cr6.lt) goto loc_82224440;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82224444
	goto loc_82224444;
loc_82224440:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82224444:
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x820c3d50
	ctx.lr = 0x8222444C;
	sub_820C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822244f8
	if (ctx.cr6.eq) goto loc_822244F8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r26.s32 ? ctx.r9.s32 / ctx.r26.s32 : 0;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82224424
	if (ctx.cr6.lt) goto loc_82224424;
loc_82224474:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r25,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// stb r25,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r25.u8);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82180a88
	ctx.lr = 0x8222448C;
	sub_82180A88(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c1178
	ctx.lr = 0x822244A8;
	sub_820C1178(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82129710
	ctx.lr = 0x822244B8;
	sub_82129710(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x820c73d8
	ctx.lr = 0x822244C0;
	sub_820C73D8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x820c7678
	ctx.lr = 0x822244C8;
	sub_820C7678(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822244dc
	if (ctx.cr6.lt) goto loc_822244DC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82183380
	ctx.lr = 0x822244DC;
	sub_82183380(ctx, base);
loc_822244DC:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r25,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// stb r25,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r25.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_822244EC:
	// bl 0x82180b10
	ctx.lr = 0x822244F0;
	sub_82180B10(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x82184440
	__restgprlr_22(ctx, base);
	return;
loc_822244F8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x822244ec
	goto loc_822244EC;
}

__attribute__((alias("__imp__sub_82224500"))) PPC_WEAK_FUNC(sub_82224500);
PPC_FUNC_IMPL(__imp__sub_82224500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820c73c0
	ctx.lr = 0x82224510;
	sub_820C73C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224520"))) PPC_WEAK_FUNC(sub_82224520);
PPC_FUNC_IMPL(__imp__sub_82224520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x82224538;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224550"))) PPC_WEAK_FUNC(sub_82224550);
PPC_FUNC_IMPL(__imp__sub_82224550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184400
	ctx.lr = 0x82224558;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,-28868
	ctx.r29.s64 = ctx.r11.s64 + -28868;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-28840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28840);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822245ac
	if (!ctx.cr6.eq) goto loc_822245AC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-28840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28840, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-8004
	ctx.r4.s64 = ctx.r11.s64 + -8004;
	// bl 0x820c0fd0
	ctx.lr = 0x822245A0;
	sub_820C0FD0(ctx, base);
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r3,r10,11968
	ctx.r3.s64 = ctx.r10.s64 + 11968;
	// bl 0x82183178
	ctx.lr = 0x822245AC;
	sub_82183178(ctx, base);
loc_822245AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c1178
	ctx.lr = 0x822245D8;
	sub_820C1178(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822245DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822245dc
	if (!ctx.cr6.eq) goto loc_822245DC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x820c7780
	ctx.lr = 0x82224604;
	sub_820C7780(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222dcb8
	ctx.lr = 0x8222460C;
	sub_8222DCB8(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822240c0
	ctx.lr = 0x8222461C;
	sub_822240C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222467c
	if (ctx.cr6.eq) goto loc_8222467C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8222e570
	ctx.lr = 0x82224638;
	sub_8222E570(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8222e570
	ctx.lr = 0x82224648;
	sub_8222E570(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e570
	ctx.lr = 0x82224658;
	sub_8222E570(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8222e570
	ctx.lr = 0x82224668;
	sub_8222E570(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8222e570
	ctx.lr = 0x82224678;
	sub_8222E570(ctx, base);
	// b 0x82224700
	goto loc_82224700;
loc_8222467C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82224688
	if (!ctx.cr6.eq) goto loc_82224688;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82224688:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8222469c
	if (!ctx.cr6.lt) goto loc_8222469C;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
loc_8222469C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222f700
	ctx.lr = 0x822246A8;
	sub_8222F700(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lbz r10,15125(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15125);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82224700
	if (ctx.cr6.eq) goto loc_82224700;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r30,r11,3616
	ctx.r30.s64 = ctx.r11.s64 + 3616;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r9.u8);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82224700
	if (ctx.cr6.eq) goto loc_82224700;
loc_822246DC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8212a898
	ctx.lr = 0x822246E4;
	sub_8212A898(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r9.u8);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822246dc
	if (!ctx.cr6.eq) goto loc_822246DC;
loc_82224700:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82224714
	if (ctx.cr6.lt) goto loc_82224714;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82183380
	ctx.lr = 0x82224714;
	sub_82183380(ctx, base);
loc_82224714:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82184450
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224720"))) PPC_WEAK_FUNC(sub_82224720);
PPC_FUNC_IMPL(__imp__sub_82224720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r10,-28840(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28840);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r8,-32112
	ctx.r8.s64 = -2104492032;
	// stw r9,-28840(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28840, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224740"))) PPC_WEAK_FUNC(sub_82224740);
PPC_FUNC_IMPL(__imp__sub_82224740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x82224758;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224768"))) PPC_WEAK_FUNC(sub_82224768);
PPC_FUNC_IMPL(__imp__sub_82224768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224770"))) PPC_WEAK_FUNC(sub_82224770);
PPC_FUNC_IMPL(__imp__sub_82224770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224778"))) PPC_WEAK_FUNC(sub_82224778);
PPC_FUNC_IMPL(__imp__sub_82224778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r3.u32);
	// ld r10,776(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 776);
	// oris r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 268435456;
	// std r9,776(r11)
	PPC_STORE_U64(ctx.r11.u32 + 776, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822247A0"))) PPC_WEAK_FUNC(sub_822247A0);
PPC_FUNC_IMPL(__imp__sub_822247A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822247A8"))) PPC_WEAK_FUNC(sub_822247A8);
PPC_FUNC_IMPL(__imp__sub_822247A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x822247B0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82224c64
	if (ctx.cr6.eq) goto loc_82224C64;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822247EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82224ae4
	if (ctx.cr6.eq) goto loc_82224AE4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x822249a0
	if (ctx.cr6.eq) goto loc_822249A0;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82224c28
	if (!ctx.cr6.eq) goto loc_82224C28;
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r30,r11,-1360
	ctx.r30.s64 = ctx.r11.s64 + -1360;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lwz r11,10996(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10996);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,30
	ctx.r5.s64 = 30;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f31,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// lfs f30,15176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15176);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,15132(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15132);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fdivs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,216(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822248D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lwz r11,15180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15180);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lwz r9,10996(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10996);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,15184(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15184);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lwz r8,11000(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11000);
	// fcfid f8,f3
	ctx.f8.f64 = double(ctx.f3.s64);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fcfid f11,f2
	ctx.f11.f64 = double(ctx.f2.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f1
	ctx.f9.f64 = double(ctx.f1.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// stfs f6,352(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,348(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stfs f3,368(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f31,376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// fadds f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,372(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f31,380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f30,384(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// fadds f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f6,392(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f1,388(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f30,400(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f1,408(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f2,412(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// b 0x82224c1c
	goto loc_82224C1C;
loc_822249A0:
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r8,r11,-1360
	ctx.r8.s64 = ctx.r11.s64 + -1360;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lwz r11,10996(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10996);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,15132(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15132);
	ctx.f0.f64 = double(temp.f32);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,312(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r5,30
	ctx.r5.s64 = 30;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f31,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,15176(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15176);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fdivs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f30,236(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,216(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 216);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82224A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lwz r11,10996(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10996);
	// stfs f31,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// stfs f31,352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,11000(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11000);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// stfs f31,368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f31,376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f31,380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f30,384(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f31,392(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f3,388(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f30,400(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f3,408(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// b 0x82224c18
	goto loc_82224C18;
loc_82224AE4:
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r8,r11,-1360
	ctx.r8.s64 = ctx.r11.s64 + -1360;
	// lwz r11,10996(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10996);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lwz r10,11000(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11000);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfs f31,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lfs f0,15132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15132);
	ctx.f0.f64 = double(temp.f32);
	// li r5,30
	ctx.r5.s64 = 30;
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lfs f0,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,312(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,15176(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15176);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f30,280(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,292(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f31,284(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f31,296(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f30,300(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfs f31,276(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// stfs f6,240(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fdivs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// stfs f5,260(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82224BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10996(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10996);
	// lwz r10,11000(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11000);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stfs f31,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// stfs f31,352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stfs f31,368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f31,376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f31,380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f30,384(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f31,392(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f13,388(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f30,400(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f13,408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
loc_82224C18:
	// stfs f0,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
loc_82224C1C:
	// stfs f31,416(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f30,424(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f30,420(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
loc_82224C28:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82207d20
	ctx.lr = 0x82224C48;
	sub_82207D20(ctx, base);
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82184480
	ctx.lr = 0x82224C58;
	sub_82184480(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x82207ca8
	ctx.lr = 0x82224C60;
	sub_82207CA8(ctx, base);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
loc_82224C64:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224C78"))) PPC_WEAK_FUNC(sub_82224C78);
PPC_FUNC_IMPL(__imp__sub_82224C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82224c98
	if (ctx.cr6.eq) goto loc_82224C98;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82224C98:
	// lwz r10,752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82224d30
	if (ctx.cr6.eq) goto loc_82224D30;
	// rlwinm r7,r3,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// stw r3,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r3.u32);
	// rlwinm r6,r3,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r3,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// addi r9,r3,-1360
	ctx.r9.s64 = ctx.r3.s64 + -1360;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// lfs f0,80(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,764(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 764, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,760(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 760, temp.u32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,756(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 756, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,768(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 768, temp.u32);
	// lwz r8,784(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// oris r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 131072;
	// stw r7,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r7.u32);
loc_82224D30:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D40"))) PPC_WEAK_FUNC(sub_82224D40);
PPC_FUNC_IMPL(__imp__sub_82224D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r3.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 1024;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D68"))) PPC_WEAK_FUNC(sub_82224D68);
PPC_FUNC_IMPL(__imp__sub_82224D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r3.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D90"))) PPC_WEAK_FUNC(sub_82224D90);
PPC_FUNC_IMPL(__imp__sub_82224D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r3.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224DB8"))) PPC_WEAK_FUNC(sub_82224DB8);
PPC_FUNC_IMPL(__imp__sub_82224DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r3.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224DE0"))) PPC_WEAK_FUNC(sub_82224DE0);
PPC_FUNC_IMPL(__imp__sub_82224DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// lwz r9,784(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r8,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224E10"))) PPC_WEAK_FUNC(sub_82224E10);
PPC_FUNC_IMPL(__imp__sub_82224E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r3.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224E38"))) PPC_WEAK_FUNC(sub_82224E38);
PPC_FUNC_IMPL(__imp__sub_82224E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r3.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224E60"))) PPC_WEAK_FUNC(sub_82224E60);
PPC_FUNC_IMPL(__imp__sub_82224E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r10,r3,62
	ctx.r10.s64 = ctx.r3.s64 + 62;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// bgt cr6,0x82224ef0
	if (ctx.cr6.gt) goto loc_82224EF0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82224ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82224EC4;
	// bdzf 4*cr6+eq,0x82224ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82224ED8;
	// bne cr6,0x82224eec
	if (!ctx.cr6.eq) goto loc_82224EEC;
	// stfs f0,280(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
loc_82224EC4:
	// stfs f0,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
loc_82224ED8:
	// stfs f0,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
loc_82224EEC:
	// stfs f0,292(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
loc_82224EF0:
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224F00"))) PPC_WEAK_FUNC(sub_82224F00);
PPC_FUNC_IMPL(__imp__sub_82224F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lwz r31,2308(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82224F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,15176(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15176);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82224F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82224FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224FC0"))) PPC_WEAK_FUNC(sub_82224FC0);
PPC_FUNC_IMPL(__imp__sub_82224FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184400
	ctx.lr = 0x82224FC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// addi r26,r11,-4188
	ctx.r26.s64 = ctx.r11.s64 + -4188;
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// addi r27,r3,508
	ctx.r27.s64 = ctx.r3.s64 + 508;
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r30.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// addi r10,r3,188
	ctx.r10.s64 = ctx.r3.s64 + 188;
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r30.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
	// stw r29,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r29.u32);
	// stw r29,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r29.u32);
	// stw r29,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r29.u32);
	// stw r29,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r29.u32);
	// stw r29,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r29.u32);
	// stw r29,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r29.u32);
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r6,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r6.u32);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r8,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r8.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// bl 0x820cfef8
	ctx.lr = 0x82225128;
	sub_820CFEF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r3.u32);
	// lis r6,-32112
	ctx.r6.s64 = -2104492032;
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// lwz r4,512(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r27,r6,-28744
	ctx.r27.s64 = ctx.r6.s64 + -28744;
	// stw r4,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// stb r28,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r28.u8);
	// lwz r9,512(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// stb r28,21(r9)
	PPC_STORE_U8(ctx.r9.u32 + 21, ctx.r28.u8);
	// bl 0x82184480
	ctx.lr = 0x8222516C;
	sub_82184480(ctx, base);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82184480
	ctx.lr = 0x8222517C;
	sub_82184480(ctx, base);
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82184480
	ctx.lr = 0x8222518C;
	sub_82184480(ctx, base);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r31,732
	ctx.r11.s64 = ctx.r31.s64 + 732;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r8.u32);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r7,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r7.u32);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r6,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r6.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
	// stw r30,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r30.u32);
	// std r30,776(r31)
	PPC_STORE_U64(ctx.r31.u32 + 776, ctx.r30.u64);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// bl 0x82129470
	ctx.lr = 0x822251E8;
	sub_82129470(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrldi r8,r10,29
	ctx.r8.u64 = ctx.r10.u64 & 0x7FFFFFFFF;
	// std r10,776(r31)
	PPC_STORE_U64(ctx.r31.u32 + 776, ctx.r10.u64);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r6,r7,14
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFFF;
	// std r8,776(r31)
	PPC_STORE_U64(ctx.r31.u32 + 776, ctx.r8.u64);
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// clrlwi r4,r5,29
	ctx.r4.u64 = ctx.r5.u32 & 0x7;
	// stw r6,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r6.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82184450
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225238"))) PPC_WEAK_FUNC(sub_82225238);
PPC_FUNC_IMPL(__imp__sub_82225238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184404
	ctx.lr = 0x82225240;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8222525C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225284
	if (ctx.cr6.eq) goto loc_82225284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
loc_82225284:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822252ac
	if (ctx.cr6.eq) goto loc_822252AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822252A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_822252AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822252d4
	if (ctx.cr6.eq) goto loc_822252D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822252D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_822252D4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8222525c
	if (!ctx.cr0.eq) goto loc_8222525C;
	// lwz r11,512(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 512);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq cr6,0x8222533c
	if (ctx.cr6.eq) goto loc_8222533C;
loc_822252FC:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225324
	if (ctx.cr6.eq) goto loc_82225324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_82225324:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x820c60e8
	ctx.lr = 0x8222532C;
	sub_820C60E8(ctx, base);
	// lwz r11,512(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 512);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822252fc
	if (!ctx.cr6.eq) goto loc_822252FC;
loc_8222533C:
	// lwz r3,312(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225364
	if (ctx.cr6.eq) goto loc_82225364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r28.u32);
loc_82225364:
	// lwz r3,316(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222538c
	if (ctx.cr6.eq) goto loc_8222538C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,316(r27)
	PPC_STORE_U32(ctx.r27.u32 + 316, ctx.r28.u32);
loc_8222538C:
	// lwz r3,332(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822253b4
	if (ctx.cr6.eq) goto loc_822253B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822253B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,332(r27)
	PPC_STORE_U32(ctx.r27.u32 + 332, ctx.r28.u32);
loc_822253B4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r29,2048
	ctx.r29.s64 = 2048;
	// addi r30,r11,-11552
	ctx.r30.s64 = ctx.r11.s64 + -11552;
loc_822253C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822253e8
	if (ctx.cr6.eq) goto loc_822253E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822253E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_822253E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822253c0
	if (!ctx.cr0.eq) goto loc_822253C0;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225420
	if (ctx.cr6.eq) goto loc_82225420;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,3264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3264, ctx.r28.u32);
loc_82225420:
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// lwz r3,3260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222544c
	if (ctx.cr6.eq) goto loc_8222544C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,3260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3260, ctx.r28.u32);
loc_8222544C:
	// addi r3,r27,508
	ctx.r3.s64 = ctx.r27.s64 + 508;
	// bl 0x820d49e0
	ctx.lr = 0x82225454;
	sub_820D49E0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82184454
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222545C"))) PPC_WEAK_FUNC(sub_8222545C);
PPC_FUNC_IMPL(__imp__sub_8222545C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,508
	ctx.r3.s64 = ctx.r11.s64 + 508;
	// bl 0x820ca9c0
	ctx.lr = 0x82225478;
	sub_820CA9C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225488"))) PPC_WEAK_FUNC(sub_82225488);
PPC_FUNC_IMPL(__imp__sub_82225488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x82225490;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r28,r11,-1360
	ctx.r28.s64 = ctx.r11.s64 + -1360;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// lfs f30,15176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15176);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f31,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82225574
	if (ctx.cr6.eq) goto loc_82225574;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r10,-30708(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30708);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822254f4
	if (!ctx.cr6.eq) goto loc_822254F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822254f4
	if (ctx.cr6.eq) goto loc_822254F4;
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82225d78
	if (ctx.cr6.eq) goto loc_82225D78;
loc_822254F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,-30708(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30708, ctx.r11.u32);
	// beq cr6,0x82225508
	if (ctx.cr6.eq) goto loc_82225508;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8222550c
	goto loc_8222550C;
loc_82225508:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8222550C:
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,300(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82225568
	if (ctx.cr6.eq) goto loc_82225568;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r7,r31,108
	ctx.r7.s64 = ctx.r31.s64 + 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222555C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,788(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
loc_82225568:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r10.u32);
loc_82225574:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82225d78
	if (!ctx.cr6.eq) goto loc_82225D78;
	// ld r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 776);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8222559c
	if (!ctx.cr6.eq) goto loc_8222559C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222559C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225600
	if (ctx.cr6.eq) goto loc_82225600;
	// addi r5,r31,588
	ctx.r5.s64 = ctx.r31.s64 + 588;
	// addi r4,r31,524
	ctx.r4.s64 = ctx.r31.s64 + 524;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r29,r31,652
	ctx.r29.s64 = ctx.r31.s64 + 652;
	// bl 0x820c72a8
	ctx.lr = 0x822255BC;
	sub_820C72A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x820c72a8
	ctx.lr = 0x822255CC;
	sub_820C72A8(ctx, base);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822255EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r12,-17
	ctx.r12.s64 = -1114112;
	// ld r9,776(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 776);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// std r8,776(r31)
	PPC_STORE_U64(ctx.r31.u32 + 776, ctx.r8.u64);
loc_82225600:
	// ld r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 776);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82225618
	if (!ctx.cr6.eq) goto loc_82225618;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225618:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225658
	if (ctx.cr6.eq) goto loc_82225658;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r6,r31,524
	ctx.r6.s64 = ctx.r31.s64 + 524;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r12,-257
	ctx.r12.s64 = -16842752;
	// ld r9,776(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 776);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// std r8,776(r31)
	PPC_STORE_U64(ctx.r31.u32 + 776, ctx.r8.u64);
loc_82225658:
	// ld r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 776);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82225670
	if (!ctx.cr6.eq) goto loc_82225670;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225670:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822256cc
	if (ctx.cr6.eq) goto loc_822256CC;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,224(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822256B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r12,-4097
	ctx.r12.s64 = -268500992;
	// ld r7,776(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 776);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & ctx.r12.u64;
	// std r6,776(r31)
	PPC_STORE_U64(ctx.r31.u32 + 776, ctx.r6.u64);
loc_822256CC:
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822256e0
	if (ctx.cr6.eq) goto loc_822256E0;
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x822256e4
	goto loc_822256E4;
loc_822256E0:
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_822256E4:
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,748(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82225758
	if (ctx.cr6.eq) goto loc_82225758;
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225750
	if (ctx.cr6.eq) goto loc_82225750;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r6,r31,756
	ctx.r6.s64 = ctx.r31.s64 + 756;
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r8,r9,0,15,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r8,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r8.u32);
loc_82225750:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
loc_82225758:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822258a4
	if (ctx.cr6.eq) goto loc_822258A4;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r5,12
	ctx.r5.s64 = 12;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822257A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f10,32(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfs f8,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lfs f7,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,220(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82225810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f6,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lfs f3,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,220(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222587C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// lwz r10,224(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822258A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822258A4:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq cr6,0x82225b00
	if (ctx.cr6.eq) goto loc_82225B00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822258f4
	if (!ctx.cr6.eq) goto loc_822258F4;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822258E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,788(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
loc_822258F4:
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225aa8
	if (ctx.cr6.eq) goto loc_82225AA8;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225a9c
	if (ctx.cr6.eq) goto loc_82225A9C;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r5,6
	ctx.r5.s64 = 6;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lfs f10,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f9,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f8,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f7,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822259BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lfs f6,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,220(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82225A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,296(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lfs f2,64(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lfs f1,68(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// lfs f12,72(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225A9C:
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r10.u32);
loc_82225AA8:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225b3c
	if (ctx.cr6.eq) goto loc_82225B3C;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r6,r31,732
	ctx.r6.s64 = ctx.r31.s64 + 732;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,744(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,220(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82225AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r6,r7,0,22,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r6,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r6.u32);
	// b 0x82225b3c
	goto loc_82225B3C;
loc_82225B00:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225b3c
	if (ctx.cr6.eq) goto loc_82225B3C;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,788(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
loc_82225B3C:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lis r10,12
	ctx.r10.s64 = 786432;
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// ori r29,r10,63568
	ctx.r29.u64 = ctx.r10.u64 | 63568;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82225bdc
	if (ctx.cr6.eq) goto loc_82225BDC;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225b74
	if (ctx.cr6.eq) goto loc_82225B74;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82225b74
	if (!ctx.cr6.lt) goto loc_82225B74;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82225b78
	goto loc_82225B78;
loc_82225B74:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82225B78:
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r6,r31,188
	ctx.r6.s64 = ctx.r31.s64 + 188;
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// stfs f11,192(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lwz r11,220(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,196(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bctrl 
	ctx.lr = 0x82225BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r9.u32);
loc_82225BDC:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225ce4
	if (ctx.cr6.eq) goto loc_82225CE4;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82225ce4
	if (!ctx.cr6.lt) goto loc_82225CE4;
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225c30
	if (ctx.cr6.eq) goto loc_82225C30;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r6,r31,716
	ctx.r6.s64 = ctx.r31.s64 + 716;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r8,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r8.u32);
loc_82225C30:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225ce4
	if (ctx.cr6.eq) goto loc_82225CE4;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r4,r11,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r5,r11,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,220(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82225CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r6,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r6.u32);
loc_82225CE4:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225d20
	if (ctx.cr6.eq) goto loc_82225D20;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r6,r31,280
	ctx.r6.s64 = ctx.r31.s64 + 280;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r8,r9,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r8.u32);
loc_82225D20:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225d78
	if (ctx.cr6.eq) goto loc_82225D78;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225d44
	if (ctx.cr6.eq) goto loc_82225D44;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82225d48
	goto loc_82225D48;
loc_82225D44:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82225D48:
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r8,r9,0,21,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r8,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r8.u32);
loc_82225D78:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225D88"))) PPC_WEAK_FUNC(sub_82225D88);
PPC_FUNC_IMPL(__imp__sub_82225D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,2308(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// bl 0x820d4d68
	ctx.lr = 0x82225DB8;
	sub_820D4D68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,450
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 450, ctx.xer);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// beq cr6,0x82225e24
	if (ctx.cr6.eq) goto loc_82225E24;
	// cmplwi cr6,r30,68
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 68, ctx.xer);
	// beq cr6,0x82225e24
	if (ctx.cr6.eq) goto loc_82225E24;
	// cmplwi cr6,r30,338
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 338, ctx.xer);
	// beq cr6,0x82225dec
	if (ctx.cr6.eq) goto loc_82225DEC;
	// cmplwi cr6,r30,66
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 66, ctx.xer);
	// beq cr6,0x82225dec
	if (ctx.cr6.eq) goto loc_82225DEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82225e80
	goto loc_82225E80;
loc_82225DEC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82225e80
	if (ctx.cr6.eq) goto loc_82225E80;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225e1c
	if (ctx.cr6.eq) goto loc_82225E1C;
	// lwz r3,3428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225E1C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82225e58
	goto loc_82225E58;
loc_82225E24:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82225e80
	if (ctx.cr6.eq) goto loc_82225E80;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225e54
	if (ctx.cr6.eq) goto loc_82225E54;
	// lwz r3,3428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225E54:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_82225E58:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r3,3428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r4,228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82225E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82207928
	ctx.lr = 0x82225E80;
	sub_82207928(ctx, base);
loc_82225E80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225E98"))) PPC_WEAK_FUNC(sub_82225E98);
PPC_FUNC_IMPL(__imp__sub_82225E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184400
	ctx.lr = 0x82225EA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lwz r31,2308(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82225EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,15176(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15176);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r28,-32158
	ctx.r28.s64 = -2107506688;
	// addi r7,r8,-1360
	ctx.r7.s64 = ctx.r8.s64 + -1360;
	// lwz r11,11000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11000);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lwz r3,3428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3428);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,10996(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10996);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3428);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r7,180(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// lwz r5,232(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// lwz r4,228(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82225F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3428);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,160(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lwz r27,64(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bctrl 
	ctx.lr = 0x82225F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,148(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822076c8
	ctx.lr = 0x82225FC0;
	sub_822076C8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822076c8
	ctx.lr = 0x82225FCC;
	sub_822076C8(ctx, base);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// beq cr6,0x8222607c
	if (ctx.cr6.eq) goto loc_8222607C;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8222607c
	if (!ctx.cr6.eq) goto loc_8222607C;
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82226034
	if (ctx.cr6.eq) goto loc_82226034;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82226034:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820d4d68
	ctx.lr = 0x8222604C;
	sub_820D4D68(ctx, base);
	// lwz r26,56(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222607C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222607C:
	// lwz r6,312(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822260a8
	if (ctx.cr6.eq) goto loc_822260A8;
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822260A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822260A8:
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822260C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820d4d68
	ctx.lr = 0x822260DC;
	sub_820D4D68(ctx, base);
	// lwz r29,56(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222610C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82226128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3428);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,184(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 184);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222613C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r3,3264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82226154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82226180
	if (ctx.cr6.eq) goto loc_82226180;
	// lwz r3,3428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3428);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
	// stw r9,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r9.u32);
loc_82226180:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82184450
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226188"))) PPC_WEAK_FUNC(sub_82226188);
PPC_FUNC_IMPL(__imp__sub_82226188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x82226190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,2308(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// ble cr6,0x822261e0
	if (!ctx.cr6.gt) goto loc_822261E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225488
	ctx.lr = 0x822261B4;
	sub_82225488(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,3264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3264);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822261E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822261E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822261E8"))) PPC_WEAK_FUNC(sub_822261E8);
PPC_FUNC_IMPL(__imp__sub_822261E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x822261F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r31,2308(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// ble cr6,0x8222624c
	if (!ctx.cr6.gt) goto loc_8222624C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225488
	ctx.lr = 0x82226218;
	sub_82225488(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,3264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3264);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222624C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222624C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226260"))) PPC_WEAK_FUNC(sub_82226260);
PPC_FUNC_IMPL(__imp__sub_82226260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843d0
	ctx.lr = 0x82226268;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82184a84
	ctx.lr = 0x82226270;
	__savefpr_27(ctx, base);
	// addi r31,r1,-720
	ctx.r31.s64 = ctx.r1.s64 + -720;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r20,3
	ctx.r20.s64 = 3;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r17,16
	ctx.r17.s64 = 16;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r20,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r20.u32);
	// li r21,10
	ctx.r21.s64 = 10;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// li r16,20
	ctx.r16.s64 = 20;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// li r18,5
	ctx.r18.s64 = 5;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// li r24,255
	ctx.r24.s64 = 255;
	// stw r17,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r17.u32);
	// li r25,17
	ctx.r25.s64 = 17;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r21,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r21.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r16,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r16.u32);
	// stw r23,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r23.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r18,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r18.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r24,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r24.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r25,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r25.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x8222630C;
	sub_821809D0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r14,r11,-4804
	ctx.r14.s64 = ctx.r11.s64 + -4804;
	// beq cr6,0x8222634c
	if (ctx.cr6.eq) goto loc_8222634C;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82206d08
	ctx.lr = 0x82226344;
	sub_82206D08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82226350
	goto loc_82226350;
loc_8222634C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82226350:
	// li r11,324
	ctx.r11.s64 = 324;
	// addi r26,r29,508
	ctx.r26.s64 = ctx.r29.s64 + 508;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d4d68
	ctx.lr = 0x82226368;
	sub_820D4D68(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// bl 0x82206ee0
	ctx.lr = 0x8222637C;
	sub_82206EE0(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r19,12
	ctx.r19.s64 = 12;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r15,24
	ctx.r15.s64 = 24;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r19,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r19.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r20,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r20.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r15,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r15.u32);
	// stw r23,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r23.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r18,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r18.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r24,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r24.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r25,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r25.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x822263F0;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226428
	if (ctx.cr6.eq) goto loc_82226428;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82206d08
	ctx.lr = 0x82226420;
	sub_82206D08(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8222642c
	goto loc_8222642C;
loc_82226428:
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_8222642C:
	// li r11,274
	ctx.r11.s64 = 274;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d4d68
	ctx.lr = 0x82226440;
	sub_820D4D68(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// bl 0x82206ee0
	ctx.lr = 0x82226454;
	sub_82206EE0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r19,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r19.u32);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r21,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r21.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r17,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r17.u32);
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r21,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r21.u32);
	// stw r23,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r23.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r16,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r16.u32);
	// stw r23,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r23.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r18,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r18.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r24,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r24.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r25,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r25.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x822264D4;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222650c
	if (ctx.cr6.eq) goto loc_8222650C;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82206d08
	ctx.lr = 0x82226504;
	sub_82206D08(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x82226510
	goto loc_82226510;
loc_8222650C:
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_82226510:
	// li r11,450
	ctx.r11.s64 = 450;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d4d68
	ctx.lr = 0x82226524;
	sub_820D4D68(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// bl 0x82206ee0
	ctx.lr = 0x82226538;
	sub_82206EE0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r20,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r20.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r17,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r17.u32);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r21,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r21.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r24,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r24.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r25,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r25.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x82226588;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822265c0
	if (ctx.cr6.eq) goto loc_822265C0;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82206d08
	ctx.lr = 0x822265B8;
	sub_82206D08(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x822265c4
	goto loc_822265C4;
loc_822265C0:
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_822265C4:
	// li r11,68
	ctx.r11.s64 = 68;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d4d68
	ctx.lr = 0x822265D8;
	sub_820D4D68(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// bl 0x82206ee0
	ctx.lr = 0x822265EC;
	sub_82206EE0(ctx, base);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r8,36
	ctx.r8.s64 = 36;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r7,52
	ctx.r7.s64 = 52;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r19,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r19.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r20,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r20.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r15,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r15.u32);
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r21,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r21.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// stw r23,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r23.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r18,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r18.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r20,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r20.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r7,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r7.u32);
	// stw r27,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r28,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r28.u32);
	// stw r23,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r23.u32);
	// stw r24,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r24.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r25,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r25.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x822266A8;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822266e0
	if (ctx.cr6.eq) goto loc_822266E0;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82206d08
	ctx.lr = 0x822266D8;
	sub_82206D08(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x822266e4
	goto loc_822266E4;
loc_822266E0:
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_822266E4:
	// li r11,338
	ctx.r11.s64 = 338;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d4d68
	ctx.lr = 0x822266F8;
	sub_820D4D68(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// bl 0x82206ee0
	ctx.lr = 0x8222670C;
	sub_82206EE0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r19,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r19.u32);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r21,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r21.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r24,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r24.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r25,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r25.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x8222675C;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226794
	if (ctx.cr6.eq) goto loc_82226794;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82206d08
	ctx.lr = 0x8222678C;
	sub_82206D08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82226798
	goto loc_82226798;
loc_82226794:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82226798:
	// li r11,66
	ctx.r11.s64 = 66;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d4d68
	ctx.lr = 0x822267AC;
	sub_820D4D68(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// bl 0x82206ee0
	ctx.lr = 0x822267C0;
	sub_82206EE0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r19,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r19.u32);
	// stw r23,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r23.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r18,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r18.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r24,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r24.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r25,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r25.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x82226810;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226848
	if (ctx.cr6.eq) goto loc_82226848;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82206d08
	ctx.lr = 0x82226840;
	sub_82206D08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8222684c
	goto loc_8222684C;
loc_82226848:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8222684C:
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d4d68
	ctx.lr = 0x8222685C;
	sub_820D4D68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// bl 0x82206ee0
	ctx.lr = 0x82226870;
	sub_82206EE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212a140
	ctx.lr = 0x82226878;
	sub_8212A140(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r10,-8080
	ctx.r4.s64 = ctx.r10.s64 + -8080;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// bl 0x8212a180
	ctx.lr = 0x8222688C;
	sub_8212A180(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x821809d0
	ctx.lr = 0x82226894;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822268a8
	if (ctx.cr6.eq) goto loc_822268A8;
	// bl 0x82207b38
	ctx.lr = 0x822268A4;
	sub_82207B38(ctx, base);
	// b 0x822268ac
	goto loc_822268AC;
loc_822268A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822268AC:
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82207a08
	ctx.lr = 0x822268BC;
	sub_82207A08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212a140
	ctx.lr = 0x822268C4;
	sub_8212A140(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r11,-8072
	ctx.r4.s64 = ctx.r11.s64 + -8072;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// bl 0x8212a180
	ctx.lr = 0x822268D8;
	sub_8212A180(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x821809d0
	ctx.lr = 0x822268E0;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822268f4
	if (ctx.cr6.eq) goto loc_822268F4;
	// bl 0x82208228
	ctx.lr = 0x822268F0;
	sub_82208228(ctx, base);
	// b 0x822268f8
	goto loc_822268F8;
loc_822268F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822268F8:
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x822080f8
	ctx.lr = 0x82226908;
	sub_822080F8(ctx, base);
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x821809d0
	ctx.lr = 0x82226910;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226924
	if (ctx.cr6.eq) goto loc_82226924;
	// bl 0x82207748
	ctx.lr = 0x82226920;
	sub_82207748(ctx, base);
	// b 0x82226928
	goto loc_82226928;
loc_82226924:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226928:
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82207420
	ctx.lr = 0x82226938;
	sub_82207420(ctx, base);
	// lis r25,-32158
	ctx.r25.s64 = -2107506688;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,3264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3264);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r3,3264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3264);
	// addi r6,r8,-1360
	ctx.r6.s64 = ctx.r8.s64 + -1360;
	// std r7,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,372(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,15176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15176);
	ctx.f30.f64 = double(temp.f32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stfs f30,328(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// lfs f28,64(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f28.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f27,312(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 312);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r31,288
	ctx.r6.s64 = ctx.r31.s64 + 288;
	// lfs f29,15132(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 15132);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,10996(r27)
	PPC_STORE_U32(ctx.r27.u32 + 10996, ctx.r11.u32);
	// stfs f31,292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stw r10,11000(r26)
	PPC_STORE_U32(ctx.r26.u32 + 11000, ctx.r10.u32);
	// stfs f31,296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// stfs f31,300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// fdivs f10,f28,f12
	ctx.f10.f64 = double(float(ctx.f28.f64 / ctx.f12.f64));
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f31,316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f31,332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f29,336(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f30,340(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stfs f31,344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f30,348(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// fdivs f9,f27,f11
	ctx.f9.f64 = double(float(ctx.f27.f64 / ctx.f11.f64));
	// stfs f10,288(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f9,308(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212a140
	ctx.lr = 0x82226A1C;
	sub_8212A140(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r9,-8064
	ctx.r4.s64 = ctx.r9.s64 + -8064;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// bl 0x8212a180
	ctx.lr = 0x82226A30;
	sub_8212A180(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x821809d0
	ctx.lr = 0x82226A38;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226a4c
	if (ctx.cr6.eq) goto loc_82226A4C;
	// bl 0x82207b38
	ctx.lr = 0x82226A48;
	sub_82207B38(ctx, base);
	// b 0x82226a50
	goto loc_82226A50;
loc_82226A4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226A50:
	// stw r3,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82207a08
	ctx.lr = 0x82226A60;
	sub_82207A08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212a140
	ctx.lr = 0x82226A68;
	sub_8212A140(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r11,-8056
	ctx.r4.s64 = ctx.r11.s64 + -8056;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// bl 0x8212a180
	ctx.lr = 0x82226A7C;
	sub_8212A180(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x821809d0
	ctx.lr = 0x82226A84;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226a98
	if (ctx.cr6.eq) goto loc_82226A98;
	// bl 0x82208228
	ctx.lr = 0x82226A94;
	sub_82208228(ctx, base);
	// b 0x82226a9c
	goto loc_82226A9C;
loc_82226A98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226A9C:
	// stw r3,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x822080f8
	ctx.lr = 0x82226AAC;
	sub_822080F8(ctx, base);
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x821809d0
	ctx.lr = 0x82226AB4;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226ac8
	if (ctx.cr6.eq) goto loc_82226AC8;
	// bl 0x82207748
	ctx.lr = 0x82226AC4;
	sub_82207748(ctx, base);
	// b 0x82226acc
	goto loc_82226ACC;
loc_82226AC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226ACC:
	// stw r3,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r3.u32);
	// lwz r5,48(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x82207420
	ctx.lr = 0x82226ADC;
	sub_82207420(ctx, base);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226da8
	if (ctx.cr6.eq) goto loc_82226DA8;
	// lwz r10,11000(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11000);
	// addi r28,r29,348
	ctx.r28.s64 = ctx.r29.s64 + 348;
	// lwz r11,10996(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10996);
	// addi r7,r29,360
	ctx.r7.s64 = ctx.r29.s64 + 360;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// std r10,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r10.u64);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
	// addi r6,r29,368
	ctx.r6.s64 = ctx.r29.s64 + 368;
	// addi r5,r29,380
	ctx.r5.s64 = ctx.r29.s64 + 380;
	// stfs f31,348(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 348, temp.u32);
	// addi r4,r29,388
	ctx.r4.s64 = ctx.r29.s64 + 388;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r3,r29,400
	ctx.r3.s64 = ctx.r29.s64 + 400;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// addi r11,r29,408
	ctx.r11.s64 = ctx.r29.s64 + 408;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// addi r10,r29,420
	ctx.r10.s64 = ctx.r29.s64 + 420;
	// lfs f0,10876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10876);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r9,r29,428
	ctx.r9.s64 = ctx.r29.s64 + 428;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r8,r29,440
	ctx.r8.s64 = ctx.r29.s64 + 440;
	// addi r7,r29,448
	ctx.r7.s64 = ctx.r29.s64 + 448;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r6,r29,460
	ctx.r6.s64 = ctx.r29.s64 + 460;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r5,r29,468
	ctx.r5.s64 = ctx.r29.s64 + 468;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r4,r29,480
	ctx.r4.s64 = ctx.r29.s64 + 480;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// addi r11,r29,488
	ctx.r11.s64 = ctx.r29.s64 + 488;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stfs f31,352(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 352, temp.u32);
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// stfs f31,356(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 356, temp.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// stfs f31,360(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 360, temp.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f31,364(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 364, temp.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// stfs f31,368(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 368, temp.u32);
	// stfs f31,376(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 376, temp.u32);
	// lfd f13,448(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 448);
	// lfd f12,96(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,372(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 372, temp.u32);
	// stfs f31,380(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 380, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f30,384(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 384, temp.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f8,388(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 388, temp.u32);
	// stfs f31,392(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 392, temp.u32);
	// stfs f31,396(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 396, temp.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f30,400(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 400, temp.u32);
	// stfs f31,404(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 404, temp.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f8,408(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 408, temp.u32);
	// stfs f9,412(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 412, temp.u32);
	// stfs f31,416(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 416, temp.u32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f30,420(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 420, temp.u32);
	// stfs f30,424(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 424, temp.u32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,428(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 428, temp.u32);
	// stfs f31,432(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 432, temp.u32);
	// stfs f0,436(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 436, temp.u32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,440(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 440, temp.u32);
	// stfs f31,444(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 444, temp.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,448(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 448, temp.u32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f9,452(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 452, temp.u32);
	// stfs f0,456(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 456, temp.u32);
	// stfs f31,460(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 460, temp.u32);
	// addi r10,r29,500
	ctx.r10.s64 = ctx.r29.s64 + 500;
	// stfs f30,464(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 464, temp.u32);
	// stfs f8,468(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 468, temp.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stfs f31,472(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 472, temp.u32);
	// stfs f0,476(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 476, temp.u32);
	// stfs f30,480(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 480, temp.u32);
	// stfs f31,484(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 484, temp.u32);
	// stfs f8,488(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 488, temp.u32);
	// stfs f9,492(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 492, temp.u32);
	// stfs f0,496(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 496, temp.u32);
	// stfs f30,500(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 500, temp.u32);
	// stfs f30,504(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 504, temp.u32);
	// bl 0x821809d0
	ctx.lr = 0x82226C68;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226c7c
	if (ctx.cr6.eq) goto loc_82226C7C;
	// bl 0x82207fa0
	ctx.lr = 0x82226C78;
	sub_82207FA0(ctx, base);
	// b 0x82226c80
	goto loc_82226C80;
loc_82226C7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226C80:
	// stw r3,316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 316, ctx.r3.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82207e40
	ctx.lr = 0x82226C98;
	sub_82207E40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822247a8
	ctx.lr = 0x82226CA4;
	sub_822247A8(ctx, base);
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x821809d0
	ctx.lr = 0x82226CAC;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226cc0
	if (ctx.cr6.eq) goto loc_82226CC0;
	// bl 0x82208cf0
	ctx.lr = 0x82226CBC;
	sub_82208CF0(ctx, base);
	// b 0x82226cc4
	goto loc_82226CC4;
loc_82226CC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226CC4:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r3,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r3.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// addi r4,r11,-8048
	ctx.r4.s64 = ctx.r11.s64 + -8048;
	// bl 0x820c0fd0
	ctx.lr = 0x82226CDC;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,416
	ctx.r4.s64 = ctx.r31.s64 + 416;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82212da8
	ctx.lr = 0x82226CE8;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x822bb760
	ctx.lr = 0x82226CF4;
	sub_822BB760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8220bb08
	ctx.lr = 0x82226D00;
	sub_8220BB08(ctx, base);
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82226d14
	if (ctx.cr6.lt) goto loc_82226D14;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x82183380
	ctx.lr = 0x82226D14;
	sub_82183380(ctx, base);
loc_82226D14:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stb r30,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r30.u8);
	// stw r28,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r28.u32);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82226d38
	if (ctx.cr6.lt) goto loc_82226D38;
	// lwz r3,496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// bl 0x82183380
	ctx.lr = 0x82226D38;
	sub_82183380(ctx, base);
loc_82226D38:
	// stw r28,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r28.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stb r30,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r30.u8);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82226d58
	if (ctx.cr6.lt) goto loc_82226D58;
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// bl 0x82183380
	ctx.lr = 0x82226D58;
	sub_82183380(ctx, base);
loc_82226D58:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r28,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r28.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r30,416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 416, ctx.r30.u8);
	// beq cr6,0x82226d84
	if (ctx.cr6.eq) goto loc_82226D84;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x82226d8c
	goto loc_82226D8C;
loc_82226D84:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82226D8C:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,332(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82208888
	ctx.lr = 0x82226D9C;
	sub_82208888(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8220ba88
	ctx.lr = 0x82226DA4;
	sub_8220BA88(ctx, base);
	// b 0x82226ec0
	goto loc_82226EC0;
loc_82226DA8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stfs f31,348(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 348, temp.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// stfs f31,352(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 352, temp.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stfs f31,356(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 356, temp.u32);
	// std r8,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r7,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// stfs f31,360(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 360, temp.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stfs f31,364(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 364, temp.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stfs f31,368(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 368, temp.u32);
	// stfs f31,376(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 376, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stw r11,15184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15184, ctx.r11.u32);
	// addi r28,r29,348
	ctx.r28.s64 = ctx.r29.s64 + 348;
	// addi r5,r29,360
	ctx.r5.s64 = ctx.r29.s64 + 360;
	// addi r4,r29,368
	ctx.r4.s64 = ctx.r29.s64 + 368;
	// stw r10,15180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15180, ctx.r10.u32);
	// addi r11,r29,380
	ctx.r11.s64 = ctx.r29.s64 + 380;
	// addi r10,r29,388
	ctx.r10.s64 = ctx.r29.s64 + 388;
	// addi r9,r29,400
	ctx.r9.s64 = ctx.r29.s64 + 400;
	// addi r8,r29,408
	ctx.r8.s64 = ctx.r29.s64 + 408;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,372(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 372, temp.u32);
	// stfs f31,380(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 380, temp.u32);
	// addi r7,r29,420
	ctx.r7.s64 = ctx.r29.s64 + 420;
	// stfs f30,384(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 384, temp.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// stfs f31,392(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 392, temp.u32);
	// stfs f31,396(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 396, temp.u32);
	// stfs f9,388(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 388, temp.u32);
	// stfs f30,400(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 400, temp.u32);
	// stfs f31,404(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 404, temp.u32);
	// stfs f9,408(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 408, temp.u32);
	// stfs f10,412(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 412, temp.u32);
	// stfs f31,416(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 416, temp.u32);
	// stfs f30,420(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 420, temp.u32);
	// stfs f30,424(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 424, temp.u32);
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// bl 0x821809d0
	ctx.lr = 0x82226E90;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226ea4
	if (ctx.cr6.eq) goto loc_82226EA4;
	// bl 0x82207fa0
	ctx.lr = 0x82226EA0;
	sub_82207FA0(ctx, base);
	// b 0x82226ea8
	goto loc_82226EA8;
loc_82226EA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226EA8:
	// stw r3,316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 316, ctx.r3.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82207e40
	ctx.lr = 0x82226EC0;
	sub_82207E40(ctx, base);
loc_82226EC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212a140
	ctx.lr = 0x82226EC8;
	sub_8212A140(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r11,-8020
	ctx.r4.s64 = ctx.r11.s64 + -8020;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// bl 0x8212a180
	ctx.lr = 0x82226EDC;
	sub_8212A180(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x821809d0
	ctx.lr = 0x82226EE4;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226ef8
	if (ctx.cr6.eq) goto loc_82226EF8;
	// bl 0x82207b38
	ctx.lr = 0x82226EF4;
	sub_82207B38(ctx, base);
	// b 0x82226efc
	goto loc_82226EFC;
loc_82226EF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226EFC:
	// stw r3,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r3.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82207a08
	ctx.lr = 0x82226F0C;
	sub_82207A08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212a140
	ctx.lr = 0x82226F14;
	sub_8212A140(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r11,-8012
	ctx.r4.s64 = ctx.r11.s64 + -8012;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// bl 0x8212a180
	ctx.lr = 0x82226F28;
	sub_8212A180(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x821809d0
	ctx.lr = 0x82226F30;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226f44
	if (ctx.cr6.eq) goto loc_82226F44;
	// bl 0x82208228
	ctx.lr = 0x82226F40;
	sub_82208228(ctx, base);
	// b 0x82226f48
	goto loc_82226F48;
loc_82226F44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226F48:
	// stw r3,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r3.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x822080f8
	ctx.lr = 0x82226F58;
	sub_822080F8(ctx, base);
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x821809d0
	ctx.lr = 0x82226F60;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226f74
	if (ctx.cr6.eq) goto loc_82226F74;
	// bl 0x82207748
	ctx.lr = 0x82226F70;
	sub_82207748(ctx, base);
	// b 0x82226f78
	goto loc_82226F78;
loc_82226F74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226F78:
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// lwz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82207420
	ctx.lr = 0x82226F88;
	sub_82207420(ctx, base);
	// lwz r11,10996(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10996);
	// lwz r10,11000(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11000);
	// stfs f31,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f31,368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stfs f31,376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f31,380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f31,384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lwz r3,3264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3264);
	// stfs f31,388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// addi r6,r31,352
	ctx.r6.s64 = ctx.r31.s64 + 352;
	// stfs f30,392(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f30,404(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f30,412(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f7,f28,f9
	ctx.f7.f64 = double(float(ctx.f28.f64 / ctx.f9.f64));
	// stfs f7,352(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// fdivs f8,f27,f10
	ctx.f8.f64 = double(float(ctx.f27.f64 / ctx.f10.f64));
	// stfs f8,372(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,216(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82227020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x821809d0
	ctx.lr = 0x82227028;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222703c
	if (ctx.cr6.eq) goto loc_8222703C;
	// bl 0x82208cf0
	ctx.lr = 0x82227038;
	sub_82208CF0(ctx, base);
	// b 0x82227040
	goto loc_82227040;
loc_8222703C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82227040:
	// stw r3,312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 312, ctx.r3.u32);
	// bl 0x822089e0
	ctx.lr = 0x82227048;
	sub_822089E0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r29,2048
	ctx.r29.s64 = 2048;
	// addi r11,r11,-11552
	ctx.r11.s64 = ctx.r11.s64 + -11552;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82227058:
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x821809d0
	ctx.lr = 0x82227060;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227074
	if (ctx.cr6.eq) goto loc_82227074;
	// bl 0x82207fa0
	ctx.lr = 0x82227070;
	sub_82207FA0(ctx, base);
	// b 0x82227078
	goto loc_82227078;
loc_82227074:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82227078:
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,512
	ctx.r6.s64 = 512;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82207e40
	ctx.lr = 0x82227090;
	sub_82207E40(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82227058
	if (!ctx.cr0.eq) goto loc_82227058;
	// addi r1,r31,720
	ctx.r1.s64 = ctx.r31.s64 + 720;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82184ad0
	ctx.lr = 0x822270A4;
	__restfpr_27(ctx, base);
	// b 0x82184420
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822270A8"))) PPC_WEAK_FUNC(sub_822270A8);
PPC_FUNC_IMPL(__imp__sub_822270A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822270C0;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822270D0"))) PPC_WEAK_FUNC(sub_822270D0);
PPC_FUNC_IMPL(__imp__sub_822270D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822270E8;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822270F8"))) PPC_WEAK_FUNC(sub_822270F8);
PPC_FUNC_IMPL(__imp__sub_822270F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82227110;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227120"))) PPC_WEAK_FUNC(sub_82227120);
PPC_FUNC_IMPL(__imp__sub_82227120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82227138;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227148"))) PPC_WEAK_FUNC(sub_82227148);
PPC_FUNC_IMPL(__imp__sub_82227148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82227160;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227170"))) PPC_WEAK_FUNC(sub_82227170);
PPC_FUNC_IMPL(__imp__sub_82227170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82227188;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227198"))) PPC_WEAK_FUNC(sub_82227198);
PPC_FUNC_IMPL(__imp__sub_82227198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822271B0;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822271C0"))) PPC_WEAK_FUNC(sub_822271C0);
PPC_FUNC_IMPL(__imp__sub_822271C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822271D8;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822271E8"))) PPC_WEAK_FUNC(sub_822271E8);
PPC_FUNC_IMPL(__imp__sub_822271E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8220ba88
	ctx.lr = 0x82227200;
	sub_8220BA88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227210"))) PPC_WEAK_FUNC(sub_82227210);
PPC_FUNC_IMPL(__imp__sub_82227210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x820c9a70
	ctx.lr = 0x82227228;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227238"))) PPC_WEAK_FUNC(sub_82227238);
PPC_FUNC_IMPL(__imp__sub_82227238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x820c9a70
	ctx.lr = 0x82227250;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227260"))) PPC_WEAK_FUNC(sub_82227260);
PPC_FUNC_IMPL(__imp__sub_82227260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x820c9a70
	ctx.lr = 0x82227278;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227288"))) PPC_WEAK_FUNC(sub_82227288);
PPC_FUNC_IMPL(__imp__sub_82227288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822272A0;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822272B0"))) PPC_WEAK_FUNC(sub_822272B0);
PPC_FUNC_IMPL(__imp__sub_822272B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822272C8;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822272D8"))) PPC_WEAK_FUNC(sub_822272D8);
PPC_FUNC_IMPL(__imp__sub_822272D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x822272F0;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227300"))) PPC_WEAK_FUNC(sub_82227300);
PPC_FUNC_IMPL(__imp__sub_82227300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82227318;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227328"))) PPC_WEAK_FUNC(sub_82227328);
PPC_FUNC_IMPL(__imp__sub_82227328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82227340;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227350"))) PPC_WEAK_FUNC(sub_82227350);
PPC_FUNC_IMPL(__imp__sub_82227350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-720
	ctx.r31.s64 = ctx.r12.s64 + -720;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82227368;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227378"))) PPC_WEAK_FUNC(sub_82227378);
PPC_FUNC_IMPL(__imp__sub_82227378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8218440c
	ctx.lr = 0x82227380;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,2308(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// bl 0x82205aa8
	ctx.lr = 0x82227394;
	sub_82205AA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r8,-32158
	ctx.r8.s64 = -2107506688;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,3260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3260, ctx.r3.u32);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822273DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222740c
	if (ctx.cr6.eq) goto loc_8222740C;
	// li r11,1280
	ctx.r11.s64 = 1280;
	// stw r7,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r7.u32);
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r11,10996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10996, ctx.r11.u32);
	// stw r10,11000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11000, ctx.r10.u32);
	// b 0x82227414
	goto loc_82227414;
loc_8222740C:
	// lwz r11,10996(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10996);
	// lwz r10,11000(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11000);
loc_82227414:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r7,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r7.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x82206658
	ctx.lr = 0x82227434;
	sub_82206658(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3264, ctx.r3.u32);
	// beq cr6,0x8222745c
	if (ctx.cr6.eq) goto loc_8222745C;
	// bl 0x82207c10
	ctx.lr = 0x82227448;
	sub_82207C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222745c
	if (ctx.cr6.eq) goto loc_8222745C;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// stw r31,3424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3424, ctx.r31.u32);
loc_8222745C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82226260
	ctx.lr = 0x82227464;
	sub_82226260(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8218445c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227470"))) PPC_WEAK_FUNC(sub_82227470);
PPC_FUNC_IMPL(__imp__sub_82227470) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r5,-32174
	ctx.r5.s64 = -2108555264;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r4,-32174
	ctx.r4.s64 = -2108555264;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r31,-32174
	ctx.r31.s64 = -2108555264;
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r3,-32174
	ctx.r3.s64 = -2108555264;
	// stw r11,22716(r6)
	PPC_STORE_U32(ctx.r6.u32 + 22716, ctx.r11.u32);
	// stw r10,21444(r5)
	PPC_STORE_U32(ctx.r5.u32 + 21444, ctx.r10.u32);
	// stw r9,21680(r4)
	PPC_STORE_U32(ctx.r4.u32 + 21680, ctx.r9.u32);
	// stw r8,21668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21668, ctx.r8.u32);
	// stw r7,21464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21464, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822274B8"))) PPC_WEAK_FUNC(sub_822274B8);
PPC_FUNC_IMPL(__imp__sub_822274B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// lwz r11,22716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22716);
	// lwz r10,21444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21444);
	// lwz r9,21680(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21680);
	// lwz r8,21668(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21668);
	// lwz r7,21464(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21464);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// stw r7,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822274F8"))) PPC_WEAK_FUNC(sub_822274F8);
PPC_FUNC_IMPL(__imp__sub_822274F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r10,r11,1792
	ctx.r10.s64 = ctx.r11.s64 + 1792;
	// lwz r11,1792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1792);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227520"))) PPC_WEAK_FUNC(sub_82227520);
PPC_FUNC_IMPL(__imp__sub_82227520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227528"))) PPC_WEAK_FUNC(sub_82227528);
PPC_FUNC_IMPL(__imp__sub_82227528) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r5,-32174
	ctx.r5.s64 = -2108555264;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r4,-32174
	ctx.r4.s64 = -2108555264;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r31,-32174
	ctx.r31.s64 = -2108555264;
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r3,-32174
	ctx.r3.s64 = -2108555264;
	// stw r11,22716(r6)
	PPC_STORE_U32(ctx.r6.u32 + 22716, ctx.r11.u32);
	// stw r10,21444(r5)
	PPC_STORE_U32(ctx.r5.u32 + 21444, ctx.r10.u32);
	// stw r9,21680(r4)
	PPC_STORE_U32(ctx.r4.u32 + 21680, ctx.r9.u32);
	// stw r8,21668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21668, ctx.r8.u32);
	// stw r7,21464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21464, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227570"))) PPC_WEAK_FUNC(sub_82227570);
PPC_FUNC_IMPL(__imp__sub_82227570) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r5,-32174
	ctx.r5.s64 = -2108555264;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r4,-32174
	ctx.r4.s64 = -2108555264;
	// lis r31,-32174
	ctx.r31.s64 = -2108555264;
	// lis r30,-32174
	ctx.r30.s64 = -2108555264;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// lwz r10,22716(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22716);
	// lwz r9,21680(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21680);
	// lwz r8,21668(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21668);
	// lwz r7,21464(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21464);
	// lwz r6,21444(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21444);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// stw r7,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r7.u32);
	// stw r10,22716(r5)
	PPC_STORE_U32(ctx.r5.u32 + 22716, ctx.r10.u32);
	// stw r11,21680(r4)
	PPC_STORE_U32(ctx.r4.u32 + 21680, ctx.r11.u32);
	// stw r11,21668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21668, ctx.r11.u32);
	// stw r9,21464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21464, ctx.r9.u32);
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822275E0"))) PPC_WEAK_FUNC(sub_822275E0);
PPC_FUNC_IMPL(__imp__sub_822275E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82227618
	if (ctx.cr6.eq) goto loc_82227618;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82227618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227618:
	// lis r6,-32159
	ctx.r6.s64 = -2107572224;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r5,-32158
	ctx.r5.s64 = -2107506688;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r4,r6,1792
	ctx.r4.s64 = ctx.r6.s64 + 1792;
	// lis r3,-32158
	ctx.r3.s64 = -2107506688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3244(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3244);
	// stw r7,1792(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1792, ctx.r7.u32);
	// stb r9,2674(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2674, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82227678
	if (ctx.cr6.eq) goto loc_82227678;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82227678
	if (ctx.cr6.eq) goto loc_82227678;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82227678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227690"))) PPC_WEAK_FUNC(sub_82227690);
PPC_FUNC_IMPL(__imp__sub_82227690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x82227698;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82184a6c
	ctx.lr = 0x822276A0;
	__savefpr_21(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222790c
	if (ctx.cr6.eq) goto loc_8222790C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lfs f31,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f31.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-1360
	ctx.r30.s64 = ctx.r11.s64 + -1360;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f22,1656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	ctx.f22.f64 = double(temp.f32);
	// lfs f28,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f28.f64 = double(temp.f32);
	// ble cr6,0x82227838
	if (!ctx.cr6.gt) goto loc_82227838;
	// lfs f21,1652(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	ctx.f21.f64 = double(temp.f32);
	// lfs f27,1648(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f24.f64 = double(temp.f32);
	// lfs f29,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f29.f64 = double(temp.f32);
	// lfs f23,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// lfs f26,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
loc_822276F8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82227824
	if (ctx.cr6.gt) goto loc_82227824;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82227824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227824;
	// bdzf 4*cr6+eq,0x82227720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227720;
	// bdzf 4*cr6+eq,0x8222772c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222772C;
	// bne cr6,0x8222772c
	if (!ctx.cr6.eq) goto loc_8222772C;
loc_82227720:
	// fadds f31,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fadds f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// b 0x82227734
	goto loc_82227734;
loc_8222772C:
	// fadds f31,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// fadds f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
loc_82227734:
	// fcmpu cr6,f31,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f21.f64);
	// blt cr6,0x82227824
	if (ctx.cr6.lt) goto loc_82227824;
	// fcmpu cr6,f31,f22
	ctx.cr6.compare(ctx.f31.f64, ctx.f22.f64);
	// bgt cr6,0x82227838
	if (ctx.cr6.gt) goto loc_82227838;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822277d4
	if (ctx.cr6.eq) goto loc_822277D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82227790
	if (ctx.cr6.eq) goto loc_82227790;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82227824
	if (!ctx.cr6.eq) goto loc_82227824;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82227770
	if (ctx.cr6.lt) goto loc_82227770;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82227774
	goto loc_82227774;
loc_82227770:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82227774:
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f3,f24
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f24.f64;
	// li r3,36
	ctx.r3.s64 = 36;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8227daa0
	ctx.lr = 0x8222778C;
	sub_8227DAA0(ctx, base);
	// b 0x82227824
	goto loc_82227824;
loc_82227790:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x822277a4
	if (ctx.cr6.lt) goto loc_822277A4;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x822277a8
	goto loc_822277A8;
loc_822277A4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_822277A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82129a08
	ctx.lr = 0x822277C8;
	sub_82129A08(ctx, base);
	// li r3,70
	ctx.r3.s64 = 70;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// b 0x82227814
	goto loc_82227814;
loc_822277D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x822277e8
	if (ctx.cr6.lt) goto loc_822277E8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x822277ec
	goto loc_822277EC;
loc_822277E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_822277EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82129a08
	ctx.lr = 0x8222780C;
	sub_82129A08(ctx, base);
	// li r3,69
	ctx.r3.s64 = 69;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
loc_82227814:
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8227ede0
	ctx.lr = 0x82227824;
	sub_8227EDE0(ctx, base);
loc_82227824:
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822276f8
	if (ctx.cr6.lt) goto loc_822276F8;
loc_82227838:
	// fadds f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f22.f64));
	// lfs f13,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x822278cc
	if (!ctx.cr6.lt) goto loc_822278CC;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f12,1660(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	ctx.f12.f64 = double(temp.f32);
	// li r8,2054
	ctx.r8.s64 = 2054;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,-15812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15812);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,15176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15176);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq cr6,0x822278b8
	if (ctx.cr6.eq) goto loc_822278B8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,25
	ctx.r11.s64 = 25;
	// bne cr6,0x822278bc
	if (!ctx.cr6.eq) goto loc_822278BC;
loc_822278B8:
	// li r11,24
	ctx.r11.s64 = 24;
loc_822278BC:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82210648
	ctx.lr = 0x822278CC;
	sub_82210648(ctx, base);
loc_822278CC:
	// lfd f0,824(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 824);
	// lfd f13,8(r28)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8222790c
	if (ctx.cr6.eq) goto loc_8222790C;
	// lfs f0,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8222790c
	if (ctx.cr6.lt) goto loc_8222790C;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8220b620
	ctx.lr = 0x822278F0;
	sub_8220B620(ctx, base);
	// lfd f0,8(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// fsub f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfs f12,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1664(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fnmsubs f10,f11,f0,f12
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f10,64(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 64, temp.u32);
loc_8222790C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82184ab8
	ctx.lr = 0x82227918;
	__restfpr_21(ctx, base);
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227928"))) PPC_WEAK_FUNC(sub_82227928);
PPC_FUNC_IMPL(__imp__sub_82227928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// bl 0x822275e0
	ctx.lr = 0x8222794C;
	sub_822275E0(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8221ed18
	ctx.lr = 0x82227954;
	sub_8221ED18(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227964
	if (ctx.cr6.eq) goto loc_82227964;
	// bl 0x82183380
	ctx.lr = 0x82227964;
	sub_82183380(ctx, base);
loc_82227964:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222797C"))) PPC_WEAK_FUNC(sub_8222797C);
PPC_FUNC_IMPL(__imp__sub_8222797C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8220c1b0
	ctx.lr = 0x82227998;
	sub_8220C1B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822279A8"))) PPC_WEAK_FUNC(sub_822279A8);
PPC_FUNC_IMPL(__imp__sub_822279A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8221ed18
	ctx.lr = 0x822279C4;
	sub_8221ED18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822279E0"))) PPC_WEAK_FUNC(sub_822279E0);
PPC_FUNC_IMPL(__imp__sub_822279E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184400
	ctx.lr = 0x822279E8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bl 0x821809d0
	ctx.lr = 0x82227A0C;
	sub_821809D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227a34
	if (ctx.cr6.eq) goto loc_82227A34;
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
	// std r28,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r28.u64);
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// bl 0x8212ac30
	ctx.lr = 0x82227A28;
	sub_8212AC30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212a8a0
	ctx.lr = 0x82227A30;
	sub_8212A8A0(ctx, base);
	// b 0x82227a38
	goto loc_82227A38;
loc_82227A34:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82227A38:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// lfd f0,824(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 824);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// stfd f0,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.f0.u64);
	// stfd f0,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.f0.u64);
	// bl 0x8221edb8
	ctx.lr = 0x82227A5C;
	sub_8221EDB8(ctx, base);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r8,-32159
	ctx.r8.s64 = -2107572224;
	// addi r7,r8,1792
	ctx.r7.s64 = ctx.r8.s64 + 1792;
	// lwz r11,11000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11000);
	// addi r6,r11,-10
	ctx.r6.s64 = ctx.r11.s64 + -10;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,64(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r4,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r4.u32);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// stw r28,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r28.u32);
	// lwz r11,1792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1792);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82184450
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227AC0"))) PPC_WEAK_FUNC(sub_82227AC0);
PPC_FUNC_IMPL(__imp__sub_82227AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8220c1b0
	ctx.lr = 0x82227ADC;
	sub_8220C1B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227AF0"))) PPC_WEAK_FUNC(sub_82227AF0);
PPC_FUNC_IMPL(__imp__sub_82227AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184400
	ctx.lr = 0x82227AF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32174
	ctx.r30.s64 = -2108555264;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r29,-32174
	ctx.r29.s64 = -2108555264;
	// lis r28,-32174
	ctx.r28.s64 = -2108555264;
	// lis r27,-32174
	ctx.r27.s64 = -2108555264;
	// lis r26,-32174
	ctx.r26.s64 = -2108555264;
	// lwz r10,22716(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22716);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,21680(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21680);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,21668(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21668);
	// lwz r7,21464(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21464);
	// lwz r6,21444(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21444);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r10,22716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22716, ctx.r10.u32);
	// stw r11,21680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21680, ctx.r11.u32);
	// stw r11,21668(r28)
	PPC_STORE_U32(ctx.r28.u32 + 21668, ctx.r11.u32);
	// stw r9,21464(r27)
	PPC_STORE_U32(ctx.r27.u32 + 21464, ctx.r9.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// bl 0x82239160
	ctx.lr = 0x82227B60;
	sub_82239160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822388a8
	ctx.lr = 0x82227B68;
	sub_822388A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822384b0
	ctx.lr = 0x82227B70;
	sub_822384B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822391d8
	ctx.lr = 0x82227B78;
	sub_822391D8(ctx, base);
	// lis r6,-32158
	ctx.r6.s64 = -2107506688;
	// lis r5,-32158
	ctx.r5.s64 = -2107506688;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,3404(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3404, ctx.r11.u32);
	// stw r10,3408(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3408, ctx.r10.u32);
	// stw r9,21680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21680, ctx.r9.u32);
	// stw r8,21668(r28)
	PPC_STORE_U32(ctx.r28.u32 + 21668, ctx.r8.u32);
	// stw r7,21464(r27)
	PPC_STORE_U32(ctx.r27.u32 + 21464, ctx.r7.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,22716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22716, ctx.r11.u32);
	// stw r10,21444(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21444, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82184450
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227BC0"))) PPC_WEAK_FUNC(sub_82227BC0);
PPC_FUNC_IMPL(__imp__sub_82227BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184400
	ctx.lr = 0x82227BC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32174
	ctx.r27.s64 = -2108555264;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r28,-32174
	ctx.r28.s64 = -2108555264;
	// lis r29,-32174
	ctx.r29.s64 = -2108555264;
	// lis r30,-32174
	ctx.r30.s64 = -2108555264;
	// lis r26,-32174
	ctx.r26.s64 = -2108555264;
	// lwz r10,22716(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22716);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,21680(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21680);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,21668(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21668);
	// lwz r7,21464(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21464);
	// lwz r6,21444(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21444);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r10,22716(r27)
	PPC_STORE_U32(ctx.r27.u32 + 22716, ctx.r10.u32);
	// stw r11,21680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 21680, ctx.r11.u32);
	// stw r11,21668(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21668, ctx.r11.u32);
	// stw r9,21464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21464, ctx.r9.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// bl 0x82299c38
	ctx.lr = 0x82227C30;
	sub_82299C38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82227c3c
	if (!ctx.cr6.eq) goto loc_82227C3C;
	// bl 0x822a8d38
	ctx.lr = 0x82227C3C;
	sub_822A8D38(ctx, base);
loc_82227C3C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,22716(r27)
	PPC_STORE_U32(ctx.r27.u32 + 22716, ctx.r11.u32);
	// stw r10,21444(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21444, ctx.r10.u32);
	// stw r9,21680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 21680, ctx.r9.u32);
	// stw r8,21668(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21668, ctx.r8.u32);
	// stw r7,21464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21464, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82184450
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227C70"))) PPC_WEAK_FUNC(sub_82227C70);
PPC_FUNC_IMPL(__imp__sub_82227C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843f4
	ctx.lr = 0x82227C78;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32174
	ctx.r29.s64 = -2108555264;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r28,-32174
	ctx.r28.s64 = -2108555264;
	// lis r27,-32174
	ctx.r27.s64 = -2108555264;
	// lis r26,-32174
	ctx.r26.s64 = -2108555264;
	// lis r25,-32174
	ctx.r25.s64 = -2108555264;
	// lwz r10,22716(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22716);
	// lis r24,-32159
	ctx.r24.s64 = -2107572224;
	// lwz r9,21680(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21680);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,21668(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21668);
	// addi r23,r24,1792
	ctx.r23.s64 = ctx.r24.s64 + 1792;
	// lwz r7,21464(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,21444(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21444);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// stw r7,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r7.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r6,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r6.u32);
	// stw r10,22716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 22716, ctx.r10.u32);
	// stw r11,21680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 21680, ctx.r11.u32);
	// stw r11,21668(r27)
	PPC_STORE_U32(ctx.r27.u32 + 21668, ctx.r11.u32);
	// stw r9,21464(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21464, ctx.r9.u32);
	// stw r5,1792(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1792, ctx.r5.u32);
	// stw r4,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r4.u32);
	// stw r31,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r31.u32);
	// bl 0x82299c38
	ctx.lr = 0x82227D00;
	sub_82299C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a94a8
	ctx.lr = 0x82227D08;
	sub_822A94A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822988b8
	ctx.lr = 0x82227D10;
	sub_822988B8(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,22716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 22716, ctx.r11.u32);
	// stw r10,21444(r25)
	PPC_STORE_U32(ctx.r25.u32 + 21444, ctx.r10.u32);
	// stw r9,21680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 21680, ctx.r9.u32);
	// stw r8,21668(r27)
	PPC_STORE_U32(ctx.r27.u32 + 21668, ctx.r8.u32);
	// stw r7,21464(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21464, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82184444
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227D40"))) PPC_WEAK_FUNC(sub_82227D40);
PPC_FUNC_IMPL(__imp__sub_82227D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8220b620
	ctx.lr = 0x82227D5C;
	sub_8220B620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82227ea8
	if (ctx.cr6.gt) goto loc_82227EA8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82227db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227DB4;
	// bdzf 4*cr6+eq,0x82227ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227EA8;
	// bdzf 4*cr6+eq,0x82227de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227DE4;
	// bdzf 4*cr6+eq,0x82227e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227E1C;
	// bne cr6,0x82227e5c
	if (!ctx.cr6.eq) goto loc_82227E5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8220b620
	ctx.lr = 0x82227D98;
	sub_8220B620(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f1.u64);
	// bl 0x82229410
	ctx.lr = 0x82227DA0;
	sub_82229410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82227DB4:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8220b620
	ctx.lr = 0x82227DC4;
	sub_8220B620(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f1.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227af0
	ctx.lr = 0x82227DD0;
	sub_82227AF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82227DE4:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8220b620
	ctx.lr = 0x82227DF4;
	sub_8220B620(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f1.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c70
	ctx.lr = 0x82227E00;
	sub_82227C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c71a8
	ctx.lr = 0x82227E08;
	sub_820C71A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82227E1C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8220b620
	ctx.lr = 0x82227E24;
	sub_8220B620(ctx, base);
	// lfd f0,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// fsub f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 - ctx.f0.f64;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfd f0,4752(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4752);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82227e48
	if (ctx.cr6.gt) goto loc_82227E48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227E48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227ea8
	if (ctx.cr6.eq) goto loc_82227EA8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82227e98
	goto loc_82227E98;
loc_82227E5C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8220b620
	ctx.lr = 0x82227E64;
	sub_8220B620(ctx, base);
	// lfd f0,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// fsub f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 - ctx.f0.f64;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfd f0,760(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 760);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82227e88
	if (ctx.cr6.gt) goto loc_82227E88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227ea8
	if (ctx.cr6.eq) goto loc_82227EA8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82227E98:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8220b620
	ctx.lr = 0x82227EA4;
	sub_8220B620(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f1.u64);
loc_82227EA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227EC0"))) PPC_WEAK_FUNC(sub_82227EC0);
PPC_FUNC_IMPL(__imp__sub_82227EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82227f84
	if (ctx.cr6.gt) goto loc_82227F84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82227efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227EFC;
	// bdzf 4*cr6+eq,0x82227f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227F84;
	// bdzf 4*cr6+eq,0x82227f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227F84;
	// bdzf 4*cr6+eq,0x82227f74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82227F74;
	// bne cr6,0x82227f74
	if (!ctx.cr6.eq) goto loc_82227F74;
loc_82227EFC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r9,r11,-1360
	ctx.r9.s64 = ctx.r11.s64 + -1360;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2053
	ctx.r6.s64 = 2053;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// li r5,16429
	ctx.r5.s64 = 16429;
	// lfs f13,15176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82210648
	ctx.lr = 0x82227F60;
	sub_82210648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82227F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227bc0
	ctx.lr = 0x82227F7C;
	sub_82227BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227690
	ctx.lr = 0x82227F84;
	sub_82227690(ctx, base);
loc_82227F84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227F98"))) PPC_WEAK_FUNC(sub_82227F98);
PPC_FUNC_IMPL(__imp__sub_82227F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r3,2692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2692);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82227ec0
	ctx.lr = 0x82227FB8;
	sub_82227EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d40
	ctx.lr = 0x82227FC0;
	sub_82227D40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227FE8"))) PPC_WEAK_FUNC(sub_82227FE8);
PPC_FUNC_IMPL(__imp__sub_82227FE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227FF0"))) PPC_WEAK_FUNC(sub_82227FF0);
PPC_FUNC_IMPL(__imp__sub_82227FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,2700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2700);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,-14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228018"))) PPC_WEAK_FUNC(sub_82228018);
PPC_FUNC_IMPL(__imp__sub_82228018) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228020"))) PPC_WEAK_FUNC(sub_82228020);
PPC_FUNC_IMPL(__imp__sub_82228020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,3240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3240);
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228040"))) PPC_WEAK_FUNC(sub_82228040);
PPC_FUNC_IMPL(__imp__sub_82228040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82228070"))) PPC_WEAK_FUNC(sub_82228070);
PPC_FUNC_IMPL(__imp__sub_82228070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222809c
	if (!ctx.cr6.eq) goto loc_8222809C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222809C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822280c0
	if (ctx.cr6.eq) goto loc_822280C0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822280BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822280c4
	goto loc_822280C4;
loc_822280C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822280C4:
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822280E0"))) PPC_WEAK_FUNC(sub_822280E0);
PPC_FUNC_IMPL(__imp__sub_822280E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-8096
	ctx.r10.s64 = ctx.r11.s64 + -8096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8222812c
	if (ctx.cr6.eq) goto loc_8222812C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8222812C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228150
	if (ctx.cr6.eq) goto loc_82228150;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222814C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82228150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228168"))) PPC_WEAK_FUNC(sub_82228168);
PPC_FUNC_IMPL(__imp__sub_82228168) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8096
	ctx.r7.s64 = ctx.r8.s64 + -8096;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,3256(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3256);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822281A0"))) PPC_WEAK_FUNC(sub_822281A0);
PPC_FUNC_IMPL(__imp__sub_822281A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x822281A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lbz r9,-29053(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29053);
	// lwz r28,3240(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3240);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82228274
	if (ctx.cr6.eq) goto loc_82228274;
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// bl 0x822c3acc
	ctx.lr = 0x822281CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222825c
	if (ctx.cr6.eq) goto loc_8222825C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-8120
	ctx.r30.s64 = ctx.r11.s64 + -8120;
loc_822281E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228218
	if (ctx.cr6.eq) goto loc_82228218;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82228218
	if (ctx.cr6.eq) goto loc_82228218;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82228218:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821833e0
	ctx.lr = 0x8222822C;
	sub_821833E0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222824c
	if (ctx.cr6.eq) goto loc_8222824C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222824C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222824C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822281e8
	if (!ctx.cr6.eq) goto loc_822281E8;
loc_8222825C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,28(r28)
	PPC_STORE_U8(ctx.r28.u32 + 28, ctx.r11.u8);
	// bl 0x820c6e58
	ctx.lr = 0x8222826C;
	sub_820C6E58(ctx, base);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// bl 0x822c3abc
	ctx.lr = 0x82228274;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82228274:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228288"))) PPC_WEAK_FUNC(sub_82228288);
PPC_FUNC_IMPL(__imp__sub_82228288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184400
	ctx.lr = 0x82228290;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,-8092
	ctx.r10.s64 = ctx.r11.s64 + -8092;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r26,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r26.u8);
	// beq cr6,0x822282ec
	if (ctx.cr6.eq) goto loc_822282EC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822282DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822282ec
	if (ctx.cr6.eq) goto loc_822282EC;
	// bl 0x820c0870
	ctx.lr = 0x822282EC;
	sub_820C0870(ctx, base);
loc_822282EC:
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222830c
	if (ctx.cr6.eq) goto loc_8222830C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222830C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222830C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82228394
	if (ctx.cr6.eq) goto loc_82228394;
loc_82228328:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228348
	if (ctx.cr6.eq) goto loc_82228348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82228348:
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82228384
	if (ctx.cr6.eq) goto loc_82228384;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x82183380
	ctx.lr = 0x82228378;
	sub_82183380(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_82228384:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82228328
	if (!ctx.cr6.eq) goto loc_82228328;
loc_82228394:
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822283a4
	if (ctx.cr6.eq) goto loc_822283A4;
	// bl 0x82183380
	ctx.lr = 0x822283A4;
	sub_82183380(ctx, base);
loc_822283A4:
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822283b4
	if (ctx.cr6.eq) goto loc_822283B4;
	// bl 0x82183380
	ctx.lr = 0x822283B4;
	sub_82183380(ctx, base);
loc_822283B4:
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x820c6e58
	ctx.lr = 0x822283BC;
	sub_820C6E58(ctx, base);
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x82183380
	ctx.lr = 0x822283C4;
	sub_82183380(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x820c6e58
	ctx.lr = 0x822283D0;
	sub_820C6E58(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82183380
	ctx.lr = 0x822283D8;
	sub_82183380(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82184450
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822283E0"))) PPC_WEAK_FUNC(sub_822283E0);
PPC_FUNC_IMPL(__imp__sub_822283E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x820c6d30
	ctx.lr = 0x822283FC;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222840C"))) PPC_WEAK_FUNC(sub_8222840C);
PPC_FUNC_IMPL(__imp__sub_8222840C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820c6d30
	ctx.lr = 0x82228428;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228438"))) PPC_WEAK_FUNC(sub_82228438);
PPC_FUNC_IMPL(__imp__sub_82228438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8220bf90
	ctx.lr = 0x82228454;
	sub_8220BF90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228464"))) PPC_WEAK_FUNC(sub_82228464);
PPC_FUNC_IMPL(__imp__sub_82228464) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8220bf90
	ctx.lr = 0x82228480;
	sub_8220BF90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228490"))) PPC_WEAK_FUNC(sub_82228490);
PPC_FUNC_IMPL(__imp__sub_82228490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184404
	ctx.lr = 0x82228498;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r30,3240(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3240);
	// lbz r10,29(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822284c4
	if (!ctx.cr6.eq) goto loc_822284C4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82184454
	__restgprlr_27(ctx, base);
	return;
loc_822284C4:
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,22050
	ctx.r8.s64 = 22050;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r28,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r28.u8);
	// lwz r10,3248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3248);
	// lwz r9,3368(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_822284F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822284f4
	if (!ctx.cr6.eq) goto loc_822284F4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x82180a88
	ctx.lr = 0x82228518;
	sub_82180A88(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_82228524:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82228524
	if (!ctx.cr6.eq) goto loc_82228524;
	// stbx r28,r3,r29
	PPC_STORE_U8(ctx.r3.u32 + ctx.r29.u32, ctx.r28.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bl 0x822c3acc
	ctx.lr = 0x82228548;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x820c6fa0
	ctx.lr = 0x82228558;
	sub_820C6FA0(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x822c3abc
	ctx.lr = 0x82228560;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82184454
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228578"))) PPC_WEAK_FUNC(sub_82228578);
PPC_FUNC_IMPL(__imp__sub_82228578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x82228580;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-8092
	ctx.r10.s64 = ctx.r11.s64 + -8092;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// bl 0x820c48a8
	ctx.lr = 0x822285B0;
	sub_820C48A8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// bl 0x820cfad0
	ctx.lr = 0x822285D4;
	sub_820CFAD0(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r28,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r28.u8);
	// li r3,28
	ctx.r3.s64 = 28;
	// stb r11,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r11.u8);
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stb r11,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r11.u8);
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// bl 0x821809d0
	ctx.lr = 0x82228608;
	sub_821809D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222861c
	if (ctx.cr6.eq) goto loc_8222861C;
	// bl 0x822c3c0c
	ctx.lr = 0x82228618;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// b 0x82228620
	goto loc_82228620;
loc_8222861C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82228620:
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x821809d0
	ctx.lr = 0x82228630;
	sub_821809D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228644
	if (ctx.cr6.eq) goto loc_82228644;
	// bl 0x822c3c0c
	ctx.lr = 0x82228640;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// b 0x82228648
	goto loc_82228648;
loc_82228644:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82228648:
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821809d0
	ctx.lr = 0x82228654;
	sub_821809D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228670
	if (ctx.cr6.eq) goto loc_82228670;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r10,-8088
	ctx.r9.s64 = ctx.r10.s64 + -8088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82228674
	goto loc_82228674;
loc_82228670:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82228674:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x821809d0
	ctx.lr = 0x82228684;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822286a8
	if (ctx.cr6.eq) goto loc_822286A8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,-8136
	ctx.r5.s64 = ctx.r11.s64 + -8136;
	// bl 0x8220c0c8
	ctx.lr = 0x822286A4;
	sub_8220C0C8(ctx, base);
	// b 0x822286ac
	goto loc_822286AC;
loc_822286A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822286AC:
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822286C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822286D0"))) PPC_WEAK_FUNC(sub_822286D0);
PPC_FUNC_IMPL(__imp__sub_822286D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x820c6d30
	ctx.lr = 0x822286EC;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822286FC"))) PPC_WEAK_FUNC(sub_822286FC);
PPC_FUNC_IMPL(__imp__sub_822286FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820c6d30
	ctx.lr = 0x82228718;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228728"))) PPC_WEAK_FUNC(sub_82228728);
PPC_FUNC_IMPL(__imp__sub_82228728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8220bf90
	ctx.lr = 0x82228744;
	sub_8220BF90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228754"))) PPC_WEAK_FUNC(sub_82228754);
PPC_FUNC_IMPL(__imp__sub_82228754) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8220bf90
	ctx.lr = 0x82228770;
	sub_8220BF90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228780"))) PPC_WEAK_FUNC(sub_82228780);
PPC_FUNC_IMPL(__imp__sub_82228780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82228798;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822287B0"))) PPC_WEAK_FUNC(sub_822287B0);
PPC_FUNC_IMPL(__imp__sub_822287B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843f0
	ctx.lr = 0x822287B8;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822287ec
	if (!ctx.cr6.eq) goto loc_822287EC;
loc_822287E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822289ec
	goto loc_822289EC;
loc_822287EC:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lbz r10,-29053(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29053);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822287e4
	if (ctx.cr6.eq) goto loc_822287E4;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228828
	if (ctx.cr6.eq) goto loc_82228828;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
loc_82228828:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x822288e4
	if (!ctx.cr6.lt) goto loc_822288E4;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r26,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r26.u8);
	// stw r25,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r25.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82228844:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82228844
	if (!ctx.cr6.eq) goto loc_82228844;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x820c1278
	ctx.lr = 0x8222886C;
	sub_820C1278(ctx, base);
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// sth r28,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r28.u16);
	// li r6,16
	ctx.r6.s64 = 16;
	// sth r9,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r9.u16);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// sth r6,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r6.u16);
	// li r3,12
	ctx.r3.s64 = 12;
	// mullw r5,r11,r29
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// bl 0x821809d0
	ctx.lr = 0x822288A4;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822288bc
	if (ctx.cr6.eq) goto loc_822288BC;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x8220d310
	ctx.lr = 0x822288B8;
	sub_8220D310(ctx, base);
	// b 0x822288c0
	goto loc_822288C0;
loc_822288BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_822288C0:
	// stw r3,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r3.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822288d8
	if (ctx.cr6.lt) goto loc_822288D8;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82183380
	ctx.lr = 0x822288D8;
	sub_82183380(ctx, base);
loc_822288D8:
	// stw r25,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r25.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r26,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r26.u8);
loc_822288E4:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222890c
	if (ctx.cr6.eq) goto loc_8222890C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
loc_8222890C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821809d0
	ctx.lr = 0x82228914;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228944
	if (ctx.cr6.eq) goto loc_82228944;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
	// addi r10,r24,52
	ctx.r10.s64 = ctx.r24.s64 + 52;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// addi r9,r11,-7640
	ctx.r9.s64 = ctx.r11.s64 + -7640;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82228948
	goto loc_82228948;
loc_82228944:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82228948:
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822287e4
	if (ctx.cr6.eq) goto loc_822287E4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x820c5af0
	ctx.lr = 0x82228960;
	sub_820C5AF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// ble cr6,0x8222897c
	if (!ctx.cr6.gt) goto loc_8222897C;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82228988
	goto loc_82228988;
loc_8222897C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82228988:
	// bl 0x8221e118
	ctx.lr = 0x8222898C;
	sub_8221E118(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822168e8
	ctx.lr = 0x82228994;
	sub_822168E8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822289a8
	if (ctx.cr6.eq) goto loc_822289A8;
	// stfs f1,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_822289A8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822289c8
	if (ctx.cr6.eq) goto loc_822289C8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822289C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822289C8:
	// lbz r11,17(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 17);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8221e3c0
	ctx.lr = 0x822289DC;
	sub_8221E3C0(ctx, base);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r26,16(r27)
	PPC_STORE_U8(ctx.r27.u32 + 16, ctx.r26.u8);
	// stw r9,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r9.u32);
loc_822289EC:
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x82184440
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822289F4"))) PPC_WEAK_FUNC(sub_822289F4);
PPC_FUNC_IMPL(__imp__sub_822289F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c6db8
	ctx.lr = 0x82228A0C;
	sub_820C6DB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228A1C"))) PPC_WEAK_FUNC(sub_82228A1C);
PPC_FUNC_IMPL(__imp__sub_82228A1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x82228A34;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228A48"))) PPC_WEAK_FUNC(sub_82228A48);
PPC_FUNC_IMPL(__imp__sub_82228A48) {
	PPC_FUNC_PROLOGUE();
	// stb r9,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r9.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x822287b0
	sub_822287B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228A60"))) PPC_WEAK_FUNC(sub_82228A60);
PPC_FUNC_IMPL(__imp__sub_82228A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843f4
	ctx.lr = 0x82228A68;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lbz r10,-29053(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29053);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82228d24
	if (ctx.cr6.eq) goto loc_82228D24;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x822c3acc
	ctx.lr = 0x82228A8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r30,r23,16
	ctx.r30.s64 = ctx.r23.s64 + 16;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820c6ed0
	ctx.lr = 0x82228A9C;
	sub_820C6ED0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82228AA4;
	sub_820C6E58(ctx, base);
	// lwz r3,48(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// bl 0x822c3abc
	ctx.lr = 0x82228AAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,44(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// bl 0x822c3acc
	ctx.lr = 0x82228AB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82228bf4
	if (ctx.cr6.eq) goto loc_82228BF4;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r27,-32158
	ctx.r27.s64 = -2107506688;
	// ori r26,r10,65534
	ctx.r26.u64 = ctx.r10.u64 | 65534;
	// addi r25,r11,-8096
	ctx.r25.s64 = ctx.r11.s64 + -8096;
loc_82228ADC:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x821809d0
	ctx.lr = 0x82228AE4;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228b10
	if (ctx.cr6.eq) goto loc_82228B10;
	// lwz r11,3256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3256);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// stb r24,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r24.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3256(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3256, ctx.r11.u32);
	// b 0x82228b14
	goto loc_82228B14;
loc_82228B10:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82228B14:
	// lbz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x822287b0
	ctx.lr = 0x82228B5C;
	sub_822287B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82228bf4
	if (ctx.cr6.eq) goto loc_82228BF4;
	// lwz r28,4(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r29,r23,4
	ctx.r29.s64 = ctx.r23.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x820c5790
	ctx.lr = 0x82228B80;
	sub_820C5790(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82228c44
	if (ctx.cr6.lt) goto loc_82228C44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82183380
	ctx.lr = 0x82228BAC;
	sub_82183380(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82228be4
	if (ctx.cr6.eq) goto loc_82228BE4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x82183380
	ctx.lr = 0x82228BD8;
	sub_82183380(ctx, base);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
loc_82228BE4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82228adc
	if (!ctx.cr6.eq) goto loc_82228ADC;
loc_82228BF4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r28,r23,4
	ctx.r28.s64 = ctx.r23.s64 + 4;
	// stb r24,28(r23)
	PPC_STORE_U8(ctx.r23.u32 + 28, ctx.r24.u8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82228d0c
	if (ctx.cr6.eq) goto loc_82228D0C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82228C18:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228d00
	if (ctx.cr6.eq) goto loc_82228D00;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82228c50
	if (!ctx.cr6.eq) goto loc_82228C50;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82228c88
	goto loc_82228C88;
loc_82228C44:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// bl 0x82180878
	ctx.lr = 0x82228C50;
	sub_82180878(ctx, base);
loc_82228C50:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82228c78
	if (ctx.cr6.eq) goto loc_82228C78;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82228c7c
	goto loc_82228C7C;
loc_82228C78:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82228C7C:
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82228C88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82228cf8
	if (!ctx.cr6.eq) goto loc_82228CF8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228cb4
	if (ctx.cr6.eq) goto loc_82228CB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82228CB4:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82228cf0
	if (ctx.cr6.eq) goto loc_82228CF0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x82183380
	ctx.lr = 0x82228CE4;
	sub_82183380(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
loc_82228CF0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82228d00
	goto loc_82228D00;
loc_82228CF8:
	// stb r27,28(r23)
	PPC_STORE_U8(ctx.r23.u32 + 28, ctx.r27.u8);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82228D00:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82228c18
	if (!ctx.cr6.eq) goto loc_82228C18;
loc_82228D0C:
	// lwz r3,44(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// bl 0x822c3abc
	ctx.lr = 0x82228D14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x820c6e58
	ctx.lr = 0x82228D1C;
	sub_820C6E58(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82183380
	ctx.lr = 0x82228D24;
	sub_82183380(ctx, base);
loc_82228D24:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82184444
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228D2C"))) PPC_WEAK_FUNC(sub_82228D2C);
PPC_FUNC_IMPL(__imp__sub_82228D2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x820c6d30
	ctx.lr = 0x82228D44;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228D60"))) PPC_WEAK_FUNC(sub_82228D60);
PPC_FUNC_IMPL(__imp__sub_82228D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x821843ec
	ctx.lr = 0x82228D68;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229038
	if (ctx.cr6.eq) goto loc_82229038;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r25,-32158
	ctx.r25.s64 = -2107506688;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r24,r10,65534
	ctx.r24.u64 = ctx.r10.u64 | 65534;
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r21,-32185
	ctx.r21.s64 = -2109276160;
	// addi r23,r11,-8096
	ctx.r23.s64 = ctx.r11.s64 + -8096;
loc_82228DA0:
	// lbz r11,-29053(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + -29053);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229024
	if (ctx.cr6.eq) goto loc_82229024;
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// bl 0x822c3acc
	ctx.lr = 0x82228DB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820c6ed0
	ctx.lr = 0x82228DC4;
	sub_820C6ED0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82228DCC;
	sub_820C6E58(ctx, base);
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// bl 0x822c3abc
	ctx.lr = 0x82228DD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// bl 0x822c3acc
	ctx.lr = 0x82228DDC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82228f04
	if (ctx.cr6.eq) goto loc_82228F04;
loc_82228DEC:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x821809d0
	ctx.lr = 0x82228DF4;
	sub_821809D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228e20
	if (ctx.cr6.eq) goto loc_82228E20;
	// lwz r11,3256(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3256);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stb r27,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r27.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3256(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3256, ctx.r11.u32);
	// b 0x82228e24
	goto loc_82228E24;
loc_82228E20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82228E24:
	// lbz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x822287b0
	ctx.lr = 0x82228E6C;
	sub_822287B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82228f04
	if (ctx.cr6.eq) goto loc_82228F04;
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x820c5790
	ctx.lr = 0x82228E90;
	sub_820C5790(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82229040
	if (ctx.cr6.lt) goto loc_82229040;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82183380
	ctx.lr = 0x82228EBC;
	sub_82183380(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82228ef4
	if (ctx.cr6.eq) goto loc_82228EF4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x82183380
	ctx.lr = 0x82228EE8;
	sub_82183380(ctx, base);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
loc_82228EF4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82228dec
	if (!ctx.cr6.eq) goto loc_82228DEC;
loc_82228F04:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// stb r27,28(r26)
	PPC_STORE_U8(ctx.r26.u32 + 28, ctx.r27.u8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8222900c
	if (ctx.cr6.eq) goto loc_8222900C;
loc_82228F24:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229000
	if (ctx.cr6.eq) goto loc_82229000;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82228f50
	if (!ctx.cr6.eq) goto loc_82228F50;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82228f88
	goto loc_82228F88;
loc_82228F50:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82228f78
	if (ctx.cr6.eq) goto loc_82228F78;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82228f7c
	goto loc_82228F7C;
loc_82228F78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82228F7C:
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82228F88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82228ff8
	if (!ctx.cr6.eq) goto loc_82228FF8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228fb4
	if (ctx.cr6.eq) goto loc_82228FB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82228FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82228FB4:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82228ff0
	if (ctx.cr6.eq) goto loc_82228FF0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x82183380
	ctx.lr = 0x82228FE4;
	sub_82183380(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
loc_82228FF0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82229000
	goto loc_82229000;
loc_82228FF8:
	// stb r22,28(r26)
	PPC_STORE_U8(ctx.r26.u32 + 28, ctx.r22.u8);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82229000:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82228f24
	if (!ctx.cr6.eq) goto loc_82228F24;
loc_8222900C:
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// bl 0x822c3abc
	ctx.lr = 0x82229014;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x820c6e58
	ctx.lr = 0x8222901C;
	sub_820C6E58(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82183380
	ctx.lr = 0x82229024;
	sub_82183380(ctx, base);
loc_82229024:
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x8212a898
	ctx.lr = 0x8222902C;
	sub_8212A898(ctx, base);
	// lbz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82228da0
	if (!ctx.cr6.eq) goto loc_82228DA0;
loc_82229038:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8218443c
	__restgprlr_21(ctx, base);
	return;
loc_82229040:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// bl 0x82180878
	ctx.lr = 0x8222904C;
	sub_82180878(ctx, base);
}

__attribute__((alias("__imp__sub_8222904C"))) PPC_WEAK_FUNC(sub_8222904C);
PPC_FUNC_IMPL(__imp__sub_8222904C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x820c6d30
	ctx.lr = 0x82229064;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229078"))) PPC_WEAK_FUNC(sub_82229078);
PPC_FUNC_IMPL(__imp__sub_82229078) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82228d60
	sub_82228D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229080"))) PPC_WEAK_FUNC(sub_82229080);
PPC_FUNC_IMPL(__imp__sub_82229080) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229088"))) PPC_WEAK_FUNC(sub_82229088);
PPC_FUNC_IMPL(__imp__sub_82229088) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229090"))) PPC_WEAK_FUNC(sub_82229090);
PPC_FUNC_IMPL(__imp__sub_82229090) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229098"))) PPC_WEAK_FUNC(sub_82229098);
PPC_FUNC_IMPL(__imp__sub_82229098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-8156
	ctx.r10.s64 = ctx.r11.s64 + -8156;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822290A8"))) PPC_WEAK_FUNC(sub_822290A8);
PPC_FUNC_IMPL(__imp__sub_822290A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-8148
	ctx.r10.s64 = ctx.r11.s64 + -8148;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183380
	ctx.lr = 0x822290D0;
	sub_82183380(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r9,-8156
	ctx.r8.s64 = ctx.r9.s64 + -8156;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822290F0"))) PPC_WEAK_FUNC(sub_822290F0);
PPC_FUNC_IMPL(__imp__sub_822290F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-8156
	ctx.r10.s64 = ctx.r11.s64 + -8156;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229100"))) PPC_WEAK_FUNC(sub_82229100);
PPC_FUNC_IMPL(__imp__sub_82229100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-8156
	ctx.r10.s64 = ctx.r11.s64 + -8156;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229118"))) PPC_WEAK_FUNC(sub_82229118);
PPC_FUNC_IMPL(__imp__sub_82229118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184404
	ctx.lr = 0x82229120;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// addi r10,r11,-8140
	ctx.r10.s64 = ctx.r11.s64 + -8140;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82229190
	if (ctx.cr6.eq) goto loc_82229190;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82229158:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222917c
	if (ctx.cr6.eq) goto loc_8222917C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222917C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222917C:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82229158
	if (!ctx.cr6.eq) goto loc_82229158;
loc_82229190:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c6e58
	ctx.lr = 0x82229198;
	sub_820C6E58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// bl 0x820c6e58
	ctx.lr = 0x822291A4;
	sub_820C6E58(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82183380
	ctx.lr = 0x822291AC;
	sub_82183380(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82184454
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822291B4"))) PPC_WEAK_FUNC(sub_822291B4);
PPC_FUNC_IMPL(__imp__sub_822291B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x820c6d30
	ctx.lr = 0x822291D0;
	sub_820C6D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822291E0"))) PPC_WEAK_FUNC(sub_822291E0);
PPC_FUNC_IMPL(__imp__sub_822291E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229268
	if (ctx.cr6.eq) goto loc_82229268;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229244
	if (ctx.cr6.eq) goto loc_82229244;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82229244:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f1,15132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15132);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82229268:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229288"))) PPC_WEAK_FUNC(sub_82229288);
PPC_FUNC_IMPL(__imp__sub_82229288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,3244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222930c
	if (ctx.cr6.eq) goto loc_8222930C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822292e4
	if (ctx.cr6.eq) goto loc_822292E4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822292C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822292E4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// lfs f1,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222930C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229320"))) PPC_WEAK_FUNC(sub_82229320);
PPC_FUNC_IMPL(__imp__sub_82229320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229328"))) PPC_WEAK_FUNC(sub_82229328);
PPC_FUNC_IMPL(__imp__sub_82229328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229330"))) PPC_WEAK_FUNC(sub_82229330);
PPC_FUNC_IMPL(__imp__sub_82229330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229338"))) PPC_WEAK_FUNC(sub_82229338);
PPC_FUNC_IMPL(__imp__sub_82229338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229340"))) PPC_WEAK_FUNC(sub_82229340);
PPC_FUNC_IMPL(__imp__sub_82229340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8222936c
	if (!ctx.cr6.eq) goto loc_8222936C;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,3240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3240);
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8222936C:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lbz r9,2673(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2673);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229388"))) PPC_WEAK_FUNC(sub_82229388);
PPC_FUNC_IMPL(__imp__sub_82229388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229390"))) PPC_WEAK_FUNC(sub_82229390);
PPC_FUNC_IMPL(__imp__sub_82229390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229398"))) PPC_WEAK_FUNC(sub_82229398);
PPC_FUNC_IMPL(__imp__sub_82229398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822293A0"))) PPC_WEAK_FUNC(sub_822293A0);
PPC_FUNC_IMPL(__imp__sub_822293A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r3,3240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822293C8"))) PPC_WEAK_FUNC(sub_822293C8);
PPC_FUNC_IMPL(__imp__sub_822293C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,3244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3244);
	// stb r10,2674(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2674, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82229410"))) PPC_WEAK_FUNC(sub_82229410);
PPC_FUNC_IMPL(__imp__sub_82229410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,3244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3244);
	// stb r10,2674(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2674, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82229458"))) PPC_WEAK_FUNC(sub_82229458);
PPC_FUNC_IMPL(__imp__sub_82229458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229460"))) PPC_WEAK_FUNC(sub_82229460);
PPC_FUNC_IMPL(__imp__sub_82229460) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27528
	ctx.r12.s64 = ctx.r12.s64 + -27528;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8222BB6C;
	case 1:
		goto loc_8222ADA4;
	case 2:
		goto loc_8222B9E0;
	case 3:
		goto loc_8222B3A4;
	case 4:
		goto loc_8222BDE8;
	case 5:
		goto loc_8222A3CC;
	case 6:
		goto loc_8222A324;
	case 7:
		goto loc_8222BBFC;
	case 8:
		goto loc_8222AEAC;
	case 9:
		goto loc_8222B8B4;
	case 10:
		goto loc_8222A954;
	case 11:
		goto loc_8222A150;
	case 12:
		goto loc_8222B644;
	case 13:
		goto loc_8222BD04;
	case 14:
		goto loc_8222A12C;
	case 15:
		goto loc_8222B248;
	case 16:
		goto loc_8222A1F8;
	case 17:
		goto loc_8222B104;
	case 18:
		goto loc_8222AF18;
	case 19:
		goto loc_82229F88;
	case 20:
		goto loc_8222A618;
	case 21:
		goto loc_8222B980;
	case 22:
		goto loc_8222B3D4;
	case 23:
		goto loc_8222B0B0;
	case 24:
		goto loc_8222B794;
	case 25:
		goto loc_8222A7E0;
	case 26:
		goto loc_8222AE70;
	case 27:
		goto loc_8222B578;
	case 28:
		goto loc_8222B9EC;
	case 29:
		goto loc_8222B974;
	case 30:
		goto loc_8222BEE4;
	case 31:
		goto loc_8222B908;
	case 32:
		goto loc_8222AA14;
	case 33:
		goto loc_8222B830;
	case 34:
		goto loc_8222A8E8;
	case 35:
		goto loc_8222BC74;
	case 36:
		goto loc_8222B95C;
	case 37:
		goto loc_8222A8B8;
	case 38:
		goto loc_8222A528;
	case 39:
		goto loc_8222AF24;
	case 40:
		goto loc_8222A5F4;
	case 41:
		goto loc_8222A750;
	case 42:
		goto loc_82229FAC;
	case 43:
		goto loc_8222A018;
	case 44:
		goto loc_8222A048;
	case 45:
		goto loc_8222A144;
	case 46:
		goto loc_8222A168;
	case 47:
		goto loc_8222A198;
	case 48:
		goto loc_8222A300;
	case 49:
		goto loc_8222A498;
	case 50:
		goto loc_8222A504;
	case 51:
		goto loc_8222A51C;
	case 52:
		goto loc_8222A5AC;
	case 53:
		goto loc_8222A9A8;
	case 54:
		goto loc_8222A6E4;
	case 55:
		goto loc_8222A72C;
	case 56:
		goto loc_82229FD0;
	case 57:
		goto loc_8222A1BC;
	case 58:
		goto loc_8222A2DC;
	case 59:
		goto loc_8222A5DC;
	case 60:
		goto loc_8222A600;
	case 61:
		goto loc_8222BDF4;
	case 62:
		goto loc_8222BF74;
	case 63:
		goto loc_82229FA0;
	case 64:
		goto loc_82229FB8;
	case 65:
		goto loc_82229FF4;
	case 66:
		goto loc_8222A030;
	case 67:
		goto loc_8222A060;
	case 68:
		goto loc_8222A15C;
	case 69:
		goto loc_8222A174;
	case 70:
		goto loc_8222A1A4;
	case 71:
		goto loc_8222A1C8;
	case 72:
		goto loc_8222A330;
	case 73:
		goto loc_8222A42C;
	case 74:
		goto loc_8222A4C8;
	case 75:
		goto loc_8222A510;
	case 76:
		goto loc_8222A594;
	case 77:
		goto loc_8222A5D0;
	case 78:
		goto loc_8222B140;
	case 79:
		goto loc_8222B824;
	case 80:
		goto loc_8222A624;
	case 81:
		goto loc_8222A708;
	case 82:
		goto loc_8222A744;
	case 83:
		goto loc_8222BCEC;
	case 84:
		goto loc_8222A654;
	case 85:
		goto loc_8222A6CC;
	case 86:
		goto loc_8222A7B0;
	case 87:
		goto loc_8222A7EC;
	case 88:
		goto loc_8222A840;
	case 89:
		goto loc_8222A8D0;
	case 90:
		goto loc_8222A90C;
	case 91:
		goto loc_8222AB04;
	case 92:
		goto loc_8222BEB4;
	case 93:
		goto loc_8222AB1C;
	case 94:
		goto loc_8222AC3C;
	case 95:
		goto loc_8222AD8C;
	case 96:
		goto loc_8222ADB0;
	case 97:
		goto loc_8222A3B4;
	case 98:
		goto loc_8222A66C;
	case 99:
		goto loc_8222A6B4;
	case 100:
		goto loc_8222A87C;
	case 101:
		goto loc_8222AB10;
	case 102:
		goto loc_8222AB58;
	case 103:
		goto loc_8222ABE8;
	case 104:
		goto loc_8222AC18;
	case 105:
		goto loc_8222A534;
	case 106:
		goto loc_8222A5B8;
	case 107:
		goto loc_8222A63C;
	case 108:
		goto loc_8222A684;
	case 109:
		goto loc_8222A69C;
	case 110:
		goto loc_8222A6F0;
	case 111:
		goto loc_8222A714;
	case 112:
		goto loc_8222A7C8;
	case 113:
		goto loc_8222A804;
	case 114:
		goto loc_8222A864;
	case 115:
		goto loc_8222A8A0;
	case 116:
		goto loc_8222A8F4;
	case 117:
		goto loc_8222A93C;
	case 118:
		goto loc_8222AB34;
	case 119:
		goto loc_8222AB64;
	case 120:
		goto loc_8222ABF4;
	case 121:
		goto loc_8222AC0C;
	case 122:
		goto loc_8222A4F8;
	case 123:
		goto loc_8222AC30;
	case 124:
		goto loc_8222AD74;
	case 125:
		goto loc_8222AD98;
	case 126:
		goto loc_8222AD14;
	case 127:
		goto loc_8222AD68;
	case 128:
		goto loc_8222AEA0;
	case 129:
		goto loc_8222AED0;
	case 130:
		goto loc_8222AF00;
	case 131:
		goto loc_8222AFF0;
	case 132:
		goto loc_8222B2CC;
	case 133:
		goto loc_8222B35C;
	case 134:
		goto loc_8222B428;
	case 135:
		goto loc_8222B458;
	case 136:
		goto loc_8222BA64;
	case 137:
		goto loc_8222B4B8;
	case 138:
		goto loc_8222B560;
	case 139:
		goto loc_8222A9B4;
	case 140:
		goto loc_8222AD2C;
	case 141:
		goto loc_8222AD5C;
	case 142:
		goto loc_8222AF30;
	case 143:
		goto loc_8222B584;
	case 144:
		goto loc_8222AAEC;
	case 145:
		goto loc_8222ABDC;
	case 146:
		goto loc_8222AC00;
	case 147:
		goto loc_8222ACFC;
	case 148:
		goto loc_8222AD44;
	case 149:
		goto loc_8222AD50;
	case 150:
		goto loc_8222AD80;
	case 151:
		goto loc_8222AEB8;
	case 152:
		goto loc_8222AEF4;
	case 153:
		goto loc_8222AF0C;
	case 154:
		goto loc_8222AFD8;
	case 155:
		goto loc_8222B038;
	case 156:
		goto loc_8222B1AC;
	case 157:
		goto loc_8222B344;
	case 158:
		goto loc_8222B410;
	case 159:
		goto loc_8222B440;
	case 160:
		goto loc_8222B668;
	case 161:
		goto loc_82229F94;
	case 162:
		goto loc_8222B4D0;
	case 163:
		goto loc_8222B56C;
	case 164:
		goto loc_8222B59C;
	case 165:
		goto loc_8222A60C;
	case 166:
		goto loc_8222BEF0;
	case 167:
		goto loc_8222A1EC;
	case 168:
		goto loc_8222BDDC;
	case 169:
		goto loc_8222A7A4;
	case 170:
		goto loc_8222BA34;
	case 171:
		goto loc_8222B0EC;
	case 172:
		goto loc_8222BC08;
	case 173:
		goto loc_8222AF3C;
	case 174:
		goto loc_8222BAB8;
	case 175:
		goto loc_8222BCE0;
	case 176:
		goto loc_8222BFEC;
	case 177:
		goto loc_8222AA98;
	case 178:
		goto loc_8222BA28;
	case 179:
		goto loc_8222B734;
	case 180:
		goto loc_8222BAF4;
	case 181:
		goto loc_8222B608;
	case 182:
		goto loc_8222A738;
	case 183:
		goto loc_8222A138;
	case 184:
		goto loc_8222B614;
	case 185:
		goto loc_82229F7C;
	case 186:
		goto loc_8222BAC4;
	case 187:
		goto loc_8222B968;
	case 188:
		goto loc_8222BDD0;
	case 189:
		goto loc_8222B8FC;
	case 190:
		goto loc_8222A8AC;
	case 191:
		goto loc_8222B6A4;
	case 192:
		goto loc_8222BCD4;
	case 193:
		goto loc_8222BA1C;
	case 194:
		goto loc_8222A5E8;
	case 195:
		goto loc_8222AF78;
	case 196:
		goto loc_8222BB60;
	case 197:
		goto loc_8222BB90;
	case 198:
		goto loc_8222BC14;
	case 199:
		goto loc_8222BC20;
	case 200:
		goto loc_8222BC68;
	case 201:
		goto loc_8222BCF8;
	case 202:
		goto loc_8222BD34;
	case 203:
		goto loc_8222BD70;
	case 204:
		goto loc_8222BDA0;
	case 205:
		goto loc_8222BE3C;
	case 206:
		goto loc_8222BF38;
	case 207:
		goto loc_8222BF5C;
	case 208:
		goto loc_8222BF98;
	case 209:
		goto loc_8222BFBC;
	case 210:
		goto loc_8222BFE0;
	case 211:
		goto loc_82229FE8;
	case 212:
		goto loc_8222A00C;
	case 213:
		goto loc_8222A09C;
	case 214:
		goto loc_8222A18C;
	case 215:
		goto loc_8222BB78;
	case 216:
		goto loc_8222BBA8;
	case 217:
		goto loc_8222BBCC;
	case 218:
		goto loc_8222BBD8;
	case 219:
		goto loc_8222BC2C;
	case 220:
		goto loc_8222AA74;
	case 221:
		goto loc_8222B1C4;
	case 222:
		goto loc_8222B1D0;
	case 223:
		goto loc_8222B1E8;
	case 224:
		goto loc_8222B20C;
	case 225:
		goto loc_8222B218;
	case 226:
		goto loc_8222B2A8;
	case 227:
		goto loc_8222B2B4;
	case 228:
		goto loc_8222B2C0;
	case 229:
		goto loc_8222B2D8;
	case 230:
		goto loc_8222B2E4;
	case 231:
		goto loc_8222B2F0;
	case 232:
		goto loc_8222B308;
	case 233:
		goto loc_8222B314;
	case 234:
		goto loc_8222B32C;
	case 235:
		goto loc_8222B3E0;
	case 236:
		goto loc_8222B3F8;
	case 237:
		goto loc_8222B41C;
	case 238:
		goto loc_8222B434;
	case 239:
		goto loc_8222B44C;
	case 240:
		goto loc_8222B464;
	case 241:
		goto loc_8222B470;
	case 242:
		goto loc_8222B47C;
	case 243:
		goto loc_8222B488;
	case 244:
		goto loc_8222A9CC;
	case 245:
		goto loc_8222A9D8;
	case 246:
		goto loc_8222BC98;
	case 247:
		goto loc_8222BD1C;
	case 248:
		goto loc_8222BD88;
	case 249:
		goto loc_8222BDB8;
	case 250:
		goto loc_8222BE18;
	case 251:
		goto loc_8222BE84;
	case 252:
		goto loc_8222BE90;
	case 253:
		goto loc_8222BEA8;
	case 254:
		goto loc_8222BECC;
	case 255:
		goto loc_8222BED8;
	case 256:
		goto loc_8222BF08;
	case 257:
		goto loc_8222BF20;
	case 258:
		goto loc_82229F64;
	case 259:
		goto loc_82229F70;
	case 260:
		goto loc_8222A078;
	case 261:
		goto loc_8222A0B4;
	case 262:
		goto loc_8222A0C0;
	case 263:
		goto loc_8222A0D8;
	case 264:
		goto loc_8222A180;
	case 265:
		goto loc_8222A1B0;
	case 266:
		goto loc_8222C004;
	case 267:
		goto loc_8222C004;
	case 268:
		goto loc_8222BB3C;
	case 269:
		goto loc_8222BB54;
	case 270:
		goto loc_8222B1B8;
	case 271:
		goto loc_8222A99C;
	case 272:
		goto loc_8222A9F0;
	case 273:
		goto loc_8222AA08;
	case 274:
		goto loc_8222C004;
	case 275:
		goto loc_8222A990;
	case 276:
		goto loc_8222A9C0;
	case 277:
		goto loc_8222A9E4;
	case 278:
		goto loc_8222AA80;
	case 279:
		goto loc_8222AA8C;
	case 280:
		goto loc_8222AE10;
	case 281:
		goto loc_8222AAF8;
	case 282:
		goto loc_8222AB88;
	case 283:
		goto loc_8222ABA0;
	case 284:
		goto loc_8222ABAC;
	case 285:
		goto loc_8222ABB8;
	case 286:
		goto loc_8222ABC4;
	case 287:
		goto loc_8222ACB4;
	case 288:
		goto loc_8222ACCC;
	case 289:
		goto loc_8222AE58;
	case 290:
		goto loc_8222AE64;
	case 291:
		goto loc_8222AE7C;
	case 292:
		goto loc_8222AE88;
	case 293:
		goto loc_8222AE94;
	case 294:
		goto loc_8222AFA8;
	case 295:
		goto loc_8222AFB4;
	case 296:
		goto loc_8222B020;
	case 297:
		goto loc_8222B158;
	case 298:
		goto loc_8222BFC8;
	case 299:
		goto loc_8222A960;
	case 300:
		goto loc_8222A96C;
	case 301:
		goto loc_8222A978;
	case 302:
		goto loc_8222A984;
	case 303:
		goto loc_8222A9FC;
	case 304:
		goto loc_8222AAB0;
	case 305:
		goto loc_8222A0CC;
	case 306:
		goto loc_8222A0E4;
	case 307:
		goto loc_8222A0FC;
	case 308:
		goto loc_8222A108;
	case 309:
		goto loc_8222A114;
	case 310:
		goto loc_8222A120;
	case 311:
		goto loc_8222A1E0;
	case 312:
		goto loc_8222A204;
	case 313:
		goto loc_8222A210;
	case 314:
		goto loc_8222A228;
	case 315:
		goto loc_8222A234;
	case 316:
		goto loc_8222A240;
	case 317:
		goto loc_8222A24C;
	case 318:
		goto loc_8222A258;
	case 319:
		goto loc_8222A264;
	case 320:
		goto loc_8222A348;
	case 321:
		goto loc_8222A354;
	case 322:
		goto loc_8222A360;
	case 323:
		goto loc_8222A36C;
	case 324:
		goto loc_8222A378;
	case 325:
		goto loc_8222A384;
	case 326:
		goto loc_8222A390;
	case 327:
		goto loc_8222A39C;
	case 328:
		goto loc_8222A3A8;
	case 329:
		goto loc_8222ADE0;
	case 330:
		goto loc_8222AAD4;
	case 331:
		goto loc_8222AB94;
	case 332:
		goto loc_8222ABD0;
	case 333:
		goto loc_8222AC9C;
	case 334:
		goto loc_8222ACE4;
	case 335:
		goto loc_8222ACF0;
	case 336:
		goto loc_8222AD08;
	case 337:
		goto loc_8222AD20;
	case 338:
		goto loc_8222AD38;
	case 339:
		goto loc_8222A21C;
	case 340:
		goto loc_8222AE40;
	case 341:
		goto loc_8222AEC4;
	case 342:
		goto loc_8222AEDC;
	case 343:
		goto loc_8222AFC0;
	case 344:
		goto loc_8222AFCC;
	case 345:
		goto loc_8222AFE4;
	case 346:
		goto loc_8222AFFC;
	case 347:
		goto loc_8222B008;
	case 348:
		goto loc_8222B170;
	case 349:
		goto loc_8222B194;
	case 350:
		goto loc_8222BF44;
	case 351:
		goto loc_8222BF80;
	case 352:
		goto loc_8222BFA4;
	case 353:
		goto loc_8222A0F0;
	case 354:
		goto loc_8222ADF8;
	case 355:
		goto loc_8222AA38;
	case 356:
		goto loc_8222AB28;
	case 357:
		goto loc_8222AB40;
	case 358:
		goto loc_8222BE48;
	case 359:
		goto loc_8222BF50;
	case 360:
		goto loc_8222BF68;
	case 361:
		goto loc_82229FC4;
	case 362:
		goto loc_82229FDC;
	case 363:
		goto loc_8222A000;
	case 364:
		goto loc_8222B758;
	case 365:
		goto loc_8222B788;
	case 366:
		goto loc_8222B7AC;
	case 367:
		goto loc_8222AB70;
	case 368:
		goto loc_8222AB7C;
	case 369:
		goto loc_8222AC24;
	case 370:
		goto loc_8222AC48;
	case 371:
		goto loc_8222AC54;
	case 372:
		goto loc_8222AC60;
	case 373:
		goto loc_8222AC6C;
	case 374:
		goto loc_8222AC78;
	case 375:
		goto loc_8222AC84;
	case 376:
		goto loc_8222A798;
	case 377:
		goto loc_8222ADBC;
	case 378:
		goto loc_8222ADC8;
	case 379:
		goto loc_8222ADD4;
	case 380:
		goto loc_8222AF54;
	case 381:
		goto loc_8222AF60;
	case 382:
		goto loc_8222AF6C;
	case 383:
		goto loc_8222AF84;
	case 384:
		goto loc_8222AF90;
	case 385:
		goto loc_8222B0A4;
	case 386:
		goto loc_8222B0BC;
	case 387:
		goto loc_8222B11C;
	case 388:
		goto loc_8222B23C;
	case 389:
		goto loc_8222B254;
	case 390:
		goto loc_8222AA2C;
	case 391:
		goto loc_8222AA44;
	case 392:
		goto loc_8222AA50;
	case 393:
		goto loc_8222AA5C;
	case 394:
		goto loc_8222AA68;
	case 395:
		goto loc_8222AB4C;
	case 396:
		goto loc_8222BE00;
	case 397:
		goto loc_8222BE24;
	case 398:
		goto loc_8222BE60;
	case 399:
		goto loc_8222BE9C;
	case 400:
		goto loc_8222BEC0;
	case 401:
		goto loc_8222BEFC;
	case 402:
		goto loc_8222BF14;
	case 403:
		goto loc_8222BF2C;
	case 404:
		goto loc_8222BF8C;
	case 405:
		goto loc_8222BFB0;
	case 406:
		goto loc_8222BFD4;
	case 407:
		goto loc_8222BFF8;
	case 408:
		goto loc_8222A024;
	case 409:
		goto loc_8222A03C;
	case 410:
		goto loc_8222A054;
	case 411:
		goto loc_8222A06C;
	case 412:
		goto loc_8222A090;
	case 413:
		goto loc_8222A0A8;
	case 414:
		goto loc_8222A2AC;
	case 415:
		goto loc_8222A2C4;
	case 416:
		goto loc_8222ADEC;
	case 417:
		goto loc_8222AE04;
	case 418:
		goto loc_8222AE1C;
	case 419:
		goto loc_8222AE28;
	case 420:
		goto loc_8222AE34;
	case 421:
		goto loc_8222AAC8;
	case 422:
		goto loc_8222AAE0;
	case 423:
		goto loc_8222AF48;
	case 424:
		goto loc_8222AF9C;
	case 425:
		goto loc_8222B0C8;
	case 426:
		goto loc_8222B0D4;
	case 427:
		goto loc_8222B0E0;
	case 428:
		goto loc_8222B9F8;
	case 429:
		goto loc_8222B0F8;
	case 430:
		goto loc_8222B260;
	case 431:
		goto loc_8222BA04;
	case 432:
		goto loc_8222BA10;
	case 433:
		goto loc_8222AA20;
	case 434:
		goto loc_8222B770;
	case 435:
		goto loc_8222B7A0;
	case 436:
		goto loc_8222B848;
	case 437:
		goto loc_8222B044;
	case 438:
		goto loc_8222B068;
	case 439:
		goto loc_8222B1DC;
	case 440:
		goto loc_8222B1F4;
	case 441:
		goto loc_8222B224;
	case 442:
		goto loc_8222B2FC;
	case 443:
		goto loc_8222B338;
	case 444:
		goto loc_8222B350;
	case 445:
		goto loc_8222B374;
	case 446:
		goto loc_8222B4A0;
	case 447:
		goto loc_8222B5B4;
	case 448:
		goto loc_8222B5C0;
	case 449:
		goto loc_8222B5CC;
	case 450:
		goto loc_8222B5D8;
	case 451:
		goto loc_8222B5E4;
	case 452:
		goto loc_8222B6B0;
	case 453:
		goto loc_8222B6BC;
	case 454:
		goto loc_8222B6D4;
	case 455:
		goto loc_8222B7D0;
	case 456:
		goto loc_8222B380;
	case 457:
		goto loc_8222B050;
	case 458:
		goto loc_8222B080;
	case 459:
		goto loc_8222B08C;
	case 460:
		goto loc_8222B098;
	case 461:
		goto loc_8222B200;
	case 462:
		goto loc_8222BB84;
	case 463:
		goto loc_8222BB9C;
	case 464:
		goto loc_8222BBB4;
	case 465:
		goto loc_8222BBC0;
	case 466:
		goto loc_8222BBE4;
	case 467:
		goto loc_8222BBF0;
	case 468:
		goto loc_8222BC38;
	case 469:
		goto loc_8222BC44;
	case 470:
		goto loc_8222BC50;
	case 471:
		goto loc_8222BC5C;
	case 472:
		goto loc_8222BC80;
	case 473:
		goto loc_8222BC8C;
	case 474:
		goto loc_8222BCA4;
	case 475:
		goto loc_8222BCB0;
	case 476:
		goto loc_8222BCBC;
	case 477:
		goto loc_8222BD10;
	case 478:
		goto loc_8222BD28;
	case 479:
		goto loc_8222BD40;
	case 480:
		goto loc_8222BD4C;
	case 481:
		goto loc_8222BD64;
	case 482:
		goto loc_8222BD7C;
	case 483:
		goto loc_8222BD94;
	case 484:
		goto loc_8222BDAC;
	case 485:
		goto loc_8222BDC4;
	case 486:
		goto loc_8222A768;
	case 487:
		goto loc_8222A774;
	case 488:
		goto loc_8222B230;
	case 489:
		goto loc_8222B320;
	case 490:
		goto loc_8222B368;
	case 491:
		goto loc_8222B494;
	case 492:
		goto loc_8222B4AC;
	case 493:
		goto loc_8222B4C4;
	case 494:
		goto loc_8222B4DC;
	case 495:
		goto loc_8222B4E8;
	case 496:
		goto loc_8222B4F4;
	case 497:
		goto loc_8222B590;
	case 498:
		goto loc_8222B5A8;
	case 499:
		goto loc_8222B5F0;
	case 500:
		goto loc_8222B5FC;
	case 501:
		goto loc_8222B6C8;
	case 502:
		goto loc_8222B6E0;
	case 503:
		goto loc_8222B6EC;
	case 504:
		goto loc_8222B6F8;
	case 505:
		goto loc_8222B7B8;
	case 506:
		goto loc_8222B7E8;
	case 507:
		goto loc_8222A4BC;
	case 508:
		goto loc_8222B014;
	case 509:
		goto loc_8222B02C;
	case 510:
		goto loc_8222A4E0;
	case 511:
		goto loc_8222A4EC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82229F64:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32528
	ctx.r3.s64 = ctx.r11.s64 + -32528;
	// blr 
	return;
loc_82229F70:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32492
	ctx.r3.s64 = ctx.r11.s64 + -32492;
	// blr 
	return;
loc_82229F7C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32456
	ctx.r3.s64 = ctx.r11.s64 + -32456;
	// blr 
	return;
loc_82229F88:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32424
	ctx.r3.s64 = ctx.r11.s64 + -32424;
	// blr 
	return;
loc_82229F94:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32392
	ctx.r3.s64 = ctx.r11.s64 + -32392;
	// blr 
	return;
loc_82229FA0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// blr 
	return;
loc_82229FAC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32332
	ctx.r3.s64 = ctx.r11.s64 + -32332;
	// blr 
	return;
loc_82229FB8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32304
	ctx.r3.s64 = ctx.r11.s64 + -32304;
	// blr 
	return;
loc_82229FC4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32276
	ctx.r3.s64 = ctx.r11.s64 + -32276;
	// blr 
	return;
loc_82229FD0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32240
	ctx.r3.s64 = ctx.r11.s64 + -32240;
	// blr 
	return;
loc_82229FDC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32212
	ctx.r3.s64 = ctx.r11.s64 + -32212;
	// blr 
	return;
loc_82229FE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32176
	ctx.r3.s64 = ctx.r11.s64 + -32176;
	// blr 
	return;
loc_82229FF4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32140
	ctx.r3.s64 = ctx.r11.s64 + -32140;
	// blr 
	return;
loc_8222A000:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32112
	ctx.r3.s64 = ctx.r11.s64 + -32112;
	// blr 
	return;
loc_8222A00C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32076
	ctx.r3.s64 = ctx.r11.s64 + -32076;
	// blr 
	return;
loc_8222A018:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32040
	ctx.r3.s64 = ctx.r11.s64 + -32040;
	// blr 
	return;
loc_8222A024:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32012
	ctx.r3.s64 = ctx.r11.s64 + -32012;
	// blr 
	return;
loc_8222A030:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31976
	ctx.r3.s64 = ctx.r11.s64 + -31976;
	// blr 
	return;
loc_8222A03C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31948
	ctx.r3.s64 = ctx.r11.s64 + -31948;
	// blr 
	return;
loc_8222A048:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31912
	ctx.r3.s64 = ctx.r11.s64 + -31912;
	// blr 
	return;
loc_8222A054:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31884
	ctx.r3.s64 = ctx.r11.s64 + -31884;
	// blr 
	return;
loc_8222A060:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31848
	ctx.r3.s64 = ctx.r11.s64 + -31848;
	// blr 
	return;
loc_8222A06C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31820
	ctx.r3.s64 = ctx.r11.s64 + -31820;
	// blr 
	return;
loc_8222A078:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31784
	ctx.r3.s64 = ctx.r11.s64 + -31784;
	// blr 
	return;
loc_8222A090:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31712
	ctx.r3.s64 = ctx.r11.s64 + -31712;
	// blr 
	return;
loc_8222A09C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31676
	ctx.r3.s64 = ctx.r11.s64 + -31676;
	// blr 
	return;
loc_8222A0A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31640
	ctx.r3.s64 = ctx.r11.s64 + -31640;
	// blr 
	return;
loc_8222A0B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31604
	ctx.r3.s64 = ctx.r11.s64 + -31604;
	// blr 
	return;
loc_8222A0C0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31568
	ctx.r3.s64 = ctx.r11.s64 + -31568;
	// blr 
	return;
loc_8222A0CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31532
	ctx.r3.s64 = ctx.r11.s64 + -31532;
	// blr 
	return;
loc_8222A0D8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31496
	ctx.r3.s64 = ctx.r11.s64 + -31496;
	// blr 
	return;
loc_8222A0E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31460
	ctx.r3.s64 = ctx.r11.s64 + -31460;
	// blr 
	return;
loc_8222A0F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31424
	ctx.r3.s64 = ctx.r11.s64 + -31424;
	// blr 
	return;
loc_8222A0FC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31388
	ctx.r3.s64 = ctx.r11.s64 + -31388;
	// blr 
	return;
loc_8222A108:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31352
	ctx.r3.s64 = ctx.r11.s64 + -31352;
	// blr 
	return;
loc_8222A114:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31316
	ctx.r3.s64 = ctx.r11.s64 + -31316;
	// blr 
	return;
loc_8222A120:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// blr 
	return;
loc_8222A12C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31244
	ctx.r3.s64 = ctx.r11.s64 + -31244;
	// blr 
	return;
loc_8222A138:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31212
	ctx.r3.s64 = ctx.r11.s64 + -31212;
	// blr 
	return;
loc_8222A144:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31180
	ctx.r3.s64 = ctx.r11.s64 + -31180;
	// blr 
	return;
loc_8222A150:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// blr 
	return;
loc_8222A15C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31120
	ctx.r3.s64 = ctx.r11.s64 + -31120;
	// blr 
	return;
loc_8222A168:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31092
	ctx.r3.s64 = ctx.r11.s64 + -31092;
	// blr 
	return;
loc_8222A174:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31064
	ctx.r3.s64 = ctx.r11.s64 + -31064;
	// blr 
	return;
loc_8222A180:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31036
	ctx.r3.s64 = ctx.r11.s64 + -31036;
	// blr 
	return;
loc_8222A18C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31000
	ctx.r3.s64 = ctx.r11.s64 + -31000;
	// blr 
	return;
loc_8222A198:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30964
	ctx.r3.s64 = ctx.r11.s64 + -30964;
	// blr 
	return;
loc_8222A1A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30936
	ctx.r3.s64 = ctx.r11.s64 + -30936;
	// blr 
	return;
loc_8222A1B0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30908
	ctx.r3.s64 = ctx.r11.s64 + -30908;
	// blr 
	return;
loc_8222A1BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// blr 
	return;
loc_8222A1C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30844
	ctx.r3.s64 = ctx.r11.s64 + -30844;
	// blr 
	return;
loc_8222A1E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30780
	ctx.r3.s64 = ctx.r11.s64 + -30780;
	// blr 
	return;
loc_8222A1EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// blr 
	return;
loc_8222A1F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30712
	ctx.r3.s64 = ctx.r11.s64 + -30712;
	// blr 
	return;
loc_8222A204:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30680
	ctx.r3.s64 = ctx.r11.s64 + -30680;
	// blr 
	return;
loc_8222A210:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30644
	ctx.r3.s64 = ctx.r11.s64 + -30644;
	// blr 
	return;
loc_8222A21C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// blr 
	return;
loc_8222A228:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30572
	ctx.r3.s64 = ctx.r11.s64 + -30572;
	// blr 
	return;
loc_8222A234:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30536
	ctx.r3.s64 = ctx.r11.s64 + -30536;
	// blr 
	return;
loc_8222A240:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30500
	ctx.r3.s64 = ctx.r11.s64 + -30500;
	// blr 
	return;
loc_8222A24C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30464
	ctx.r3.s64 = ctx.r11.s64 + -30464;
	// blr 
	return;
loc_8222A258:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30428
	ctx.r3.s64 = ctx.r11.s64 + -30428;
	// blr 
	return;
loc_8222A264:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30392
	ctx.r3.s64 = ctx.r11.s64 + -30392;
	// blr 
	return;
loc_8222A2AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30196
	ctx.r3.s64 = ctx.r11.s64 + -30196;
	// blr 
	return;
loc_8222A2C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30128
	ctx.r3.s64 = ctx.r11.s64 + -30128;
	// blr 
	return;
loc_8222A2DC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30060
	ctx.r3.s64 = ctx.r11.s64 + -30060;
	// blr 
	return;
loc_8222A300:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29968
	ctx.r3.s64 = ctx.r11.s64 + -29968;
	// blr 
	return;
loc_8222A324:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29868
	ctx.r3.s64 = ctx.r11.s64 + -29868;
	// blr 
	return;
loc_8222A330:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29836
	ctx.r3.s64 = ctx.r11.s64 + -29836;
	// blr 
	return;
loc_8222A348:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29772
	ctx.r3.s64 = ctx.r11.s64 + -29772;
	// blr 
	return;
loc_8222A354:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29736
	ctx.r3.s64 = ctx.r11.s64 + -29736;
	// blr 
	return;
loc_8222A360:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29700
	ctx.r3.s64 = ctx.r11.s64 + -29700;
	// blr 
	return;
loc_8222A36C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// blr 
	return;
loc_8222A378:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29628
	ctx.r3.s64 = ctx.r11.s64 + -29628;
	// blr 
	return;
loc_8222A384:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29592
	ctx.r3.s64 = ctx.r11.s64 + -29592;
	// blr 
	return;
loc_8222A390:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29556
	ctx.r3.s64 = ctx.r11.s64 + -29556;
	// blr 
	return;
loc_8222A39C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29520
	ctx.r3.s64 = ctx.r11.s64 + -29520;
	// blr 
	return;
loc_8222A3A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29484
	ctx.r3.s64 = ctx.r11.s64 + -29484;
	// blr 
	return;
loc_8222A3B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29448
	ctx.r3.s64 = ctx.r11.s64 + -29448;
	// blr 
	return;
loc_8222A3CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29388
	ctx.r3.s64 = ctx.r11.s64 + -29388;
	// blr 
	return;
loc_8222A42C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29132
	ctx.r3.s64 = ctx.r11.s64 + -29132;
	// blr 
	return;
loc_8222A498:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28840
	ctx.r3.s64 = ctx.r11.s64 + -28840;
	// blr 
	return;
loc_8222A4BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28744
	ctx.r3.s64 = ctx.r11.s64 + -28744;
	// blr 
	return;
loc_8222A4C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28704
	ctx.r3.s64 = ctx.r11.s64 + -28704;
	// blr 
	return;
loc_8222A4E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28636
	ctx.r3.s64 = ctx.r11.s64 + -28636;
	// blr 
	return;
loc_8222A4EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28596
	ctx.r3.s64 = ctx.r11.s64 + -28596;
	// blr 
	return;
loc_8222A4F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28556
	ctx.r3.s64 = ctx.r11.s64 + -28556;
	// blr 
	return;
loc_8222A504:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28524
	ctx.r3.s64 = ctx.r11.s64 + -28524;
	// blr 
	return;
loc_8222A510:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// blr 
	return;
loc_8222A51C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28468
	ctx.r3.s64 = ctx.r11.s64 + -28468;
	// blr 
	return;
loc_8222A528:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28440
	ctx.r3.s64 = ctx.r11.s64 + -28440;
	// blr 
	return;
loc_8222A534:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28404
	ctx.r3.s64 = ctx.r11.s64 + -28404;
	// blr 
	return;
loc_8222A594:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28152
	ctx.r3.s64 = ctx.r11.s64 + -28152;
	// blr 
	return;
loc_8222A5AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28092
	ctx.r3.s64 = ctx.r11.s64 + -28092;
	// blr 
	return;
loc_8222A5B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28064
	ctx.r3.s64 = ctx.r11.s64 + -28064;
	// blr 
	return;
loc_8222A5D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28004
	ctx.r3.s64 = ctx.r11.s64 + -28004;
	// blr 
	return;
loc_8222A5DC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27976
	ctx.r3.s64 = ctx.r11.s64 + -27976;
	// blr 
	return;
loc_8222A5E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27948
	ctx.r3.s64 = ctx.r11.s64 + -27948;
	// blr 
	return;
loc_8222A5F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27916
	ctx.r3.s64 = ctx.r11.s64 + -27916;
	// blr 
	return;
loc_8222A600:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27884
	ctx.r3.s64 = ctx.r11.s64 + -27884;
	// blr 
	return;
loc_8222A60C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27856
	ctx.r3.s64 = ctx.r11.s64 + -27856;
	// blr 
	return;
loc_8222A618:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27824
	ctx.r3.s64 = ctx.r11.s64 + -27824;
	// blr 
	return;
loc_8222A624:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27792
	ctx.r3.s64 = ctx.r11.s64 + -27792;
	// blr 
	return;
loc_8222A63C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27732
	ctx.r3.s64 = ctx.r11.s64 + -27732;
	// blr 
	return;
loc_8222A654:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27672
	ctx.r3.s64 = ctx.r11.s64 + -27672;
	// blr 
	return;
loc_8222A66C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27612
	ctx.r3.s64 = ctx.r11.s64 + -27612;
	// blr 
	return;
loc_8222A684:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// blr 
	return;
loc_8222A69C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27492
	ctx.r3.s64 = ctx.r11.s64 + -27492;
	// blr 
	return;
loc_8222A6B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// blr 
	return;
loc_8222A6CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27372
	ctx.r3.s64 = ctx.r11.s64 + -27372;
	// blr 
	return;
loc_8222A6E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// blr 
	return;
loc_8222A6F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27284
	ctx.r3.s64 = ctx.r11.s64 + -27284;
	// blr 
	return;
loc_8222A708:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27224
	ctx.r3.s64 = ctx.r11.s64 + -27224;
	// blr 
	return;
loc_8222A714:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27196
	ctx.r3.s64 = ctx.r11.s64 + -27196;
	// blr 
	return;
loc_8222A72C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// blr 
	return;
loc_8222A738:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27108
	ctx.r3.s64 = ctx.r11.s64 + -27108;
	// blr 
	return;
loc_8222A744:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27076
	ctx.r3.s64 = ctx.r11.s64 + -27076;
	// blr 
	return;
loc_8222A750:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27048
	ctx.r3.s64 = ctx.r11.s64 + -27048;
	// blr 
	return;
loc_8222A768:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26976
	ctx.r3.s64 = ctx.r11.s64 + -26976;
	// blr 
	return;
loc_8222A774:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26936
	ctx.r3.s64 = ctx.r11.s64 + -26936;
	// blr 
	return;
loc_8222A798:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26816
	ctx.r3.s64 = ctx.r11.s64 + -26816;
	// blr 
	return;
loc_8222A7A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26780
	ctx.r3.s64 = ctx.r11.s64 + -26780;
	// blr 
	return;
loc_8222A7B0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26748
	ctx.r3.s64 = ctx.r11.s64 + -26748;
	// blr 
	return;
loc_8222A7C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26688
	ctx.r3.s64 = ctx.r11.s64 + -26688;
	// blr 
	return;
loc_8222A7E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26628
	ctx.r3.s64 = ctx.r11.s64 + -26628;
	// blr 
	return;
loc_8222A7EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// blr 
	return;
loc_8222A804:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26536
	ctx.r3.s64 = ctx.r11.s64 + -26536;
	// blr 
	return;
loc_8222A840:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26372
	ctx.r3.s64 = ctx.r11.s64 + -26372;
	// blr 
	return;
loc_8222A864:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26276
	ctx.r3.s64 = ctx.r11.s64 + -26276;
	// blr 
	return;
loc_8222A87C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// blr 
	return;
loc_8222A8A0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26124
	ctx.r3.s64 = ctx.r11.s64 + -26124;
	// blr 
	return;
loc_8222A8AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26096
	ctx.r3.s64 = ctx.r11.s64 + -26096;
	// blr 
	return;
loc_8222A8B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// blr 
	return;
loc_8222A8D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26000
	ctx.r3.s64 = ctx.r11.s64 + -26000;
	// blr 
	return;
loc_8222A8E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25940
	ctx.r3.s64 = ctx.r11.s64 + -25940;
	// blr 
	return;
loc_8222A8F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25908
	ctx.r3.s64 = ctx.r11.s64 + -25908;
	// blr 
	return;
loc_8222A90C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// blr 
	return;
loc_8222A93C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25724
	ctx.r3.s64 = ctx.r11.s64 + -25724;
	// blr 
	return;
loc_8222A954:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25664
	ctx.r3.s64 = ctx.r11.s64 + -25664;
	// blr 
	return;
loc_8222A960:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25632
	ctx.r3.s64 = ctx.r11.s64 + -25632;
	// blr 
	return;
loc_8222A96C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25596
	ctx.r3.s64 = ctx.r11.s64 + -25596;
	// blr 
	return;
loc_8222A978:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25560
	ctx.r3.s64 = ctx.r11.s64 + -25560;
	// blr 
	return;
loc_8222A984:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25524
	ctx.r3.s64 = ctx.r11.s64 + -25524;
	// blr 
	return;
loc_8222A990:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// blr 
	return;
loc_8222A99C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25452
	ctx.r3.s64 = ctx.r11.s64 + -25452;
	// blr 
	return;
loc_8222A9A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25412
	ctx.r3.s64 = ctx.r11.s64 + -25412;
	// blr 
	return;
loc_8222A9B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25380
	ctx.r3.s64 = ctx.r11.s64 + -25380;
	// blr 
	return;
loc_8222A9C0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// blr 
	return;
loc_8222A9CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25316
	ctx.r3.s64 = ctx.r11.s64 + -25316;
	// blr 
	return;
loc_8222A9D8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25276
	ctx.r3.s64 = ctx.r11.s64 + -25276;
	// blr 
	return;
loc_8222A9E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25236
	ctx.r3.s64 = ctx.r11.s64 + -25236;
	// blr 
	return;
loc_8222A9F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25200
	ctx.r3.s64 = ctx.r11.s64 + -25200;
	// blr 
	return;
loc_8222A9FC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25160
	ctx.r3.s64 = ctx.r11.s64 + -25160;
	// blr 
	return;
loc_8222AA08:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25124
	ctx.r3.s64 = ctx.r11.s64 + -25124;
	// blr 
	return;
loc_8222AA14:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25084
	ctx.r3.s64 = ctx.r11.s64 + -25084;
	// blr 
	return;
loc_8222AA20:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25052
	ctx.r3.s64 = ctx.r11.s64 + -25052;
	// blr 
	return;
loc_8222AA2C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25016
	ctx.r3.s64 = ctx.r11.s64 + -25016;
	// blr 
	return;
loc_8222AA38:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24980
	ctx.r3.s64 = ctx.r11.s64 + -24980;
	// blr 
	return;
loc_8222AA44:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// blr 
	return;
loc_8222AA50:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24908
	ctx.r3.s64 = ctx.r11.s64 + -24908;
	// blr 
	return;
loc_8222AA5C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24872
	ctx.r3.s64 = ctx.r11.s64 + -24872;
	// blr 
	return;
loc_8222AA68:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24836
	ctx.r3.s64 = ctx.r11.s64 + -24836;
	// blr 
	return;
loc_8222AA74:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24800
	ctx.r3.s64 = ctx.r11.s64 + -24800;
	// blr 
	return;
loc_8222AA80:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24760
	ctx.r3.s64 = ctx.r11.s64 + -24760;
	// blr 
	return;
loc_8222AA8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24724
	ctx.r3.s64 = ctx.r11.s64 + -24724;
	// blr 
	return;
loc_8222AA98:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24688
	ctx.r3.s64 = ctx.r11.s64 + -24688;
	// blr 
	return;
loc_8222AAB0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24620
	ctx.r3.s64 = ctx.r11.s64 + -24620;
	// blr 
	return;
loc_8222AAC8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24548
	ctx.r3.s64 = ctx.r11.s64 + -24548;
	// blr 
	return;
loc_8222AAD4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24512
	ctx.r3.s64 = ctx.r11.s64 + -24512;
	// blr 
	return;
loc_8222AAE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24476
	ctx.r3.s64 = ctx.r11.s64 + -24476;
	// blr 
	return;
loc_8222AAEC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24440
	ctx.r3.s64 = ctx.r11.s64 + -24440;
	// blr 
	return;
loc_8222AAF8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24412
	ctx.r3.s64 = ctx.r11.s64 + -24412;
	// blr 
	return;
loc_8222AB04:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// blr 
	return;
loc_8222AB10:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24348
	ctx.r3.s64 = ctx.r11.s64 + -24348;
	// blr 
	return;
loc_8222AB1C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24320
	ctx.r3.s64 = ctx.r11.s64 + -24320;
	// blr 
	return;
loc_8222AB28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24288
	ctx.r3.s64 = ctx.r11.s64 + -24288;
	// blr 
	return;
loc_8222AB34:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24252
	ctx.r3.s64 = ctx.r11.s64 + -24252;
	// blr 
	return;
loc_8222AB40:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// blr 
	return;
loc_8222AB4C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24188
	ctx.r3.s64 = ctx.r11.s64 + -24188;
	// blr 
	return;
loc_8222AB58:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24152
	ctx.r3.s64 = ctx.r11.s64 + -24152;
	// blr 
	return;
loc_8222AB64:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24124
	ctx.r3.s64 = ctx.r11.s64 + -24124;
	// blr 
	return;
loc_8222AB70:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24096
	ctx.r3.s64 = ctx.r11.s64 + -24096;
	// blr 
	return;
loc_8222AB7C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24060
	ctx.r3.s64 = ctx.r11.s64 + -24060;
	// blr 
	return;
loc_8222AB88:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24024
	ctx.r3.s64 = ctx.r11.s64 + -24024;
	// blr 
	return;
loc_8222AB94:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23988
	ctx.r3.s64 = ctx.r11.s64 + -23988;
	// blr 
	return;
loc_8222ABA0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23952
	ctx.r3.s64 = ctx.r11.s64 + -23952;
	// blr 
	return;
loc_8222ABAC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23916
	ctx.r3.s64 = ctx.r11.s64 + -23916;
	// blr 
	return;
loc_8222ABB8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23880
	ctx.r3.s64 = ctx.r11.s64 + -23880;
	// blr 
	return;
loc_8222ABC4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23844
	ctx.r3.s64 = ctx.r11.s64 + -23844;
	// blr 
	return;
loc_8222ABD0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23808
	ctx.r3.s64 = ctx.r11.s64 + -23808;
	// blr 
	return;
loc_8222ABDC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23772
	ctx.r3.s64 = ctx.r11.s64 + -23772;
	// blr 
	return;
loc_8222ABE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23744
	ctx.r3.s64 = ctx.r11.s64 + -23744;
	// blr 
	return;
loc_8222ABF4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23716
	ctx.r3.s64 = ctx.r11.s64 + -23716;
	// blr 
	return;
loc_8222AC00:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23688
	ctx.r3.s64 = ctx.r11.s64 + -23688;
	// blr 
	return;
loc_8222AC0C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23660
	ctx.r3.s64 = ctx.r11.s64 + -23660;
	// blr 
	return;
loc_8222AC18:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23632
	ctx.r3.s64 = ctx.r11.s64 + -23632;
	// blr 
	return;
loc_8222AC24:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23604
	ctx.r3.s64 = ctx.r11.s64 + -23604;
	// blr 
	return;
loc_8222AC30:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23568
	ctx.r3.s64 = ctx.r11.s64 + -23568;
	// blr 
	return;
loc_8222AC3C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23540
	ctx.r3.s64 = ctx.r11.s64 + -23540;
	// blr 
	return;
loc_8222AC48:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23512
	ctx.r3.s64 = ctx.r11.s64 + -23512;
	// blr 
	return;
loc_8222AC54:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23476
	ctx.r3.s64 = ctx.r11.s64 + -23476;
	// blr 
	return;
loc_8222AC60:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23440
	ctx.r3.s64 = ctx.r11.s64 + -23440;
	// blr 
	return;
loc_8222AC6C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23404
	ctx.r3.s64 = ctx.r11.s64 + -23404;
	// blr 
	return;
loc_8222AC78:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23368
	ctx.r3.s64 = ctx.r11.s64 + -23368;
	// blr 
	return;
loc_8222AC84:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23332
	ctx.r3.s64 = ctx.r11.s64 + -23332;
	// blr 
	return;
loc_8222AC9C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// blr 
	return;
loc_8222ACB4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23184
	ctx.r3.s64 = ctx.r11.s64 + -23184;
	// blr 
	return;
loc_8222ACCC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23108
	ctx.r3.s64 = ctx.r11.s64 + -23108;
	// blr 
	return;
loc_8222ACE4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23032
	ctx.r3.s64 = ctx.r11.s64 + -23032;
	// blr 
	return;
loc_8222ACF0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22996
	ctx.r3.s64 = ctx.r11.s64 + -22996;
	// blr 
	return;
loc_8222ACFC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22960
	ctx.r3.s64 = ctx.r11.s64 + -22960;
	// blr 
	return;
loc_8222AD08:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22932
	ctx.r3.s64 = ctx.r11.s64 + -22932;
	// blr 
	return;
loc_8222AD14:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// blr 
	return;
loc_8222AD20:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22868
	ctx.r3.s64 = ctx.r11.s64 + -22868;
	// blr 
	return;
loc_8222AD2C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22832
	ctx.r3.s64 = ctx.r11.s64 + -22832;
	// blr 
	return;
loc_8222AD38:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22804
	ctx.r3.s64 = ctx.r11.s64 + -22804;
	// blr 
	return;
loc_8222AD44:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22768
	ctx.r3.s64 = ctx.r11.s64 + -22768;
	// blr 
	return;
loc_8222AD50:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22740
	ctx.r3.s64 = ctx.r11.s64 + -22740;
	// blr 
	return;
loc_8222AD5C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22712
	ctx.r3.s64 = ctx.r11.s64 + -22712;
	// blr 
	return;
loc_8222AD68:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22684
	ctx.r3.s64 = ctx.r11.s64 + -22684;
	// blr 
	return;
loc_8222AD74:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22656
	ctx.r3.s64 = ctx.r11.s64 + -22656;
	// blr 
	return;
loc_8222AD80:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22628
	ctx.r3.s64 = ctx.r11.s64 + -22628;
	// blr 
	return;
loc_8222AD8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22600
	ctx.r3.s64 = ctx.r11.s64 + -22600;
	// blr 
	return;
loc_8222AD98:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22572
	ctx.r3.s64 = ctx.r11.s64 + -22572;
	// blr 
	return;
loc_8222ADA4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// blr 
	return;
loc_8222ADB0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// blr 
	return;
loc_8222ADBC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22484
	ctx.r3.s64 = ctx.r11.s64 + -22484;
	// blr 
	return;
loc_8222ADC8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22448
	ctx.r3.s64 = ctx.r11.s64 + -22448;
	// blr 
	return;
loc_8222ADD4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22412
	ctx.r3.s64 = ctx.r11.s64 + -22412;
	// blr 
	return;
loc_8222ADE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22376
	ctx.r3.s64 = ctx.r11.s64 + -22376;
	// blr 
	return;
loc_8222ADEC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22336
	ctx.r3.s64 = ctx.r11.s64 + -22336;
	// blr 
	return;
loc_8222ADF8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22300
	ctx.r3.s64 = ctx.r11.s64 + -22300;
	// blr 
	return;
loc_8222AE04:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22260
	ctx.r3.s64 = ctx.r11.s64 + -22260;
	// blr 
	return;
loc_8222AE10:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22224
	ctx.r3.s64 = ctx.r11.s64 + -22224;
	// blr 
	return;
loc_8222AE1C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22184
	ctx.r3.s64 = ctx.r11.s64 + -22184;
	// blr 
	return;
loc_8222AE28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22148
	ctx.r3.s64 = ctx.r11.s64 + -22148;
	// blr 
	return;
loc_8222AE34:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22112
	ctx.r3.s64 = ctx.r11.s64 + -22112;
	// blr 
	return;
loc_8222AE40:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22076
	ctx.r3.s64 = ctx.r11.s64 + -22076;
	// blr 
	return;
loc_8222AE58:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22004
	ctx.r3.s64 = ctx.r11.s64 + -22004;
	// blr 
	return;
loc_8222AE64:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21968
	ctx.r3.s64 = ctx.r11.s64 + -21968;
	// blr 
	return;
loc_8222AE70:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21932
	ctx.r3.s64 = ctx.r11.s64 + -21932;
	// blr 
	return;
loc_8222AE7C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21900
	ctx.r3.s64 = ctx.r11.s64 + -21900;
	// blr 
	return;
loc_8222AE88:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21864
	ctx.r3.s64 = ctx.r11.s64 + -21864;
	// blr 
	return;
loc_8222AE94:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21828
	ctx.r3.s64 = ctx.r11.s64 + -21828;
	// blr 
	return;
loc_8222AEA0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21792
	ctx.r3.s64 = ctx.r11.s64 + -21792;
	// blr 
	return;
loc_8222AEAC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21764
	ctx.r3.s64 = ctx.r11.s64 + -21764;
	// blr 
	return;
loc_8222AEB8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21732
	ctx.r3.s64 = ctx.r11.s64 + -21732;
	// blr 
	return;
loc_8222AEC4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// blr 
	return;
loc_8222AED0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21668
	ctx.r3.s64 = ctx.r11.s64 + -21668;
	// blr 
	return;
loc_8222AEDC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21640
	ctx.r3.s64 = ctx.r11.s64 + -21640;
	// blr 
	return;
loc_8222AEF4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21572
	ctx.r3.s64 = ctx.r11.s64 + -21572;
	// blr 
	return;
loc_8222AF00:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21544
	ctx.r3.s64 = ctx.r11.s64 + -21544;
	// blr 
	return;
loc_8222AF0C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21516
	ctx.r3.s64 = ctx.r11.s64 + -21516;
	// blr 
	return;
loc_8222AF18:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21488
	ctx.r3.s64 = ctx.r11.s64 + -21488;
	// blr 
	return;
loc_8222AF24:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21456
	ctx.r3.s64 = ctx.r11.s64 + -21456;
	// blr 
	return;
loc_8222AF30:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21420
	ctx.r3.s64 = ctx.r11.s64 + -21420;
	// blr 
	return;
loc_8222AF3C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21392
	ctx.r3.s64 = ctx.r11.s64 + -21392;
	// blr 
	return;
loc_8222AF48:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21360
	ctx.r3.s64 = ctx.r11.s64 + -21360;
	// blr 
	return;
loc_8222AF54:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21324
	ctx.r3.s64 = ctx.r11.s64 + -21324;
	// blr 
	return;
loc_8222AF60:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21288
	ctx.r3.s64 = ctx.r11.s64 + -21288;
	// blr 
	return;
loc_8222AF6C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21252
	ctx.r3.s64 = ctx.r11.s64 + -21252;
	// blr 
	return;
loc_8222AF78:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// blr 
	return;
loc_8222AF84:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21184
	ctx.r3.s64 = ctx.r11.s64 + -21184;
	// blr 
	return;
loc_8222AF90:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21148
	ctx.r3.s64 = ctx.r11.s64 + -21148;
	// blr 
	return;
loc_8222AF9C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21112
	ctx.r3.s64 = ctx.r11.s64 + -21112;
	// blr 
	return;
loc_8222AFA8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21076
	ctx.r3.s64 = ctx.r11.s64 + -21076;
	// blr 
	return;
loc_8222AFB4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21040
	ctx.r3.s64 = ctx.r11.s64 + -21040;
	// blr 
	return;
loc_8222AFC0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21004
	ctx.r3.s64 = ctx.r11.s64 + -21004;
	// blr 
	return;
loc_8222AFCC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// blr 
	return;
loc_8222AFD8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20932
	ctx.r3.s64 = ctx.r11.s64 + -20932;
	// blr 
	return;
loc_8222AFE4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// blr 
	return;
loc_8222AFF0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20868
	ctx.r3.s64 = ctx.r11.s64 + -20868;
	// blr 
	return;
loc_8222AFFC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20840
	ctx.r3.s64 = ctx.r11.s64 + -20840;
	// blr 
	return;
loc_8222B008:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20804
	ctx.r3.s64 = ctx.r11.s64 + -20804;
	// blr 
	return;
loc_8222B014:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20768
	ctx.r3.s64 = ctx.r11.s64 + -20768;
	// blr 
	return;
loc_8222B020:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20732
	ctx.r3.s64 = ctx.r11.s64 + -20732;
	// blr 
	return;
loc_8222B02C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// blr 
	return;
loc_8222B038:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20660
	ctx.r3.s64 = ctx.r11.s64 + -20660;
	// blr 
	return;
loc_8222B044:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20632
	ctx.r3.s64 = ctx.r11.s64 + -20632;
	// blr 
	return;
loc_8222B050:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20596
	ctx.r3.s64 = ctx.r11.s64 + -20596;
	// blr 
	return;
loc_8222B068:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20524
	ctx.r3.s64 = ctx.r11.s64 + -20524;
	// blr 
	return;
loc_8222B080:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20452
	ctx.r3.s64 = ctx.r11.s64 + -20452;
	// blr 
	return;
loc_8222B08C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20416
	ctx.r3.s64 = ctx.r11.s64 + -20416;
	// blr 
	return;
loc_8222B098:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// blr 
	return;
loc_8222B0A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20344
	ctx.r3.s64 = ctx.r11.s64 + -20344;
	// blr 
	return;
loc_8222B0B0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20308
	ctx.r3.s64 = ctx.r11.s64 + -20308;
	// blr 
	return;
loc_8222B0BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20276
	ctx.r3.s64 = ctx.r11.s64 + -20276;
	// blr 
	return;
loc_8222B0C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20240
	ctx.r3.s64 = ctx.r11.s64 + -20240;
	// blr 
	return;
loc_8222B0D4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20204
	ctx.r3.s64 = ctx.r11.s64 + -20204;
	// blr 
	return;
loc_8222B0E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20168
	ctx.r3.s64 = ctx.r11.s64 + -20168;
	// blr 
	return;
loc_8222B0EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20132
	ctx.r3.s64 = ctx.r11.s64 + -20132;
	// blr 
	return;
loc_8222B0F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20100
	ctx.r3.s64 = ctx.r11.s64 + -20100;
	// blr 
	return;
loc_8222B104:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20064
	ctx.r3.s64 = ctx.r11.s64 + -20064;
	// blr 
	return;
loc_8222B11C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19992
	ctx.r3.s64 = ctx.r11.s64 + -19992;
	// blr 
	return;
loc_8222B140:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19884
	ctx.r3.s64 = ctx.r11.s64 + -19884;
	// blr 
	return;
loc_8222B158:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// blr 
	return;
loc_8222B170:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// blr 
	return;
loc_8222B194:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19636
	ctx.r3.s64 = ctx.r11.s64 + -19636;
	// blr 
	return;
loc_8222B1AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19564
	ctx.r3.s64 = ctx.r11.s64 + -19564;
	// blr 
	return;
loc_8222B1B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19536
	ctx.r3.s64 = ctx.r11.s64 + -19536;
	// blr 
	return;
loc_8222B1C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19500
	ctx.r3.s64 = ctx.r11.s64 + -19500;
	// blr 
	return;
loc_8222B1D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19464
	ctx.r3.s64 = ctx.r11.s64 + -19464;
	// blr 
	return;
loc_8222B1DC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19428
	ctx.r3.s64 = ctx.r11.s64 + -19428;
	// blr 
	return;
loc_8222B1E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19392
	ctx.r3.s64 = ctx.r11.s64 + -19392;
	// blr 
	return;
loc_8222B1F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19356
	ctx.r3.s64 = ctx.r11.s64 + -19356;
	// blr 
	return;
loc_8222B200:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19320
	ctx.r3.s64 = ctx.r11.s64 + -19320;
	// blr 
	return;
loc_8222B20C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19284
	ctx.r3.s64 = ctx.r11.s64 + -19284;
	// blr 
	return;
loc_8222B218:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19248
	ctx.r3.s64 = ctx.r11.s64 + -19248;
	// blr 
	return;
loc_8222B224:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19212
	ctx.r3.s64 = ctx.r11.s64 + -19212;
	// blr 
	return;
loc_8222B230:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// blr 
	return;
loc_8222B23C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19140
	ctx.r3.s64 = ctx.r11.s64 + -19140;
	// blr 
	return;
loc_8222B248:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// blr 
	return;
loc_8222B254:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19072
	ctx.r3.s64 = ctx.r11.s64 + -19072;
	// blr 
	return;
loc_8222B260:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19036
	ctx.r3.s64 = ctx.r11.s64 + -19036;
	// blr 
	return;
loc_8222B2A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18820
	ctx.r3.s64 = ctx.r11.s64 + -18820;
	// blr 
	return;
loc_8222B2B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18784
	ctx.r3.s64 = ctx.r11.s64 + -18784;
	// blr 
	return;
loc_8222B2C0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18748
	ctx.r3.s64 = ctx.r11.s64 + -18748;
	// blr 
	return;
loc_8222B2CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// blr 
	return;
loc_8222B2D8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18684
	ctx.r3.s64 = ctx.r11.s64 + -18684;
	// blr 
	return;
loc_8222B2E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18648
	ctx.r3.s64 = ctx.r11.s64 + -18648;
	// blr 
	return;
loc_8222B2F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18612
	ctx.r3.s64 = ctx.r11.s64 + -18612;
	// blr 
	return;
loc_8222B2FC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// blr 
	return;
loc_8222B308:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18540
	ctx.r3.s64 = ctx.r11.s64 + -18540;
	// blr 
	return;
loc_8222B314:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// blr 
	return;
loc_8222B320:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18468
	ctx.r3.s64 = ctx.r11.s64 + -18468;
	// blr 
	return;
loc_8222B32C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// blr 
	return;
loc_8222B338:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18396
	ctx.r3.s64 = ctx.r11.s64 + -18396;
	// blr 
	return;
loc_8222B344:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// blr 
	return;
loc_8222B350:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18332
	ctx.r3.s64 = ctx.r11.s64 + -18332;
	// blr 
	return;
loc_8222B35C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// blr 
	return;
loc_8222B368:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18268
	ctx.r3.s64 = ctx.r11.s64 + -18268;
	// blr 
	return;
loc_8222B374:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// blr 
	return;
loc_8222B380:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18196
	ctx.r3.s64 = ctx.r11.s64 + -18196;
	// blr 
	return;
loc_8222B3A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// blr 
	return;
loc_8222B3D4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17948
	ctx.r3.s64 = ctx.r11.s64 + -17948;
	// blr 
	return;
loc_8222B3E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17916
	ctx.r3.s64 = ctx.r11.s64 + -17916;
	// blr 
	return;
loc_8222B3F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17844
	ctx.r3.s64 = ctx.r11.s64 + -17844;
	// blr 
	return;
loc_8222B410:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17772
	ctx.r3.s64 = ctx.r11.s64 + -17772;
	// blr 
	return;
loc_8222B41C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// blr 
	return;
loc_8222B428:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17708
	ctx.r3.s64 = ctx.r11.s64 + -17708;
	// blr 
	return;
loc_8222B434:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// blr 
	return;
loc_8222B440:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17644
	ctx.r3.s64 = ctx.r11.s64 + -17644;
	// blr 
	return;
loc_8222B44C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// blr 
	return;
loc_8222B458:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17580
	ctx.r3.s64 = ctx.r11.s64 + -17580;
	// blr 
	return;
loc_8222B464:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17552
	ctx.r3.s64 = ctx.r11.s64 + -17552;
	// blr 
	return;
loc_8222B470:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17516
	ctx.r3.s64 = ctx.r11.s64 + -17516;
	// blr 
	return;
loc_8222B47C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// blr 
	return;
loc_8222B488:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17444
	ctx.r3.s64 = ctx.r11.s64 + -17444;
	// blr 
	return;
loc_8222B494:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// blr 
	return;
loc_8222B4A0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17372
	ctx.r3.s64 = ctx.r11.s64 + -17372;
	// blr 
	return;
loc_8222B4AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// blr 
	return;
loc_8222B4B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17300
	ctx.r3.s64 = ctx.r11.s64 + -17300;
	// blr 
	return;
loc_8222B4C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17272
	ctx.r3.s64 = ctx.r11.s64 + -17272;
	// blr 
	return;
loc_8222B4D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17236
	ctx.r3.s64 = ctx.r11.s64 + -17236;
	// blr 
	return;
loc_8222B4DC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17208
	ctx.r3.s64 = ctx.r11.s64 + -17208;
	// blr 
	return;
loc_8222B4E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17172
	ctx.r3.s64 = ctx.r11.s64 + -17172;
	// blr 
	return;
loc_8222B4F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17136
	ctx.r3.s64 = ctx.r11.s64 + -17136;
	// blr 
	return;
loc_8222B560:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16812
	ctx.r3.s64 = ctx.r11.s64 + -16812;
	// blr 
	return;
loc_8222B56C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16784
	ctx.r3.s64 = ctx.r11.s64 + -16784;
	// blr 
	return;
loc_8222B578:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16756
	ctx.r3.s64 = ctx.r11.s64 + -16756;
	// blr 
	return;
loc_8222B584:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16724
	ctx.r3.s64 = ctx.r11.s64 + -16724;
	// blr 
	return;
loc_8222B590:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16696
	ctx.r3.s64 = ctx.r11.s64 + -16696;
	// blr 
	return;
loc_8222B59C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16660
	ctx.r3.s64 = ctx.r11.s64 + -16660;
	// blr 
	return;
loc_8222B5A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16632
	ctx.r3.s64 = ctx.r11.s64 + -16632;
	// blr 
	return;
loc_8222B5B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16596
	ctx.r3.s64 = ctx.r11.s64 + -16596;
	// blr 
	return;
loc_8222B5C0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16560
	ctx.r3.s64 = ctx.r11.s64 + -16560;
	// blr 
	return;
loc_8222B5CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16524
	ctx.r3.s64 = ctx.r11.s64 + -16524;
	// blr 
	return;
loc_8222B5D8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16488
	ctx.r3.s64 = ctx.r11.s64 + -16488;
	// blr 
	return;
loc_8222B5E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16452
	ctx.r3.s64 = ctx.r11.s64 + -16452;
	// blr 
	return;
loc_8222B5F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// blr 
	return;
loc_8222B5FC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16380
	ctx.r3.s64 = ctx.r11.s64 + -16380;
	// blr 
	return;
loc_8222B608:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16344
	ctx.r3.s64 = ctx.r11.s64 + -16344;
	// blr 
	return;
loc_8222B614:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16308
	ctx.r3.s64 = ctx.r11.s64 + -16308;
	// blr 
	return;
loc_8222B644:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16168
	ctx.r3.s64 = ctx.r11.s64 + -16168;
	// blr 
	return;
loc_8222B668:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// blr 
	return;
loc_8222B6A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15888
	ctx.r3.s64 = ctx.r11.s64 + -15888;
	// blr 
	return;
loc_8222B6B0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15856
	ctx.r3.s64 = ctx.r11.s64 + -15856;
	// blr 
	return;
loc_8222B6BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// blr 
	return;
loc_8222B6C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15784
	ctx.r3.s64 = ctx.r11.s64 + -15784;
	// blr 
	return;
loc_8222B6D4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15748
	ctx.r3.s64 = ctx.r11.s64 + -15748;
	// blr 
	return;
loc_8222B6E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15712
	ctx.r3.s64 = ctx.r11.s64 + -15712;
	// blr 
	return;
loc_8222B6EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15676
	ctx.r3.s64 = ctx.r11.s64 + -15676;
	// blr 
	return;
loc_8222B6F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15640
	ctx.r3.s64 = ctx.r11.s64 + -15640;
	// blr 
	return;
loc_8222B734:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15460
	ctx.r3.s64 = ctx.r11.s64 + -15460;
	// blr 
	return;
loc_8222B758:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15356
	ctx.r3.s64 = ctx.r11.s64 + -15356;
	// blr 
	return;
loc_8222B770:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15280
	ctx.r3.s64 = ctx.r11.s64 + -15280;
	// blr 
	return;
loc_8222B788:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15204
	ctx.r3.s64 = ctx.r11.s64 + -15204;
	// blr 
	return;
loc_8222B794:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15164
	ctx.r3.s64 = ctx.r11.s64 + -15164;
	// blr 
	return;
loc_8222B7A0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15132
	ctx.r3.s64 = ctx.r11.s64 + -15132;
	// blr 
	return;
loc_8222B7AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15092
	ctx.r3.s64 = ctx.r11.s64 + -15092;
	// blr 
	return;
loc_8222B7B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15052
	ctx.r3.s64 = ctx.r11.s64 + -15052;
	// blr 
	return;
loc_8222B7D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14984
	ctx.r3.s64 = ctx.r11.s64 + -14984;
	// blr 
	return;
loc_8222B7E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14916
	ctx.r3.s64 = ctx.r11.s64 + -14916;
	// blr 
	return;
loc_8222B824:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14752
	ctx.r3.s64 = ctx.r11.s64 + -14752;
	// blr 
	return;
loc_8222B830:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14720
	ctx.r3.s64 = ctx.r11.s64 + -14720;
	// blr 
	return;
loc_8222B848:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14652
	ctx.r3.s64 = ctx.r11.s64 + -14652;
	// blr 
	return;
loc_8222B8B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14348
	ctx.r3.s64 = ctx.r11.s64 + -14348;
	// blr 
	return;
loc_8222B8FC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14152
	ctx.r3.s64 = ctx.r11.s64 + -14152;
	// blr 
	return;
loc_8222B908:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14120
	ctx.r3.s64 = ctx.r11.s64 + -14120;
	// blr 
	return;
loc_8222B95C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// blr 
	return;
loc_8222B968:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13864
	ctx.r3.s64 = ctx.r11.s64 + -13864;
	// blr 
	return;
loc_8222B974:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
	// blr 
	return;
loc_8222B980:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13800
	ctx.r3.s64 = ctx.r11.s64 + -13800;
	// blr 
	return;
loc_8222B9E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13516
	ctx.r3.s64 = ctx.r11.s64 + -13516;
	// blr 
	return;
loc_8222B9EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13484
	ctx.r3.s64 = ctx.r11.s64 + -13484;
	// blr 
	return;
loc_8222B9F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13452
	ctx.r3.s64 = ctx.r11.s64 + -13452;
	// blr 
	return;
loc_8222BA04:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// blr 
	return;
loc_8222BA10:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// blr 
	return;
loc_8222BA1C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13336
	ctx.r3.s64 = ctx.r11.s64 + -13336;
	// blr 
	return;
loc_8222BA28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// blr 
	return;
loc_8222BA34:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13268
	ctx.r3.s64 = ctx.r11.s64 + -13268;
	// blr 
	return;
loc_8222BA64:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13128
	ctx.r3.s64 = ctx.r11.s64 + -13128;
	// blr 
	return;
loc_8222BAB8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12880
	ctx.r3.s64 = ctx.r11.s64 + -12880;
	// blr 
	return;
loc_8222BAC4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// blr 
	return;
loc_8222BAF4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12708
	ctx.r3.s64 = ctx.r11.s64 + -12708;
	// blr 
	return;
loc_8222BB3C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12496
	ctx.r3.s64 = ctx.r11.s64 + -12496;
	// blr 
	return;
loc_8222BB54:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// blr 
	return;
loc_8222BB60:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12388
	ctx.r3.s64 = ctx.r11.s64 + -12388;
	// blr 
	return;
loc_8222BB6C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// blr 
	return;
loc_8222BB78:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// blr 
	return;
loc_8222BB84:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12284
	ctx.r3.s64 = ctx.r11.s64 + -12284;
	// blr 
	return;
loc_8222BB90:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12248
	ctx.r3.s64 = ctx.r11.s64 + -12248;
	// blr 
	return;
loc_8222BB9C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12212
	ctx.r3.s64 = ctx.r11.s64 + -12212;
	// blr 
	return;
loc_8222BBA8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// blr 
	return;
loc_8222BBB4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12140
	ctx.r3.s64 = ctx.r11.s64 + -12140;
	// blr 
	return;
loc_8222BBC0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// blr 
	return;
loc_8222BBCC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12068
	ctx.r3.s64 = ctx.r11.s64 + -12068;
	// blr 
	return;
loc_8222BBD8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// blr 
	return;
loc_8222BBE4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11996
	ctx.r3.s64 = ctx.r11.s64 + -11996;
	// blr 
	return;
loc_8222BBF0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// blr 
	return;
loc_8222BBFC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11924
	ctx.r3.s64 = ctx.r11.s64 + -11924;
	// blr 
	return;
loc_8222BC08:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11892
	ctx.r3.s64 = ctx.r11.s64 + -11892;
	// blr 
	return;
loc_8222BC14:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11860
	ctx.r3.s64 = ctx.r11.s64 + -11860;
	// blr 
	return;
loc_8222BC20:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// blr 
	return;
loc_8222BC2C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11788
	ctx.r3.s64 = ctx.r11.s64 + -11788;
	// blr 
	return;
loc_8222BC38:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11752
	ctx.r3.s64 = ctx.r11.s64 + -11752;
	// blr 
	return;
loc_8222BC44:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11716
	ctx.r3.s64 = ctx.r11.s64 + -11716;
	// blr 
	return;
loc_8222BC50:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11680
	ctx.r3.s64 = ctx.r11.s64 + -11680;
	// blr 
	return;
loc_8222BC5C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11644
	ctx.r3.s64 = ctx.r11.s64 + -11644;
	// blr 
	return;
loc_8222BC68:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11608
	ctx.r3.s64 = ctx.r11.s64 + -11608;
	// blr 
	return;
loc_8222BC74:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11572
	ctx.r3.s64 = ctx.r11.s64 + -11572;
	// blr 
	return;
loc_8222BC80:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11540
	ctx.r3.s64 = ctx.r11.s64 + -11540;
	// blr 
	return;
loc_8222BC8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11504
	ctx.r3.s64 = ctx.r11.s64 + -11504;
	// blr 
	return;
loc_8222BC98:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11468
	ctx.r3.s64 = ctx.r11.s64 + -11468;
	// blr 
	return;
loc_8222BCA4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11432
	ctx.r3.s64 = ctx.r11.s64 + -11432;
	// blr 
	return;
loc_8222BCB0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11396
	ctx.r3.s64 = ctx.r11.s64 + -11396;
	// blr 
	return;
loc_8222BCBC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// blr 
	return;
loc_8222BCD4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11288
	ctx.r3.s64 = ctx.r11.s64 + -11288;
	// blr 
	return;
loc_8222BCE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// blr 
	return;
loc_8222BCEC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11224
	ctx.r3.s64 = ctx.r11.s64 + -11224;
	// blr 
	return;
loc_8222BCF8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11196
	ctx.r3.s64 = ctx.r11.s64 + -11196;
	// blr 
	return;
loc_8222BD04:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11160
	ctx.r3.s64 = ctx.r11.s64 + -11160;
	// blr 
	return;
loc_8222BD10:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// blr 
	return;
loc_8222BD1C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11092
	ctx.r3.s64 = ctx.r11.s64 + -11092;
	// blr 
	return;
loc_8222BD28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11056
	ctx.r3.s64 = ctx.r11.s64 + -11056;
	// blr 
	return;
loc_8222BD34:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11020
	ctx.r3.s64 = ctx.r11.s64 + -11020;
	// blr 
	return;
loc_8222BD40:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10984
	ctx.r3.s64 = ctx.r11.s64 + -10984;
	// blr 
	return;
loc_8222BD4C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10948
	ctx.r3.s64 = ctx.r11.s64 + -10948;
	// blr 
	return;
loc_8222BD64:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10876
	ctx.r3.s64 = ctx.r11.s64 + -10876;
	// blr 
	return;
loc_8222BD70:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10840
	ctx.r3.s64 = ctx.r11.s64 + -10840;
	// blr 
	return;
loc_8222BD7C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// blr 
	return;
loc_8222BD88:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// blr 
	return;
loc_8222BD94:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10732
	ctx.r3.s64 = ctx.r11.s64 + -10732;
	// blr 
	return;
loc_8222BDA0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10696
	ctx.r3.s64 = ctx.r11.s64 + -10696;
	// blr 
	return;
loc_8222BDAC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10660
	ctx.r3.s64 = ctx.r11.s64 + -10660;
	// blr 
	return;
loc_8222BDB8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// blr 
	return;
loc_8222BDC4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10588
	ctx.r3.s64 = ctx.r11.s64 + -10588;
	// blr 
	return;
loc_8222BDD0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10552
	ctx.r3.s64 = ctx.r11.s64 + -10552;
	// blr 
	return;
loc_8222BDDC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// blr 
	return;
loc_8222BDE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10484
	ctx.r3.s64 = ctx.r11.s64 + -10484;
	// blr 
	return;
loc_8222BDF4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10452
	ctx.r3.s64 = ctx.r11.s64 + -10452;
	// blr 
	return;
loc_8222BE00:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// blr 
	return;
loc_8222BE18:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10348
	ctx.r3.s64 = ctx.r11.s64 + -10348;
	// blr 
	return;
loc_8222BE24:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10312
	ctx.r3.s64 = ctx.r11.s64 + -10312;
	// blr 
	return;
loc_8222BE3C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10236
	ctx.r3.s64 = ctx.r11.s64 + -10236;
	// blr 
	return;
loc_8222BE48:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10200
	ctx.r3.s64 = ctx.r11.s64 + -10200;
	// blr 
	return;
loc_8222BE60:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10124
	ctx.r3.s64 = ctx.r11.s64 + -10124;
	// blr 
	return;
loc_8222BE84:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10008
	ctx.r3.s64 = ctx.r11.s64 + -10008;
	// blr 
	return;
loc_8222BE90:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9972
	ctx.r3.s64 = ctx.r11.s64 + -9972;
	// blr 
	return;
loc_8222BE9C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9936
	ctx.r3.s64 = ctx.r11.s64 + -9936;
	// blr 
	return;
loc_8222BEA8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9900
	ctx.r3.s64 = ctx.r11.s64 + -9900;
	// blr 
	return;
loc_8222BEB4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// blr 
	return;
loc_8222BEC0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9832
	ctx.r3.s64 = ctx.r11.s64 + -9832;
	// blr 
	return;
loc_8222BECC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9796
	ctx.r3.s64 = ctx.r11.s64 + -9796;
	// blr 
	return;
loc_8222BED8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// blr 
	return;
loc_8222BEE4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9724
	ctx.r3.s64 = ctx.r11.s64 + -9724;
	// blr 
	return;
loc_8222BEF0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9692
	ctx.r3.s64 = ctx.r11.s64 + -9692;
	// blr 
	return;
loc_8222BEFC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9660
	ctx.r3.s64 = ctx.r11.s64 + -9660;
	// blr 
	return;
loc_8222BF08:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// blr 
	return;
loc_8222BF14:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9588
	ctx.r3.s64 = ctx.r11.s64 + -9588;
	// blr 
	return;
loc_8222BF20:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// blr 
	return;
loc_8222BF2C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9516
	ctx.r3.s64 = ctx.r11.s64 + -9516;
	// blr 
	return;
loc_8222BF38:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// blr 
	return;
loc_8222BF44:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9444
	ctx.r3.s64 = ctx.r11.s64 + -9444;
	// blr 
	return;
loc_8222BF50:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9404
	ctx.r3.s64 = ctx.r11.s64 + -9404;
	// blr 
	return;
loc_8222BF5C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9368
	ctx.r3.s64 = ctx.r11.s64 + -9368;
	// blr 
	return;
loc_8222BF68:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9332
	ctx.r3.s64 = ctx.r11.s64 + -9332;
	// blr 
	return;
loc_8222BF74:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9296
	ctx.r3.s64 = ctx.r11.s64 + -9296;
	// blr 
	return;
loc_8222BF80:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9268
	ctx.r3.s64 = ctx.r11.s64 + -9268;
	// blr 
	return;
loc_8222BF8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9228
	ctx.r3.s64 = ctx.r11.s64 + -9228;
	// blr 
	return;
loc_8222BF98:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9192
	ctx.r3.s64 = ctx.r11.s64 + -9192;
	// blr 
	return;
loc_8222BFA4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9156
	ctx.r3.s64 = ctx.r11.s64 + -9156;
	// blr 
	return;
loc_8222BFB0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9116
	ctx.r3.s64 = ctx.r11.s64 + -9116;
	// blr 
	return;
loc_8222BFBC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9080
	ctx.r3.s64 = ctx.r11.s64 + -9080;
	// blr 
	return;
loc_8222BFC8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9044
	ctx.r3.s64 = ctx.r11.s64 + -9044;
	// blr 
	return;
loc_8222BFD4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-9004
	ctx.r3.s64 = ctx.r11.s64 + -9004;
	// blr 
	return;
loc_8222BFE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// blr 
	return;
loc_8222BFEC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-8932
	ctx.r3.s64 = ctx.r11.s64 + -8932;
	// blr 
	return;
loc_8222BFF8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-8900
	ctx.r3.s64 = ctx.r11.s64 + -8900;
	// blr 
	return;
loc_8222C004:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A084"))) PPC_WEAK_FUNC(sub_8222A084);
PPC_FUNC_IMPL(__imp__sub_8222A084) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31748
	ctx.r3.s64 = ctx.r11.s64 + -31748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A1D4"))) PPC_WEAK_FUNC(sub_8222A1D4);
PPC_FUNC_IMPL(__imp__sub_8222A1D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A270"))) PPC_WEAK_FUNC(sub_8222A270);
PPC_FUNC_IMPL(__imp__sub_8222A270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30356
	ctx.r3.s64 = ctx.r11.s64 + -30356;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A27C"))) PPC_WEAK_FUNC(sub_8222A27C);
PPC_FUNC_IMPL(__imp__sub_8222A27C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30324
	ctx.r3.s64 = ctx.r11.s64 + -30324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A288"))) PPC_WEAK_FUNC(sub_8222A288);
PPC_FUNC_IMPL(__imp__sub_8222A288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30292
	ctx.r3.s64 = ctx.r11.s64 + -30292;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A294"))) PPC_WEAK_FUNC(sub_8222A294);
PPC_FUNC_IMPL(__imp__sub_8222A294) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30260
	ctx.r3.s64 = ctx.r11.s64 + -30260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A2A0"))) PPC_WEAK_FUNC(sub_8222A2A0);
PPC_FUNC_IMPL(__imp__sub_8222A2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30228
	ctx.r3.s64 = ctx.r11.s64 + -30228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A2B8"))) PPC_WEAK_FUNC(sub_8222A2B8);
PPC_FUNC_IMPL(__imp__sub_8222A2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A2D0"))) PPC_WEAK_FUNC(sub_8222A2D0);
PPC_FUNC_IMPL(__imp__sub_8222A2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30092
	ctx.r3.s64 = ctx.r11.s64 + -30092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A2E8"))) PPC_WEAK_FUNC(sub_8222A2E8);
PPC_FUNC_IMPL(__imp__sub_8222A2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A2F4"))) PPC_WEAK_FUNC(sub_8222A2F4);
PPC_FUNC_IMPL(__imp__sub_8222A2F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-30000
	ctx.r3.s64 = ctx.r11.s64 + -30000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A30C"))) PPC_WEAK_FUNC(sub_8222A30C);
PPC_FUNC_IMPL(__imp__sub_8222A30C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29940
	ctx.r3.s64 = ctx.r11.s64 + -29940;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A318"))) PPC_WEAK_FUNC(sub_8222A318);
PPC_FUNC_IMPL(__imp__sub_8222A318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A33C"))) PPC_WEAK_FUNC(sub_8222A33C);
PPC_FUNC_IMPL(__imp__sub_8222A33C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29808
	ctx.r3.s64 = ctx.r11.s64 + -29808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A3C0"))) PPC_WEAK_FUNC(sub_8222A3C0);
PPC_FUNC_IMPL(__imp__sub_8222A3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29420
	ctx.r3.s64 = ctx.r11.s64 + -29420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A3D8"))) PPC_WEAK_FUNC(sub_8222A3D8);
PPC_FUNC_IMPL(__imp__sub_8222A3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29356
	ctx.r3.s64 = ctx.r11.s64 + -29356;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A3E4"))) PPC_WEAK_FUNC(sub_8222A3E4);
PPC_FUNC_IMPL(__imp__sub_8222A3E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29324
	ctx.r3.s64 = ctx.r11.s64 + -29324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A3F0"))) PPC_WEAK_FUNC(sub_8222A3F0);
PPC_FUNC_IMPL(__imp__sub_8222A3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29292
	ctx.r3.s64 = ctx.r11.s64 + -29292;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A3FC"))) PPC_WEAK_FUNC(sub_8222A3FC);
PPC_FUNC_IMPL(__imp__sub_8222A3FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29260
	ctx.r3.s64 = ctx.r11.s64 + -29260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A408"))) PPC_WEAK_FUNC(sub_8222A408);
PPC_FUNC_IMPL(__imp__sub_8222A408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29228
	ctx.r3.s64 = ctx.r11.s64 + -29228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A414"))) PPC_WEAK_FUNC(sub_8222A414);
PPC_FUNC_IMPL(__imp__sub_8222A414) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29196
	ctx.r3.s64 = ctx.r11.s64 + -29196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A420"))) PPC_WEAK_FUNC(sub_8222A420);
PPC_FUNC_IMPL(__imp__sub_8222A420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29164
	ctx.r3.s64 = ctx.r11.s64 + -29164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A438"))) PPC_WEAK_FUNC(sub_8222A438);
PPC_FUNC_IMPL(__imp__sub_8222A438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A444"))) PPC_WEAK_FUNC(sub_8222A444);
PPC_FUNC_IMPL(__imp__sub_8222A444) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29072
	ctx.r3.s64 = ctx.r11.s64 + -29072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A450"))) PPC_WEAK_FUNC(sub_8222A450);
PPC_FUNC_IMPL(__imp__sub_8222A450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29036
	ctx.r3.s64 = ctx.r11.s64 + -29036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A45C"))) PPC_WEAK_FUNC(sub_8222A45C);
PPC_FUNC_IMPL(__imp__sub_8222A45C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-29004
	ctx.r3.s64 = ctx.r11.s64 + -29004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A468"))) PPC_WEAK_FUNC(sub_8222A468);
PPC_FUNC_IMPL(__imp__sub_8222A468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28972
	ctx.r3.s64 = ctx.r11.s64 + -28972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A474"))) PPC_WEAK_FUNC(sub_8222A474);
PPC_FUNC_IMPL(__imp__sub_8222A474) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28936
	ctx.r3.s64 = ctx.r11.s64 + -28936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A480"))) PPC_WEAK_FUNC(sub_8222A480);
PPC_FUNC_IMPL(__imp__sub_8222A480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28904
	ctx.r3.s64 = ctx.r11.s64 + -28904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A48C"))) PPC_WEAK_FUNC(sub_8222A48C);
PPC_FUNC_IMPL(__imp__sub_8222A48C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28872
	ctx.r3.s64 = ctx.r11.s64 + -28872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A4A4"))) PPC_WEAK_FUNC(sub_8222A4A4);
PPC_FUNC_IMPL(__imp__sub_8222A4A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28812
	ctx.r3.s64 = ctx.r11.s64 + -28812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A4B0"))) PPC_WEAK_FUNC(sub_8222A4B0);
PPC_FUNC_IMPL(__imp__sub_8222A4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28776
	ctx.r3.s64 = ctx.r11.s64 + -28776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A4D4"))) PPC_WEAK_FUNC(sub_8222A4D4);
PPC_FUNC_IMPL(__imp__sub_8222A4D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28676
	ctx.r3.s64 = ctx.r11.s64 + -28676;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A540"))) PPC_WEAK_FUNC(sub_8222A540);
PPC_FUNC_IMPL(__imp__sub_8222A540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28376
	ctx.r3.s64 = ctx.r11.s64 + -28376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A54C"))) PPC_WEAK_FUNC(sub_8222A54C);
PPC_FUNC_IMPL(__imp__sub_8222A54C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28344
	ctx.r3.s64 = ctx.r11.s64 + -28344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A558"))) PPC_WEAK_FUNC(sub_8222A558);
PPC_FUNC_IMPL(__imp__sub_8222A558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28312
	ctx.r3.s64 = ctx.r11.s64 + -28312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A564"))) PPC_WEAK_FUNC(sub_8222A564);
PPC_FUNC_IMPL(__imp__sub_8222A564) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28280
	ctx.r3.s64 = ctx.r11.s64 + -28280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A570"))) PPC_WEAK_FUNC(sub_8222A570);
PPC_FUNC_IMPL(__imp__sub_8222A570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28248
	ctx.r3.s64 = ctx.r11.s64 + -28248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A57C"))) PPC_WEAK_FUNC(sub_8222A57C);
PPC_FUNC_IMPL(__imp__sub_8222A57C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28216
	ctx.r3.s64 = ctx.r11.s64 + -28216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A588"))) PPC_WEAK_FUNC(sub_8222A588);
PPC_FUNC_IMPL(__imp__sub_8222A588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28184
	ctx.r3.s64 = ctx.r11.s64 + -28184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A5A0"))) PPC_WEAK_FUNC(sub_8222A5A0);
PPC_FUNC_IMPL(__imp__sub_8222A5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28124
	ctx.r3.s64 = ctx.r11.s64 + -28124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A5C4"))) PPC_WEAK_FUNC(sub_8222A5C4);
PPC_FUNC_IMPL(__imp__sub_8222A5C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-28036
	ctx.r3.s64 = ctx.r11.s64 + -28036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A630"))) PPC_WEAK_FUNC(sub_8222A630);
PPC_FUNC_IMPL(__imp__sub_8222A630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27764
	ctx.r3.s64 = ctx.r11.s64 + -27764;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A648"))) PPC_WEAK_FUNC(sub_8222A648);
PPC_FUNC_IMPL(__imp__sub_8222A648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27704
	ctx.r3.s64 = ctx.r11.s64 + -27704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A660"))) PPC_WEAK_FUNC(sub_8222A660);
PPC_FUNC_IMPL(__imp__sub_8222A660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27644
	ctx.r3.s64 = ctx.r11.s64 + -27644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A678"))) PPC_WEAK_FUNC(sub_8222A678);
PPC_FUNC_IMPL(__imp__sub_8222A678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A690"))) PPC_WEAK_FUNC(sub_8222A690);
PPC_FUNC_IMPL(__imp__sub_8222A690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27524
	ctx.r3.s64 = ctx.r11.s64 + -27524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A6A8"))) PPC_WEAK_FUNC(sub_8222A6A8);
PPC_FUNC_IMPL(__imp__sub_8222A6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A6C0"))) PPC_WEAK_FUNC(sub_8222A6C0);
PPC_FUNC_IMPL(__imp__sub_8222A6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27404
	ctx.r3.s64 = ctx.r11.s64 + -27404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A6D8"))) PPC_WEAK_FUNC(sub_8222A6D8);
PPC_FUNC_IMPL(__imp__sub_8222A6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A6FC"))) PPC_WEAK_FUNC(sub_8222A6FC);
PPC_FUNC_IMPL(__imp__sub_8222A6FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27256
	ctx.r3.s64 = ctx.r11.s64 + -27256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A720"))) PPC_WEAK_FUNC(sub_8222A720);
PPC_FUNC_IMPL(__imp__sub_8222A720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27168
	ctx.r3.s64 = ctx.r11.s64 + -27168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A75C"))) PPC_WEAK_FUNC(sub_8222A75C);
PPC_FUNC_IMPL(__imp__sub_8222A75C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27016
	ctx.r3.s64 = ctx.r11.s64 + -27016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A780"))) PPC_WEAK_FUNC(sub_8222A780);
PPC_FUNC_IMPL(__imp__sub_8222A780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26896
	ctx.r3.s64 = ctx.r11.s64 + -26896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A78C"))) PPC_WEAK_FUNC(sub_8222A78C);
PPC_FUNC_IMPL(__imp__sub_8222A78C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7BC"))) PPC_WEAK_FUNC(sub_8222A7BC);
PPC_FUNC_IMPL(__imp__sub_8222A7BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26720
	ctx.r3.s64 = ctx.r11.s64 + -26720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7D4"))) PPC_WEAK_FUNC(sub_8222A7D4);
PPC_FUNC_IMPL(__imp__sub_8222A7D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26660
	ctx.r3.s64 = ctx.r11.s64 + -26660;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7F8"))) PPC_WEAK_FUNC(sub_8222A7F8);
PPC_FUNC_IMPL(__imp__sub_8222A7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26568
	ctx.r3.s64 = ctx.r11.s64 + -26568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A810"))) PPC_WEAK_FUNC(sub_8222A810);
PPC_FUNC_IMPL(__imp__sub_8222A810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26508
	ctx.r3.s64 = ctx.r11.s64 + -26508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A81C"))) PPC_WEAK_FUNC(sub_8222A81C);
PPC_FUNC_IMPL(__imp__sub_8222A81C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26476
	ctx.r3.s64 = ctx.r11.s64 + -26476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A828"))) PPC_WEAK_FUNC(sub_8222A828);
PPC_FUNC_IMPL(__imp__sub_8222A828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26444
	ctx.r3.s64 = ctx.r11.s64 + -26444;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A834"))) PPC_WEAK_FUNC(sub_8222A834);
PPC_FUNC_IMPL(__imp__sub_8222A834) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26404
	ctx.r3.s64 = ctx.r11.s64 + -26404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A84C"))) PPC_WEAK_FUNC(sub_8222A84C);
PPC_FUNC_IMPL(__imp__sub_8222A84C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26344
	ctx.r3.s64 = ctx.r11.s64 + -26344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A858"))) PPC_WEAK_FUNC(sub_8222A858);
PPC_FUNC_IMPL(__imp__sub_8222A858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26308
	ctx.r3.s64 = ctx.r11.s64 + -26308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A870"))) PPC_WEAK_FUNC(sub_8222A870);
PPC_FUNC_IMPL(__imp__sub_8222A870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26248
	ctx.r3.s64 = ctx.r11.s64 + -26248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A888"))) PPC_WEAK_FUNC(sub_8222A888);
PPC_FUNC_IMPL(__imp__sub_8222A888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26188
	ctx.r3.s64 = ctx.r11.s64 + -26188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A894"))) PPC_WEAK_FUNC(sub_8222A894);
PPC_FUNC_IMPL(__imp__sub_8222A894) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26156
	ctx.r3.s64 = ctx.r11.s64 + -26156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A8C4"))) PPC_WEAK_FUNC(sub_8222A8C4);
PPC_FUNC_IMPL(__imp__sub_8222A8C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-26032
	ctx.r3.s64 = ctx.r11.s64 + -26032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A8DC"))) PPC_WEAK_FUNC(sub_8222A8DC);
PPC_FUNC_IMPL(__imp__sub_8222A8DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25972
	ctx.r3.s64 = ctx.r11.s64 + -25972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A900"))) PPC_WEAK_FUNC(sub_8222A900);
PPC_FUNC_IMPL(__imp__sub_8222A900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25880
	ctx.r3.s64 = ctx.r11.s64 + -25880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A918"))) PPC_WEAK_FUNC(sub_8222A918);
PPC_FUNC_IMPL(__imp__sub_8222A918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25820
	ctx.r3.s64 = ctx.r11.s64 + -25820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A924"))) PPC_WEAK_FUNC(sub_8222A924);
PPC_FUNC_IMPL(__imp__sub_8222A924) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25788
	ctx.r3.s64 = ctx.r11.s64 + -25788;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A930"))) PPC_WEAK_FUNC(sub_8222A930);
PPC_FUNC_IMPL(__imp__sub_8222A930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25756
	ctx.r3.s64 = ctx.r11.s64 + -25756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A948"))) PPC_WEAK_FUNC(sub_8222A948);
PPC_FUNC_IMPL(__imp__sub_8222A948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25696
	ctx.r3.s64 = ctx.r11.s64 + -25696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AAA4"))) PPC_WEAK_FUNC(sub_8222AAA4);
PPC_FUNC_IMPL(__imp__sub_8222AAA4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24656
	ctx.r3.s64 = ctx.r11.s64 + -24656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AABC"))) PPC_WEAK_FUNC(sub_8222AABC);
PPC_FUNC_IMPL(__imp__sub_8222AABC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-24584
	ctx.r3.s64 = ctx.r11.s64 + -24584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AC90"))) PPC_WEAK_FUNC(sub_8222AC90);
PPC_FUNC_IMPL(__imp__sub_8222AC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23296
	ctx.r3.s64 = ctx.r11.s64 + -23296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ACA8"))) PPC_WEAK_FUNC(sub_8222ACA8);
PPC_FUNC_IMPL(__imp__sub_8222ACA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23220
	ctx.r3.s64 = ctx.r11.s64 + -23220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ACC0"))) PPC_WEAK_FUNC(sub_8222ACC0);
PPC_FUNC_IMPL(__imp__sub_8222ACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23148
	ctx.r3.s64 = ctx.r11.s64 + -23148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ACD8"))) PPC_WEAK_FUNC(sub_8222ACD8);
PPC_FUNC_IMPL(__imp__sub_8222ACD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AE4C"))) PPC_WEAK_FUNC(sub_8222AE4C);
PPC_FUNC_IMPL(__imp__sub_8222AE4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AEE8"))) PPC_WEAK_FUNC(sub_8222AEE8);
PPC_FUNC_IMPL(__imp__sub_8222AEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-21604
	ctx.r3.s64 = ctx.r11.s64 + -21604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B05C"))) PPC_WEAK_FUNC(sub_8222B05C);
PPC_FUNC_IMPL(__imp__sub_8222B05C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20560
	ctx.r3.s64 = ctx.r11.s64 + -20560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B074"))) PPC_WEAK_FUNC(sub_8222B074);
PPC_FUNC_IMPL(__imp__sub_8222B074) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20488
	ctx.r3.s64 = ctx.r11.s64 + -20488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B110"))) PPC_WEAK_FUNC(sub_8222B110);
PPC_FUNC_IMPL(__imp__sub_8222B110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-20028
	ctx.r3.s64 = ctx.r11.s64 + -20028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B128"))) PPC_WEAK_FUNC(sub_8222B128);
PPC_FUNC_IMPL(__imp__sub_8222B128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19956
	ctx.r3.s64 = ctx.r11.s64 + -19956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B134"))) PPC_WEAK_FUNC(sub_8222B134);
PPC_FUNC_IMPL(__imp__sub_8222B134) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B14C"))) PPC_WEAK_FUNC(sub_8222B14C);
PPC_FUNC_IMPL(__imp__sub_8222B14C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19852
	ctx.r3.s64 = ctx.r11.s64 + -19852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B164"))) PPC_WEAK_FUNC(sub_8222B164);
PPC_FUNC_IMPL(__imp__sub_8222B164) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19780
	ctx.r3.s64 = ctx.r11.s64 + -19780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B17C"))) PPC_WEAK_FUNC(sub_8222B17C);
PPC_FUNC_IMPL(__imp__sub_8222B17C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19708
	ctx.r3.s64 = ctx.r11.s64 + -19708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B188"))) PPC_WEAK_FUNC(sub_8222B188);
PPC_FUNC_IMPL(__imp__sub_8222B188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19672
	ctx.r3.s64 = ctx.r11.s64 + -19672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B1A0"))) PPC_WEAK_FUNC(sub_8222B1A0);
PPC_FUNC_IMPL(__imp__sub_8222B1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B26C"))) PPC_WEAK_FUNC(sub_8222B26C);
PPC_FUNC_IMPL(__imp__sub_8222B26C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-19000
	ctx.r3.s64 = ctx.r11.s64 + -19000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B278"))) PPC_WEAK_FUNC(sub_8222B278);
PPC_FUNC_IMPL(__imp__sub_8222B278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18964
	ctx.r3.s64 = ctx.r11.s64 + -18964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B284"))) PPC_WEAK_FUNC(sub_8222B284);
PPC_FUNC_IMPL(__imp__sub_8222B284) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18928
	ctx.r3.s64 = ctx.r11.s64 + -18928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B290"))) PPC_WEAK_FUNC(sub_8222B290);
PPC_FUNC_IMPL(__imp__sub_8222B290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18892
	ctx.r3.s64 = ctx.r11.s64 + -18892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B29C"))) PPC_WEAK_FUNC(sub_8222B29C);
PPC_FUNC_IMPL(__imp__sub_8222B29C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18856
	ctx.r3.s64 = ctx.r11.s64 + -18856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B38C"))) PPC_WEAK_FUNC(sub_8222B38C);
PPC_FUNC_IMPL(__imp__sub_8222B38C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18160
	ctx.r3.s64 = ctx.r11.s64 + -18160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B398"))) PPC_WEAK_FUNC(sub_8222B398);
PPC_FUNC_IMPL(__imp__sub_8222B398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18124
	ctx.r3.s64 = ctx.r11.s64 + -18124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B3B0"))) PPC_WEAK_FUNC(sub_8222B3B0);
PPC_FUNC_IMPL(__imp__sub_8222B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18056
	ctx.r3.s64 = ctx.r11.s64 + -18056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B3BC"))) PPC_WEAK_FUNC(sub_8222B3BC);
PPC_FUNC_IMPL(__imp__sub_8222B3BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-18020
	ctx.r3.s64 = ctx.r11.s64 + -18020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B3C8"))) PPC_WEAK_FUNC(sub_8222B3C8);
PPC_FUNC_IMPL(__imp__sub_8222B3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B3EC"))) PPC_WEAK_FUNC(sub_8222B3EC);
PPC_FUNC_IMPL(__imp__sub_8222B3EC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17880
	ctx.r3.s64 = ctx.r11.s64 + -17880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B404"))) PPC_WEAK_FUNC(sub_8222B404);
PPC_FUNC_IMPL(__imp__sub_8222B404) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17808
	ctx.r3.s64 = ctx.r11.s64 + -17808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B500"))) PPC_WEAK_FUNC(sub_8222B500);
PPC_FUNC_IMPL(__imp__sub_8222B500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17100
	ctx.r3.s64 = ctx.r11.s64 + -17100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B50C"))) PPC_WEAK_FUNC(sub_8222B50C);
PPC_FUNC_IMPL(__imp__sub_8222B50C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17064
	ctx.r3.s64 = ctx.r11.s64 + -17064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B518"))) PPC_WEAK_FUNC(sub_8222B518);
PPC_FUNC_IMPL(__imp__sub_8222B518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-17028
	ctx.r3.s64 = ctx.r11.s64 + -17028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B524"))) PPC_WEAK_FUNC(sub_8222B524);
PPC_FUNC_IMPL(__imp__sub_8222B524) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B530"))) PPC_WEAK_FUNC(sub_8222B530);
PPC_FUNC_IMPL(__imp__sub_8222B530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16956
	ctx.r3.s64 = ctx.r11.s64 + -16956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B53C"))) PPC_WEAK_FUNC(sub_8222B53C);
PPC_FUNC_IMPL(__imp__sub_8222B53C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16920
	ctx.r3.s64 = ctx.r11.s64 + -16920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B548"))) PPC_WEAK_FUNC(sub_8222B548);
PPC_FUNC_IMPL(__imp__sub_8222B548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16884
	ctx.r3.s64 = ctx.r11.s64 + -16884;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B554"))) PPC_WEAK_FUNC(sub_8222B554);
PPC_FUNC_IMPL(__imp__sub_8222B554) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16848
	ctx.r3.s64 = ctx.r11.s64 + -16848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B620"))) PPC_WEAK_FUNC(sub_8222B620);
PPC_FUNC_IMPL(__imp__sub_8222B620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16276
	ctx.r3.s64 = ctx.r11.s64 + -16276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B62C"))) PPC_WEAK_FUNC(sub_8222B62C);
PPC_FUNC_IMPL(__imp__sub_8222B62C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16240
	ctx.r3.s64 = ctx.r11.s64 + -16240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B638"))) PPC_WEAK_FUNC(sub_8222B638);
PPC_FUNC_IMPL(__imp__sub_8222B638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16204
	ctx.r3.s64 = ctx.r11.s64 + -16204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B650"))) PPC_WEAK_FUNC(sub_8222B650);
PPC_FUNC_IMPL(__imp__sub_8222B650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B65C"))) PPC_WEAK_FUNC(sub_8222B65C);
PPC_FUNC_IMPL(__imp__sub_8222B65C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16100
	ctx.r3.s64 = ctx.r11.s64 + -16100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B674"))) PPC_WEAK_FUNC(sub_8222B674);
PPC_FUNC_IMPL(__imp__sub_8222B674) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B680"))) PPC_WEAK_FUNC(sub_8222B680);
PPC_FUNC_IMPL(__imp__sub_8222B680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15996
	ctx.r3.s64 = ctx.r11.s64 + -15996;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B68C"))) PPC_WEAK_FUNC(sub_8222B68C);
PPC_FUNC_IMPL(__imp__sub_8222B68C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B698"))) PPC_WEAK_FUNC(sub_8222B698);
PPC_FUNC_IMPL(__imp__sub_8222B698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15924
	ctx.r3.s64 = ctx.r11.s64 + -15924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B704"))) PPC_WEAK_FUNC(sub_8222B704);
PPC_FUNC_IMPL(__imp__sub_8222B704) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15604
	ctx.r3.s64 = ctx.r11.s64 + -15604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B710"))) PPC_WEAK_FUNC(sub_8222B710);
PPC_FUNC_IMPL(__imp__sub_8222B710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15568
	ctx.r3.s64 = ctx.r11.s64 + -15568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B71C"))) PPC_WEAK_FUNC(sub_8222B71C);
PPC_FUNC_IMPL(__imp__sub_8222B71C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15532
	ctx.r3.s64 = ctx.r11.s64 + -15532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B728"))) PPC_WEAK_FUNC(sub_8222B728);
PPC_FUNC_IMPL(__imp__sub_8222B728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15496
	ctx.r3.s64 = ctx.r11.s64 + -15496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B740"))) PPC_WEAK_FUNC(sub_8222B740);
PPC_FUNC_IMPL(__imp__sub_8222B740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15428
	ctx.r3.s64 = ctx.r11.s64 + -15428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B74C"))) PPC_WEAK_FUNC(sub_8222B74C);
PPC_FUNC_IMPL(__imp__sub_8222B74C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15392
	ctx.r3.s64 = ctx.r11.s64 + -15392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B764"))) PPC_WEAK_FUNC(sub_8222B764);
PPC_FUNC_IMPL(__imp__sub_8222B764) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15316
	ctx.r3.s64 = ctx.r11.s64 + -15316;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B77C"))) PPC_WEAK_FUNC(sub_8222B77C);
PPC_FUNC_IMPL(__imp__sub_8222B77C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15240
	ctx.r3.s64 = ctx.r11.s64 + -15240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B7C4"))) PPC_WEAK_FUNC(sub_8222B7C4);
PPC_FUNC_IMPL(__imp__sub_8222B7C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-15016
	ctx.r3.s64 = ctx.r11.s64 + -15016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B7DC"))) PPC_WEAK_FUNC(sub_8222B7DC);
PPC_FUNC_IMPL(__imp__sub_8222B7DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14948
	ctx.r3.s64 = ctx.r11.s64 + -14948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B7F4"))) PPC_WEAK_FUNC(sub_8222B7F4);
PPC_FUNC_IMPL(__imp__sub_8222B7F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14880
	ctx.r3.s64 = ctx.r11.s64 + -14880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B800"))) PPC_WEAK_FUNC(sub_8222B800);
PPC_FUNC_IMPL(__imp__sub_8222B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14848
	ctx.r3.s64 = ctx.r11.s64 + -14848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B80C"))) PPC_WEAK_FUNC(sub_8222B80C);
PPC_FUNC_IMPL(__imp__sub_8222B80C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14816
	ctx.r3.s64 = ctx.r11.s64 + -14816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B818"))) PPC_WEAK_FUNC(sub_8222B818);
PPC_FUNC_IMPL(__imp__sub_8222B818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B83C"))) PPC_WEAK_FUNC(sub_8222B83C);
PPC_FUNC_IMPL(__imp__sub_8222B83C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14688
	ctx.r3.s64 = ctx.r11.s64 + -14688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B854"))) PPC_WEAK_FUNC(sub_8222B854);
PPC_FUNC_IMPL(__imp__sub_8222B854) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14612
	ctx.r3.s64 = ctx.r11.s64 + -14612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B860"))) PPC_WEAK_FUNC(sub_8222B860);
PPC_FUNC_IMPL(__imp__sub_8222B860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14576
	ctx.r3.s64 = ctx.r11.s64 + -14576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B86C"))) PPC_WEAK_FUNC(sub_8222B86C);
PPC_FUNC_IMPL(__imp__sub_8222B86C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14540
	ctx.r3.s64 = ctx.r11.s64 + -14540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B878"))) PPC_WEAK_FUNC(sub_8222B878);
PPC_FUNC_IMPL(__imp__sub_8222B878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14508
	ctx.r3.s64 = ctx.r11.s64 + -14508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B884"))) PPC_WEAK_FUNC(sub_8222B884);
PPC_FUNC_IMPL(__imp__sub_8222B884) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14476
	ctx.r3.s64 = ctx.r11.s64 + -14476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B890"))) PPC_WEAK_FUNC(sub_8222B890);
PPC_FUNC_IMPL(__imp__sub_8222B890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14444
	ctx.r3.s64 = ctx.r11.s64 + -14444;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B89C"))) PPC_WEAK_FUNC(sub_8222B89C);
PPC_FUNC_IMPL(__imp__sub_8222B89C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14412
	ctx.r3.s64 = ctx.r11.s64 + -14412;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B8A8"))) PPC_WEAK_FUNC(sub_8222B8A8);
PPC_FUNC_IMPL(__imp__sub_8222B8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14380
	ctx.r3.s64 = ctx.r11.s64 + -14380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B8C0"))) PPC_WEAK_FUNC(sub_8222B8C0);
PPC_FUNC_IMPL(__imp__sub_8222B8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14316
	ctx.r3.s64 = ctx.r11.s64 + -14316;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B8CC"))) PPC_WEAK_FUNC(sub_8222B8CC);
PPC_FUNC_IMPL(__imp__sub_8222B8CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14284
	ctx.r3.s64 = ctx.r11.s64 + -14284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B8D8"))) PPC_WEAK_FUNC(sub_8222B8D8);
PPC_FUNC_IMPL(__imp__sub_8222B8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14248
	ctx.r3.s64 = ctx.r11.s64 + -14248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B8E4"))) PPC_WEAK_FUNC(sub_8222B8E4);
PPC_FUNC_IMPL(__imp__sub_8222B8E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14216
	ctx.r3.s64 = ctx.r11.s64 + -14216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B8F0"))) PPC_WEAK_FUNC(sub_8222B8F0);
PPC_FUNC_IMPL(__imp__sub_8222B8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14184
	ctx.r3.s64 = ctx.r11.s64 + -14184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B914"))) PPC_WEAK_FUNC(sub_8222B914);
PPC_FUNC_IMPL(__imp__sub_8222B914) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14088
	ctx.r3.s64 = ctx.r11.s64 + -14088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B920"))) PPC_WEAK_FUNC(sub_8222B920);
PPC_FUNC_IMPL(__imp__sub_8222B920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14056
	ctx.r3.s64 = ctx.r11.s64 + -14056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B92C"))) PPC_WEAK_FUNC(sub_8222B92C);
PPC_FUNC_IMPL(__imp__sub_8222B92C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-14024
	ctx.r3.s64 = ctx.r11.s64 + -14024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B938"))) PPC_WEAK_FUNC(sub_8222B938);
PPC_FUNC_IMPL(__imp__sub_8222B938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13992
	ctx.r3.s64 = ctx.r11.s64 + -13992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B944"))) PPC_WEAK_FUNC(sub_8222B944);
PPC_FUNC_IMPL(__imp__sub_8222B944) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13960
	ctx.r3.s64 = ctx.r11.s64 + -13960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B950"))) PPC_WEAK_FUNC(sub_8222B950);
PPC_FUNC_IMPL(__imp__sub_8222B950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B98C"))) PPC_WEAK_FUNC(sub_8222B98C);
PPC_FUNC_IMPL(__imp__sub_8222B98C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13768
	ctx.r3.s64 = ctx.r11.s64 + -13768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B998"))) PPC_WEAK_FUNC(sub_8222B998);
PPC_FUNC_IMPL(__imp__sub_8222B998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13732
	ctx.r3.s64 = ctx.r11.s64 + -13732;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B9A4"))) PPC_WEAK_FUNC(sub_8222B9A4);
PPC_FUNC_IMPL(__imp__sub_8222B9A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13696
	ctx.r3.s64 = ctx.r11.s64 + -13696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B9B0"))) PPC_WEAK_FUNC(sub_8222B9B0);
PPC_FUNC_IMPL(__imp__sub_8222B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13660
	ctx.r3.s64 = ctx.r11.s64 + -13660;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B9BC"))) PPC_WEAK_FUNC(sub_8222B9BC);
PPC_FUNC_IMPL(__imp__sub_8222B9BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13624
	ctx.r3.s64 = ctx.r11.s64 + -13624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B9C8"))) PPC_WEAK_FUNC(sub_8222B9C8);
PPC_FUNC_IMPL(__imp__sub_8222B9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13588
	ctx.r3.s64 = ctx.r11.s64 + -13588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B9D4"))) PPC_WEAK_FUNC(sub_8222B9D4);
PPC_FUNC_IMPL(__imp__sub_8222B9D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BA40"))) PPC_WEAK_FUNC(sub_8222BA40);
PPC_FUNC_IMPL(__imp__sub_8222BA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13236
	ctx.r3.s64 = ctx.r11.s64 + -13236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BA4C"))) PPC_WEAK_FUNC(sub_8222BA4C);
PPC_FUNC_IMPL(__imp__sub_8222BA4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BA58"))) PPC_WEAK_FUNC(sub_8222BA58);
PPC_FUNC_IMPL(__imp__sub_8222BA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13164
	ctx.r3.s64 = ctx.r11.s64 + -13164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BA70"))) PPC_WEAK_FUNC(sub_8222BA70);
PPC_FUNC_IMPL(__imp__sub_8222BA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BA7C"))) PPC_WEAK_FUNC(sub_8222BA7C);
PPC_FUNC_IMPL(__imp__sub_8222BA7C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13060
	ctx.r3.s64 = ctx.r11.s64 + -13060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BA88"))) PPC_WEAK_FUNC(sub_8222BA88);
PPC_FUNC_IMPL(__imp__sub_8222BA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-13024
	ctx.r3.s64 = ctx.r11.s64 + -13024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BA94"))) PPC_WEAK_FUNC(sub_8222BA94);
PPC_FUNC_IMPL(__imp__sub_8222BA94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12988
	ctx.r3.s64 = ctx.r11.s64 + -12988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BAA0"))) PPC_WEAK_FUNC(sub_8222BAA0);
PPC_FUNC_IMPL(__imp__sub_8222BAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BAAC"))) PPC_WEAK_FUNC(sub_8222BAAC);
PPC_FUNC_IMPL(__imp__sub_8222BAAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12916
	ctx.r3.s64 = ctx.r11.s64 + -12916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BAD0"))) PPC_WEAK_FUNC(sub_8222BAD0);
PPC_FUNC_IMPL(__imp__sub_8222BAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BADC"))) PPC_WEAK_FUNC(sub_8222BADC);
PPC_FUNC_IMPL(__imp__sub_8222BADC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12780
	ctx.r3.s64 = ctx.r11.s64 + -12780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BAE8"))) PPC_WEAK_FUNC(sub_8222BAE8);
PPC_FUNC_IMPL(__imp__sub_8222BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BB00"))) PPC_WEAK_FUNC(sub_8222BB00);
PPC_FUNC_IMPL(__imp__sub_8222BB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12676
	ctx.r3.s64 = ctx.r11.s64 + -12676;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BB0C"))) PPC_WEAK_FUNC(sub_8222BB0C);
PPC_FUNC_IMPL(__imp__sub_8222BB0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12640
	ctx.r3.s64 = ctx.r11.s64 + -12640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BB18"))) PPC_WEAK_FUNC(sub_8222BB18);
PPC_FUNC_IMPL(__imp__sub_8222BB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12604
	ctx.r3.s64 = ctx.r11.s64 + -12604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BB24"))) PPC_WEAK_FUNC(sub_8222BB24);
PPC_FUNC_IMPL(__imp__sub_8222BB24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BB30"))) PPC_WEAK_FUNC(sub_8222BB30);
PPC_FUNC_IMPL(__imp__sub_8222BB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12532
	ctx.r3.s64 = ctx.r11.s64 + -12532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BB48"))) PPC_WEAK_FUNC(sub_8222BB48);
PPC_FUNC_IMPL(__imp__sub_8222BB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-12460
	ctx.r3.s64 = ctx.r11.s64 + -12460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BCC8"))) PPC_WEAK_FUNC(sub_8222BCC8);
PPC_FUNC_IMPL(__imp__sub_8222BCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11324
	ctx.r3.s64 = ctx.r11.s64 + -11324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BD58"))) PPC_WEAK_FUNC(sub_8222BD58);
PPC_FUNC_IMPL(__imp__sub_8222BD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10912
	ctx.r3.s64 = ctx.r11.s64 + -10912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BE0C"))) PPC_WEAK_FUNC(sub_8222BE0C);
PPC_FUNC_IMPL(__imp__sub_8222BE0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10388
	ctx.r3.s64 = ctx.r11.s64 + -10388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BE30"))) PPC_WEAK_FUNC(sub_8222BE30);
PPC_FUNC_IMPL(__imp__sub_8222BE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10276
	ctx.r3.s64 = ctx.r11.s64 + -10276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BE54"))) PPC_WEAK_FUNC(sub_8222BE54);
PPC_FUNC_IMPL(__imp__sub_8222BE54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10164
	ctx.r3.s64 = ctx.r11.s64 + -10164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BE6C"))) PPC_WEAK_FUNC(sub_8222BE6C);
PPC_FUNC_IMPL(__imp__sub_8222BE6C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BE78"))) PPC_WEAK_FUNC(sub_8222BE78);
PPC_FUNC_IMPL(__imp__sub_8222BE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C010"))) PPC_WEAK_FUNC(sub_8222C010);
PPC_FUNC_IMPL(__imp__sub_8222C010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8222c068
	if (ctx.cr6.eq) goto loc_8222C068;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,3244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c068
	if (ctx.cr6.eq) goto loc_8222C068;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r10,2673(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2673, ctx.r10.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222c068
	if (ctx.cr6.eq) goto loc_8222C068;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222C068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C068:
	// bl 0x822281a0
	ctx.lr = 0x8222C06C;
	sub_822281A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C080"))) PPC_WEAK_FUNC(sub_8222C080);
PPC_FUNC_IMPL(__imp__sub_8222C080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r30,r10,-1360
	ctx.r30.s64 = ctx.r10.s64 + -1360;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,916(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,96(r30)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82182558
	ctx.lr = 0x8222C0C4;
	sub_82182558(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f0,920(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// fmsubs f10,f11,f0,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8222c0f4
	if (!ctx.cr6.eq) goto loc_8222C0F4;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// stw r3,3248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3248, ctx.r3.u32);
	// b 0x8222c130
	goto loc_8222C130;
loc_8222C0F4:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r10,3252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3252);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8222c130
	if (ctx.cr6.eq) goto loc_8222C130;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// stw r3,3252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3252, ctx.r3.u32);
	// lwz r11,3244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c130
	if (ctx.cr6.eq) goto loc_8222C130;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lbz r10,2674(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2674);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222c130
	if (!ctx.cr6.eq) goto loc_8222C130;
	// bl 0x822168e8
	ctx.lr = 0x8222C12C;
	sub_822168E8(ctx, base);
	// bl 0x8221dfa0
	ctx.lr = 0x8222C130;
	sub_8221DFA0(ctx, base);
loc_8222C130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C150"))) PPC_WEAK_FUNC(sub_8222C150);
PPC_FUNC_IMPL(__imp__sub_8222C150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x8222C158;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-30652
	ctx.r30.s64 = ctx.r11.s64 + -30652;
	// lwz r11,-30496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30496);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222c1b0
	if (!ctx.cr6.eq) goto loc_8222C1B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-30496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30496, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x820c6bb8
	ctx.lr = 0x8222C194;
	sub_820C6BB8(ctx, base);
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82183178
	ctx.lr = 0x8222C1B0;
	sub_82183178(ctx, base);
loc_8222C1B0:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x820c6b70
	ctx.lr = 0x8222C1C0;
	sub_820C6B70(ctx, base);
	// lis r10,420
	ctx.r10.s64 = 27525120;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r10,6720
	ctx.r9.u64 = ctx.r10.u64 | 6720;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x8222c1e4
	if (!ctx.cr6.lt) goto loc_8222C1E4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// bl 0x82180878
	ctx.lr = 0x8222C1E4;
	sub_82180878(ctx, base);
loc_8222C1E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,11(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11, ctx.r28.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C218"))) PPC_WEAK_FUNC(sub_8222C218);
PPC_FUNC_IMPL(__imp__sub_8222C218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r10,-30496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30496);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r8,-32112
	ctx.r8.s64 = -2104492032;
	// stw r9,-30496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30496, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C240"))) PPC_WEAK_FUNC(sub_8222C240);
PPC_FUNC_IMPL(__imp__sub_8222C240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821809d0
	ctx.lr = 0x8222C25C;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c278
	if (ctx.cr6.eq) goto loc_8222C278;
	// bl 0x82228578
	ctx.lr = 0x8222C26C;
	sub_82228578(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// stw r3,3240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3240, ctx.r3.u32);
	// b 0x8222c284
	goto loc_8222C284;
loc_8222C278:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// stw r11,3240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3240, ctx.r11.u32);
loc_8222C284:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C298"))) PPC_WEAK_FUNC(sub_8222C298);
PPC_FUNC_IMPL(__imp__sub_8222C298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x8222C2B0;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C2C0"))) PPC_WEAK_FUNC(sub_8222C2C0);
PPC_FUNC_IMPL(__imp__sub_8222C2C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8222c240
	sub_8222C240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C2D0"))) PPC_WEAK_FUNC(sub_8222C2D0);
PPC_FUNC_IMPL(__imp__sub_8222C2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82184408
	ctx.lr = 0x8222C2D8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r10,-29053(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29053);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c3cc
	if (ctx.cr6.eq) goto loc_8222C3CC;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lbz r10,15126(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15126);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c3cc
	if (ctx.cr6.eq) goto loc_8222C3CC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c3cc
	if (ctx.cr6.eq) goto loc_8222C3CC;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r11,3368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c3cc
	if (ctx.cr6.eq) goto loc_8222C3CC;
	// lis r30,-32158
	ctx.r30.s64 = -2107506688;
	// lwz r11,3244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c350
	if (ctx.cr6.eq) goto loc_8222C350;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222C348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3244, ctx.r11.u32);
loc_8222C350:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x821809d0
	ctx.lr = 0x8222C358;
	sub_821809D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c36c
	if (ctx.cr6.eq) goto loc_8222C36C;
	// bl 0x8221ef90
	ctx.lr = 0x8222C368;
	sub_8221EF90(ctx, base);
	// b 0x8222c370
	goto loc_8222C370;
loc_8222C36C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222C370:
	// stw r3,3244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3244, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C380;
	sub_820C0FD0(ctx, base);
	// lwz r11,3244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8221e9a8
	ctx.lr = 0x8222C390;
	sub_8221E9A8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x8222C398;
	sub_820C9A70(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r3,3252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3252);
	// bl 0x822168e8
	ctx.lr = 0x8222C3A4;
	sub_822168E8(ctx, base);
	// bl 0x8221dfa0
	ctx.lr = 0x8222C3A8;
	sub_8221DFA0(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// lwz r11,3244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8221e3c0
	ctx.lr = 0x8222C3C0;
	sub_8221E3C0(ctx, base);
	// lis r8,-32158
	ctx.r8.s64 = -2107506688;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2673(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2673, ctx.r11.u8);
loc_8222C3CC:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82184458
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C3D4"))) PPC_WEAK_FUNC(sub_8222C3D4);
PPC_FUNC_IMPL(__imp__sub_8222C3D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82183380
	ctx.lr = 0x8222C3EC;
	sub_82183380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C3FC"))) PPC_WEAK_FUNC(sub_8222C3FC);
PPC_FUNC_IMPL(__imp__sub_8222C3FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x8222C414;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C430"))) PPC_WEAK_FUNC(sub_8222C430);
PPC_FUNC_IMPL(__imp__sub_8222C430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-1456
	ctx.r31.s64 = ctx.r1.s64 + -1456;
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r10,-29053(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29053);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222ca1c
	if (ctx.cr6.eq) goto loc_8222CA1C;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8222c4a4
	if (!ctx.cr6.eq) goto loc_8222C4A4;
	// cmplwi cr6,r4,698
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 698, ctx.xer);
	// bgt cr6,0x8222ca1c
	if (ctx.cr6.gt) goto loc_8222CA1C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82229460
	ctx.lr = 0x8222C474;
	sub_82229460(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ca1c
	if (ctx.cr6.eq) goto loc_8222CA1C;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lbz r10,2674(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2674);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222ca1c
	if (!ctx.cr6.eq) goto loc_8222CA1C;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82228490
	ctx.lr = 0x8222C4A0;
	sub_82228490(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C4A4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lbz r10,15126(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15126);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222ca1c
	if (ctx.cr6.eq) goto loc_8222CA1C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,13
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 13, ctx.xer);
	// stb r11,-29065(r10)
	PPC_STORE_U8(ctx.r10.u32 + -29065, ctx.r11.u8);
	// bgt cr6,0x8222ca1c
	if (ctx.cr6.gt) goto loc_8222CA1C;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15136
	ctx.r12.s64 = ctx.r12.s64 + -15136;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8222C518;
	case 1:
		goto loc_8222C574;
	case 2:
		goto loc_8222C5D0;
	case 3:
		goto loc_8222C62C;
	case 4:
		goto loc_8222C688;
	case 5:
		goto loc_8222C6E4;
	case 6:
		goto loc_8222C740;
	case 7:
		goto loc_8222C79C;
	case 8:
		goto loc_8222C7F8;
	case 9:
		goto loc_8222C854;
	case 10:
		goto loc_8222C8B0;
	case 11:
		goto loc_8222C90C;
	case 12:
		goto loc_8222C968;
	case 13:
		goto loc_8222C9C4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8222C518:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// addi r4,r11,-8864
	ctx.r4.s64 = ctx.r11.s64 + -8864;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C528;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,416
	ctx.r4.s64 = ctx.r31.s64 + 416;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x82212da8
	ctx.lr = 0x8222C534;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x822bb760
	ctx.lr = 0x8222C540;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c550
	if (ctx.cr6.lt) goto loc_8222C550;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C550:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C558;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x820c9a70
	ctx.lr = 0x8222C560;
	sub_820C9A70(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x820c9a70
	ctx.lr = 0x8222C568;
	sub_820C9A70(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x820c9a70
	ctx.lr = 0x8222C570;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C574:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-8828
	ctx.r4.s64 = ctx.r11.s64 + -8828;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C584;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x82212da8
	ctx.lr = 0x8222C590;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1312
	ctx.r3.s64 = ctx.r31.s64 + 1312;
	// bl 0x822bb760
	ctx.lr = 0x8222C59C;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c5ac
	if (ctx.cr6.lt) goto loc_8222C5AC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C5AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C5B4;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1312
	ctx.r3.s64 = ctx.r31.s64 + 1312;
	// bl 0x820c9a70
	ctx.lr = 0x8222C5BC;
	sub_820C9A70(ctx, base);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x820c9a70
	ctx.lr = 0x8222C5C4;
	sub_820C9A70(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x820c9a70
	ctx.lr = 0x8222C5CC;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C5D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// addi r4,r11,-8792
	ctx.r4.s64 = ctx.r11.s64 + -8792;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C5E0;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// bl 0x82212da8
	ctx.lr = 0x8222C5EC;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// bl 0x822bb760
	ctx.lr = 0x8222C5F8;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c608
	if (ctx.cr6.lt) goto loc_8222C608;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C608:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C610;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// bl 0x820c9a70
	ctx.lr = 0x8222C618;
	sub_820C9A70(ctx, base);
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// bl 0x820c9a70
	ctx.lr = 0x8222C620;
	sub_820C9A70(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x820c9a70
	ctx.lr = 0x8222C628;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C62C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-8748
	ctx.r4.s64 = ctx.r11.s64 + -8748;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C63C;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// bl 0x82212da8
	ctx.lr = 0x8222C648;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x822bb760
	ctx.lr = 0x8222C654;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c664
	if (ctx.cr6.lt) goto loc_8222C664;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C664:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C66C;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x820c9a70
	ctx.lr = 0x8222C674;
	sub_820C9A70(ctx, base);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// bl 0x820c9a70
	ctx.lr = 0x8222C67C;
	sub_820C9A70(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x820c9a70
	ctx.lr = 0x8222C684;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C688:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r11,-8708
	ctx.r4.s64 = ctx.r11.s64 + -8708;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C698;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,480
	ctx.r4.s64 = ctx.r31.s64 + 480;
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// bl 0x82212da8
	ctx.lr = 0x8222C6A4;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// bl 0x822bb760
	ctx.lr = 0x8222C6B0;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c6c0
	if (ctx.cr6.lt) goto loc_8222C6C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C6C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C6C8;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// bl 0x820c9a70
	ctx.lr = 0x8222C6D0;
	sub_820C9A70(ctx, base);
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// bl 0x820c9a70
	ctx.lr = 0x8222C6D8;
	sub_820C9A70(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x820c9a70
	ctx.lr = 0x8222C6E0;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C6E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r11,-8676
	ctx.r4.s64 = ctx.r11.s64 + -8676;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C6F4;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x82212da8
	ctx.lr = 0x8222C700;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// bl 0x822bb760
	ctx.lr = 0x8222C70C;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c71c
	if (ctx.cr6.lt) goto loc_8222C71C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C71C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C724;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// bl 0x820c9a70
	ctx.lr = 0x8222C72C;
	sub_820C9A70(ctx, base);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x820c9a70
	ctx.lr = 0x8222C734;
	sub_820C9A70(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x820c9a70
	ctx.lr = 0x8222C73C;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C740:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-8640
	ctx.r4.s64 = ctx.r11.s64 + -8640;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C750;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x82212da8
	ctx.lr = 0x8222C75C;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x822bb760
	ctx.lr = 0x8222C768;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c778
	if (ctx.cr6.lt) goto loc_8222C778;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C778:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C780;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x820c9a70
	ctx.lr = 0x8222C788;
	sub_820C9A70(ctx, base);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x820c9a70
	ctx.lr = 0x8222C790;
	sub_820C9A70(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x8222C798;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C79C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,-8596
	ctx.r4.s64 = ctx.r11.s64 + -8596;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C7AC;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82212da8
	ctx.lr = 0x8222C7B8;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x822bb760
	ctx.lr = 0x8222C7C4;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c7d4
	if (ctx.cr6.lt) goto loc_8222C7D4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C7D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C7DC;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x820c9a70
	ctx.lr = 0x8222C7E4;
	sub_820C9A70(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x820c9a70
	ctx.lr = 0x8222C7EC;
	sub_820C9A70(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9a70
	ctx.lr = 0x8222C7F4;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C7F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r11,-8564
	ctx.r4.s64 = ctx.r11.s64 + -8564;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C808;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// bl 0x82212da8
	ctx.lr = 0x8222C814;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x822bb760
	ctx.lr = 0x8222C820;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c830
	if (ctx.cr6.lt) goto loc_8222C830;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C830:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C838;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x820c9a70
	ctx.lr = 0x8222C840;
	sub_820C9A70(ctx, base);
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// bl 0x820c9a70
	ctx.lr = 0x8222C848;
	sub_820C9A70(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x820c9a70
	ctx.lr = 0x8222C850;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C854:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r11,-8528
	ctx.r4.s64 = ctx.r11.s64 + -8528;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C864;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x82212da8
	ctx.lr = 0x8222C870;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// bl 0x822bb760
	ctx.lr = 0x8222C87C;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c88c
	if (ctx.cr6.lt) goto loc_8222C88C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C88C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C894;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// bl 0x820c9a70
	ctx.lr = 0x8222C89C;
	sub_820C9A70(ctx, base);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x820c9a70
	ctx.lr = 0x8222C8A4;
	sub_820C9A70(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x820c9a70
	ctx.lr = 0x8222C8AC;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C8B0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r11,-8488
	ctx.r4.s64 = ctx.r11.s64 + -8488;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C8C0;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,320
	ctx.r4.s64 = ctx.r31.s64 + 320;
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// bl 0x82212da8
	ctx.lr = 0x8222C8CC;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// bl 0x822bb760
	ctx.lr = 0x8222C8D8;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c8e8
	if (ctx.cr6.lt) goto loc_8222C8E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C8E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C8F0;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// bl 0x820c9a70
	ctx.lr = 0x8222C8F8;
	sub_820C9A70(ctx, base);
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// bl 0x820c9a70
	ctx.lr = 0x8222C900;
	sub_820C9A70(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x820c9a70
	ctx.lr = 0x8222C908;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C90C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r11,-8436
	ctx.r4.s64 = ctx.r11.s64 + -8436;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C91C;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// bl 0x82212da8
	ctx.lr = 0x8222C928;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// bl 0x822bb760
	ctx.lr = 0x8222C934;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c944
	if (ctx.cr6.lt) goto loc_8222C944;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C944:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C94C;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// bl 0x820c9a70
	ctx.lr = 0x8222C954;
	sub_820C9A70(ctx, base);
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// bl 0x820c9a70
	ctx.lr = 0x8222C95C;
	sub_820C9A70(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x820c9a70
	ctx.lr = 0x8222C964;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C968:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r11,-8404
	ctx.r4.s64 = ctx.r11.s64 + -8404;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C978;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// bl 0x82212da8
	ctx.lr = 0x8222C984;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x822bb760
	ctx.lr = 0x8222C990;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c9a0
	if (ctx.cr6.lt) goto loc_8222C9A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C9A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222C9A8;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x820c9a70
	ctx.lr = 0x8222C9B0;
	sub_820C9A70(ctx, base);
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// bl 0x820c9a70
	ctx.lr = 0x8222C9B8;
	sub_820C9A70(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x820c9a70
	ctx.lr = 0x8222C9C0;
	sub_820C9A70(ctx, base);
	// b 0x8222ca1c
	goto loc_8222CA1C;
loc_8222C9C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r11,-8368
	ctx.r4.s64 = ctx.r11.s64 + -8368;
	// bl 0x820c0fd0
	ctx.lr = 0x8222C9D4;
	sub_820C0FD0(ctx, base);
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x82212da8
	ctx.lr = 0x8222C9E0;
	sub_82212DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x822bb760
	ctx.lr = 0x8222C9EC;
	sub_822BB760(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222c9fc
	if (ctx.cr6.lt) goto loc_8222C9FC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8222C9FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222c2d0
	ctx.lr = 0x8222CA04;
	sub_8222C2D0(ctx, base);
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x820c9a70
	ctx.lr = 0x8222CA0C;
	sub_820C9A70(ctx, base);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x820c9a70
	ctx.lr = 0x8222CA14;
	sub_820C9A70(ctx, base);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x820c9a70
	ctx.lr = 0x8222CA1C;
	sub_820C9A70(ctx, base);
loc_8222CA1C:
	// addi r1,r31,1456
	ctx.r1.s64 = ctx.r31.s64 + 1456;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CA30"))) PPC_WEAK_FUNC(sub_8222CA30);
PPC_FUNC_IMPL(__imp__sub_8222CA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x820c9a70
	ctx.lr = 0x8222CA48;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CA58"))) PPC_WEAK_FUNC(sub_8222CA58);
PPC_FUNC_IMPL(__imp__sub_8222CA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x820c9a70
	ctx.lr = 0x8222CA70;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CA80"))) PPC_WEAK_FUNC(sub_8222CA80);
PPC_FUNC_IMPL(__imp__sub_8222CA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x820c9a70
	ctx.lr = 0x8222CA98;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CAA8"))) PPC_WEAK_FUNC(sub_8222CAA8);
PPC_FUNC_IMPL(__imp__sub_8222CAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x820c9a70
	ctx.lr = 0x8222CAC0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CAD0"))) PPC_WEAK_FUNC(sub_8222CAD0);
PPC_FUNC_IMPL(__imp__sub_8222CAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x820c9a70
	ctx.lr = 0x8222CAE8;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CAF8"))) PPC_WEAK_FUNC(sub_8222CAF8);
PPC_FUNC_IMPL(__imp__sub_8222CAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1312
	ctx.r3.s64 = ctx.r31.s64 + 1312;
	// bl 0x820c9a70
	ctx.lr = 0x8222CB10;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CB20"))) PPC_WEAK_FUNC(sub_8222CB20);
PPC_FUNC_IMPL(__imp__sub_8222CB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x820c9a70
	ctx.lr = 0x8222CB38;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CB48"))) PPC_WEAK_FUNC(sub_8222CB48);
PPC_FUNC_IMPL(__imp__sub_8222CB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// bl 0x820c9a70
	ctx.lr = 0x8222CB60;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CB70"))) PPC_WEAK_FUNC(sub_8222CB70);
PPC_FUNC_IMPL(__imp__sub_8222CB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// bl 0x820c9a70
	ctx.lr = 0x8222CB88;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CB98"))) PPC_WEAK_FUNC(sub_8222CB98);
PPC_FUNC_IMPL(__imp__sub_8222CB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x820c9a70
	ctx.lr = 0x8222CBB0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CBC0"))) PPC_WEAK_FUNC(sub_8222CBC0);
PPC_FUNC_IMPL(__imp__sub_8222CBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// bl 0x820c9a70
	ctx.lr = 0x8222CBD8;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CBE8"))) PPC_WEAK_FUNC(sub_8222CBE8);
PPC_FUNC_IMPL(__imp__sub_8222CBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x820c9a70
	ctx.lr = 0x8222CC00;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CC10"))) PPC_WEAK_FUNC(sub_8222CC10);
PPC_FUNC_IMPL(__imp__sub_8222CC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x820c9a70
	ctx.lr = 0x8222CC28;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CC38"))) PPC_WEAK_FUNC(sub_8222CC38);
PPC_FUNC_IMPL(__imp__sub_8222CC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// bl 0x820c9a70
	ctx.lr = 0x8222CC50;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CC60"))) PPC_WEAK_FUNC(sub_8222CC60);
PPC_FUNC_IMPL(__imp__sub_8222CC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// bl 0x820c9a70
	ctx.lr = 0x8222CC78;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CC88"))) PPC_WEAK_FUNC(sub_8222CC88);
PPC_FUNC_IMPL(__imp__sub_8222CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x820c9a70
	ctx.lr = 0x8222CCA0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CCB0"))) PPC_WEAK_FUNC(sub_8222CCB0);
PPC_FUNC_IMPL(__imp__sub_8222CCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x820c9a70
	ctx.lr = 0x8222CCC8;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CCD8"))) PPC_WEAK_FUNC(sub_8222CCD8);
PPC_FUNC_IMPL(__imp__sub_8222CCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// bl 0x820c9a70
	ctx.lr = 0x8222CCF0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CD00"))) PPC_WEAK_FUNC(sub_8222CD00);
PPC_FUNC_IMPL(__imp__sub_8222CD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820c9a70
	ctx.lr = 0x8222CD18;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CD28"))) PPC_WEAK_FUNC(sub_8222CD28);
PPC_FUNC_IMPL(__imp__sub_8222CD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x820c9a70
	ctx.lr = 0x8222CD40;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CD50"))) PPC_WEAK_FUNC(sub_8222CD50);
PPC_FUNC_IMPL(__imp__sub_8222CD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x820c9a70
	ctx.lr = 0x8222CD68;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CD78"))) PPC_WEAK_FUNC(sub_8222CD78);
PPC_FUNC_IMPL(__imp__sub_8222CD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820c9a70
	ctx.lr = 0x8222CD90;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CDA0"))) PPC_WEAK_FUNC(sub_8222CDA0);
PPC_FUNC_IMPL(__imp__sub_8222CDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x820c9a70
	ctx.lr = 0x8222CDB8;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CDC8"))) PPC_WEAK_FUNC(sub_8222CDC8);
PPC_FUNC_IMPL(__imp__sub_8222CDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x820c9a70
	ctx.lr = 0x8222CDE0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CDF0"))) PPC_WEAK_FUNC(sub_8222CDF0);
PPC_FUNC_IMPL(__imp__sub_8222CDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x820c9a70
	ctx.lr = 0x8222CE08;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CE18"))) PPC_WEAK_FUNC(sub_8222CE18);
PPC_FUNC_IMPL(__imp__sub_8222CE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// bl 0x820c9a70
	ctx.lr = 0x8222CE30;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CE40"))) PPC_WEAK_FUNC(sub_8222CE40);
PPC_FUNC_IMPL(__imp__sub_8222CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x820c9a70
	ctx.lr = 0x8222CE58;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CE68"))) PPC_WEAK_FUNC(sub_8222CE68);
PPC_FUNC_IMPL(__imp__sub_8222CE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x820c9a70
	ctx.lr = 0x8222CE80;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CE90"))) PPC_WEAK_FUNC(sub_8222CE90);
PPC_FUNC_IMPL(__imp__sub_8222CE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x820c9a70
	ctx.lr = 0x8222CEA8;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CEB8"))) PPC_WEAK_FUNC(sub_8222CEB8);
PPC_FUNC_IMPL(__imp__sub_8222CEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// bl 0x820c9a70
	ctx.lr = 0x8222CED0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CEE0"))) PPC_WEAK_FUNC(sub_8222CEE0);
PPC_FUNC_IMPL(__imp__sub_8222CEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x820c9a70
	ctx.lr = 0x8222CEF8;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CF08"))) PPC_WEAK_FUNC(sub_8222CF08);
PPC_FUNC_IMPL(__imp__sub_8222CF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// bl 0x820c9a70
	ctx.lr = 0x8222CF20;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CF30"))) PPC_WEAK_FUNC(sub_8222CF30);
PPC_FUNC_IMPL(__imp__sub_8222CF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// bl 0x820c9a70
	ctx.lr = 0x8222CF48;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CF58"))) PPC_WEAK_FUNC(sub_8222CF58);
PPC_FUNC_IMPL(__imp__sub_8222CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x820c9a70
	ctx.lr = 0x8222CF70;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CF80"))) PPC_WEAK_FUNC(sub_8222CF80);
PPC_FUNC_IMPL(__imp__sub_8222CF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// bl 0x820c9a70
	ctx.lr = 0x8222CF98;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CFA8"))) PPC_WEAK_FUNC(sub_8222CFA8);
PPC_FUNC_IMPL(__imp__sub_8222CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// bl 0x820c9a70
	ctx.lr = 0x8222CFC0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CFD0"))) PPC_WEAK_FUNC(sub_8222CFD0);
PPC_FUNC_IMPL(__imp__sub_8222CFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x820c9a70
	ctx.lr = 0x8222CFE8;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CFF8"))) PPC_WEAK_FUNC(sub_8222CFF8);
PPC_FUNC_IMPL(__imp__sub_8222CFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// bl 0x820c9a70
	ctx.lr = 0x8222D010;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222D020"))) PPC_WEAK_FUNC(sub_8222D020);
PPC_FUNC_IMPL(__imp__sub_8222D020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x820c9a70
	ctx.lr = 0x8222D038;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222D048"))) PPC_WEAK_FUNC(sub_8222D048);
PPC_FUNC_IMPL(__imp__sub_8222D048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x820c9a70
	ctx.lr = 0x8222D060;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222D070"))) PPC_WEAK_FUNC(sub_8222D070);
PPC_FUNC_IMPL(__imp__sub_8222D070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x820c9a70
	ctx.lr = 0x8222D088;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222D098"))) PPC_WEAK_FUNC(sub_8222D098);
PPC_FUNC_IMPL(__imp__sub_8222D098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1456
	ctx.r31.s64 = ctx.r12.s64 + -1456;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x820c9a70
	ctx.lr = 0x8222D0B0;
	sub_820C9A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222D0C0"))) PPC_WEAK_FUNC(sub_8222D0C0);
PPC_FUNC_IMPL(__imp__sub_8222D0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222D0C8"))) PPC_WEAK_FUNC(sub_8222D0C8);
PPC_FUNC_IMPL(__imp__sub_8222D0C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222D0D0"))) PPC_WEAK_FUNC(sub_8222D0D0);
PPC_FUNC_IMPL(__imp__sub_8222D0D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}



struct _PROC_IDLE_ACCOUNTING {
	uint32_t	StateCount;
	uint32_t	TotalTransitions;
	uint32_t	ResetCount;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	StartTime;
	uint64_t	BucketLimits[16];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	uint8_t	__padding31__;
	uint8_t	__padding32__;
	uint8_t	__padding33__;
	uint8_t	__padding34__;
	uint8_t	__padding35__;
	uint8_t	__padding36__;
	uint8_t	__padding37__;
	uint8_t	__padding38__;
	uint8_t	__padding39__;
	uint8_t	__padding40__;
	uint8_t	__padding41__;
	uint8_t	__padding42__;
	uint8_t	__padding43__;
	uint8_t	__padding44__;
	uint8_t	__padding45__;
	uint8_t	__padding46__;
	uint8_t	__padding47__;
	uint8_t	__padding48__;
	uint8_t	__padding49__;
	uint8_t	__padding50__;
	uint8_t	__padding51__;
	uint8_t	__padding52__;
	uint8_t	__padding53__;
	uint8_t	__padding54__;
	uint8_t	__padding55__;
	uint8_t	__padding56__;
	uint8_t	__padding57__;
	uint8_t	__padding58__;
	uint8_t	__padding59__;
	uint8_t	__padding60__;
	uint8_t	__padding61__;
	uint8_t	__padding62__;
	uint8_t	__padding63__;
	uint8_t	__padding64__;
	uint8_t	__padding65__;
	uint8_t	__padding66__;
	uint8_t	__padding67__;
	uint8_t	__padding68__;
	uint8_t	__padding69__;
	uint8_t	__padding70__;
	uint8_t	__padding71__;
	uint8_t	__padding72__;
	uint8_t	__padding73__;
	uint8_t	__padding74__;
	uint8_t	__padding75__;
	uint8_t	__padding76__;
	uint8_t	__padding77__;
	uint8_t	__padding78__;
	uint8_t	__padding79__;
	uint8_t	__padding80__;
	uint8_t	__padding81__;
	uint8_t	__padding82__;
	uint8_t	__padding83__;
	uint8_t	__padding84__;
	uint8_t	__padding85__;
	uint8_t	__padding86__;
	uint8_t	__padding87__;
	uint8_t	__padding88__;
	uint8_t	__padding89__;
	uint8_t	__padding90__;
	uint8_t	__padding91__;
	uint8_t	__padding92__;
	uint8_t	__padding93__;
	uint8_t	__padding94__;
	uint8_t	__padding95__;
	uint8_t	__padding96__;
	uint8_t	__padding97__;
	uint8_t	__padding98__;
	uint8_t	__padding99__;
	uint8_t	__padding100__;
	uint8_t	__padding101__;
	uint8_t	__padding102__;
	uint8_t	__padding103__;
	uint8_t	__padding104__;
	uint8_t	__padding105__;
	uint8_t	__padding106__;
	uint8_t	__padding107__;
	uint8_t	__padding108__;
	uint8_t	__padding109__;
	uint8_t	__padding110__;
	uint8_t	__padding111__;
	uint8_t	__padding112__;
	uint8_t	__padding113__;
	uint8_t	__padding114__;
	uint8_t	__padding115__;
	uint8_t	__padding116__;
	uint8_t	__padding117__;
	uint8_t	__padding118__;
	uint8_t	__padding119__;
	struct _PROC_IDLE_STATE_ACCOUNTING	State[1];
}__attribute__((packed));

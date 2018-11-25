
struct _HEAP {
	union {
		struct _HEAP_SEGMENT	Segment;
		struct _HEAP_ENTRY	Entry;
	};
	uint32_t	SegmentSignature;
	uint32_t	SegmentFlags;
	struct _LIST_ENTRY	SegmentListEntry;
	struct _HEAP	*Heap;
	void	*BaseAddress;
	uint32_t	NumberOfPages;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _HEAP_ENTRY	*FirstEntry;
	struct _HEAP_ENTRY	*LastValidEntry;
	uint32_t	NumberOfUnCommittedPages;
	uint32_t	NumberOfUnCommittedRanges;
	uint16_t	SegmentAllocatorBackTraceIndex;
	uint16_t	Reserved;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	UCRSegmentList;
	uint32_t	Flags;
	uint32_t	ForceFlags;
	uint32_t	CompatibilityFlags;
	uint32_t	EncodeFlagMask;
	struct _HEAP_ENTRY	Encoding;
	uint32_t	Interceptor;
	uint32_t	VirtualMemoryThreshold;
	uint32_t	Signature;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	SegmentReserve;
	uint64_t	SegmentCommit;
	uint64_t	DeCommitFreeBlockThreshold;
	uint64_t	DeCommitTotalFreeThreshold;
	uint64_t	TotalFreeSize;
	uint64_t	MaximumAllocationSize;
	uint16_t	ProcessHeapsListIndex;
	uint16_t	HeaderValidateLength;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*HeaderValidateCopy;
	uint16_t	NextAvailableTagIndex;
	uint16_t	MaximumTagIndex;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _HEAP_TAG_ENTRY	*TagEntries;
	struct _LIST_ENTRY	UCRList;
	uint64_t	AlignRound;
	uint64_t	AlignMask;
	struct _LIST_ENTRY	VirtualAllocdBlocks;
	struct _LIST_ENTRY	SegmentList;
	uint16_t	AllocatorBackTraceIndex;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint32_t	NonDedicatedListLength;
	void	*BlocksIndex;
	void	*UCRIndex;
	struct _HEAP_PSEUDO_TAG_ENTRY	*PseudoTagEntries;
	struct _LIST_ENTRY	FreeLists;
	struct _HEAP_LOCK	*LockVariable;
	struct long	*CommitRoutine;
	struct _RTL_RUN_ONCE	StackTraceInitVar;
	void	*FrontEndHeap;
	uint16_t	FrontHeapLockCount;
	uint8_t	FrontEndHeapType;
	uint8_t	RequestedFrontEndHeapType;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint16_t	*FrontEndHeapUsageData;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint16_t	FrontEndHeapMaximumIndex;
	uint8_t	FrontEndHeapStatusBitmap[129];
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
	uint8_t	__padding120__;
	uint8_t	__padding121__;
	uint8_t	__padding122__;
	uint8_t	__padding123__;
	uint8_t	__padding124__;
	uint8_t	__padding125__;
	uint8_t	__padding126__;
	uint8_t	__padding127__;
	uint8_t	__padding128__;
	uint8_t	__padding129__;
	uint8_t	__padding130__;
	uint8_t	__padding131__;
	uint8_t	__padding132__;
	struct _HEAP_COUNTERS	Counters;
	struct _HEAP_TUNING_PARAMETERS	TuningParameters;
}__attribute__((packed));


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
	struct _HEAP_ENTRY	*FirstEntry;
	struct _HEAP_ENTRY	*LastValidEntry;
	uint32_t	NumberOfUnCommittedPages;
	uint32_t	NumberOfUnCommittedRanges;
	uint16_t	SegmentAllocatorBackTraceIndex;
	uint16_t	Reserved;
	struct _LIST_ENTRY	UCRSegmentList;
	uint32_t	Flags;
	uint32_t	ForceFlags;
	uint32_t	CompatibilityFlags;
	uint32_t	EncodeFlagMask;
	struct _HEAP_ENTRY	Encoding;
	uint32_t	Interceptor;
	uint32_t	VirtualMemoryThreshold;
	uint32_t	Signature;
	uint64_t	SegmentReserve;
	uint64_t	SegmentCommit;
	uint64_t	DeCommitFreeBlockThreshold;
	uint64_t	DeCommitTotalFreeThreshold;
	uint64_t	TotalFreeSize;
	uint64_t	MaximumAllocationSize;
	uint16_t	ProcessHeapsListIndex;
	uint16_t	HeaderValidateLength;
	void	*HeaderValidateCopy;
	uint16_t	NextAvailableTagIndex;
	uint16_t	MaximumTagIndex;
	struct _HEAP_TAG_ENTRY	*TagEntries;
	struct _LIST_ENTRY	UCRList;
	uint64_t	AlignRound;
	uint64_t	AlignMask;
	struct _LIST_ENTRY	VirtualAllocdBlocks;
	struct _LIST_ENTRY	SegmentList;
	uint16_t	AllocatorBackTraceIndex;
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
	uint16_t	*FrontEndHeapUsageData;
	uint16_t	FrontEndHeapMaximumIndex;
	uint8_t	FrontEndHeapStatusBitmap[129];
	struct _HEAP_COUNTERS	Counters;
	struct _HEAP_TUNING_PARAMETERS	TuningParameters;
}__attribute__((packed));

struct _HEAP_SEGMENT {
	struct _HEAP_ENTRY	Entry;
	uint32_t	SegmentSignature;
	uint32_t	SegmentFlags;
	struct _LIST_ENTRY	SegmentListEntry;
	struct _HEAPstruct Ptr32	Heap;
	voidstruct Ptr32	BaseAddress;
	uint32_t	NumberOfPages;
	struct _HEAP_ENTRYstruct Ptr32	FirstEntry;
	struct _HEAP_ENTRYstruct Ptr32	LastValidEntry;
	uint32_t	NumberOfUnCommittedPages;
	uint32_t	NumberOfUnCommittedRanges;
	uint16_t	SegmentAllocatorBackTraceIndex;
	uint16_t	Reserved;
	struct _LIST_ENTRY	UCRSegmentList;
}__attribute__((packed));

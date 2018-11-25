
/* ActiveProcessors */
#define	AutoAlignment	0x00000001
#define	DisableBoost	0x00000002
#define	DisableQuantum	0x00000004
#define	DeepFreeze	0x00000008
#define	TimerVirtualization	0x00000010
#define	CheckStackExtents	0x00000020
#define	SpareFlags0	0x000000C0
#define	ActiveGroupsMask	0x0FFFFF00
#define	ReservedFlags	0xF0000000

struct _KPROCESS {
	struct _DISPATCHER_HEADER	Header;
	struct _LIST_ENTRY	ProfileListHead;
	uint64_t	DirectoryTableBase;
	struct _LIST_ENTRY	ThreadListHead;
	uint32_t	ProcessLock;
	uint32_t	Spare0;
	uint64_t	DeepFreezeStartTime;
	struct _KAFFINITY_EX	Affinity;
	struct _LIST_ENTRY	ReadyListHead;
	struct _SINGLE_LIST_ENTRY	SwapListEntry;
	struct _KAFFINITY_EX	ActiveProcessors;
	int32_t	ProcessFlags;
	struct Char	BasePriority;
	struct Char	QuantumReset;
	uint8_t	Visited;
	struct _KEXECUTE_OPTIONS	Flags;
	uint32_t	ThreadSeed[20];
	uint16_t	IdealNode[20];
	uint16_t	IdealGlobalNode;
	uint16_t	Spare1;
	struct _KSTACK_COUNT	StackCount;
	struct _LIST_ENTRY	ProcessListEntry;
	uint64_t	CycleTime;
	uint64_t	ContextSwitches;
	struct _KSCHEDULING_GROUP	*SchedulingGroup;
	uint32_t	FreezeCount;
	uint32_t	KernelTime;
	uint32_t	UserTime;
	uint16_t	LdtFreeSelectorHint;
	uint16_t	LdtTableLength;
	struct _KGDTENTRY64	LdtSystemDescriptor;
	void	*LdtBaseAddress;
	struct _FAST_MUTEX	LdtProcessLock;
	void	*InstrumentationCallback;
	uint64_t	SecurePid;
}__attribute__((packed));
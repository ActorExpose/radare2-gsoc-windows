
struct _KTRAP_FRAME {
	uint64_t	P1Home;
	uint64_t	P2Home;
	uint64_t	P3Home;
	uint64_t	P4Home;
	uint64_t	P5;
	struct Char	PreviousMode;
	uint8_t	PreviousIrql;
	uint8_t	FaultIndicator;
	uint8_t	ExceptionActive;
	uint32_t	MxCsr;
	uint64_t	Rax;
	uint64_t	Rcx;
	uint64_t	Rdx;
	uint64_t	R8;
	uint64_t	R9;
	uint64_t	R10;
	uint64_t	R11;
	union {
		uint64_t	GsBase;
		uint64_t	GsSwap;
	};
	struct _M128A	Xmm0;
	struct _M128A	Xmm1;
	struct _M128A	Xmm2;
	struct _M128A	Xmm3;
	struct _M128A	Xmm4;
	struct _M128A	Xmm5;
	union {
		uint64_t	FaultAddress;
		uint64_t	ContextRecord;
		uint64_t	TimeStampCKCL;
	};
	uint64_t	Dr0;
	uint64_t	Dr1;
	uint64_t	Dr2;
	uint64_t	Dr3;
	uint64_t	Dr6;
	uint64_t	Dr7;
	uint64_t	DebugControl;
	uint64_t	LastBranchToRip;
	uint64_t	LastBranchFromRip;
	uint64_t	LastExceptionToRip;
	uint64_t	LastExceptionFromRip;
	uint16_t	SegDs;
	uint16_t	SegEs;
	uint16_t	SegFs;
	uint16_t	SegGs;
	uint64_t	TrapFrame;
	uint64_t	Rbx;
	uint64_t	Rdi;
	uint64_t	Rsi;
	uint64_t	Rbp;
	union {
		uint64_t	ErrorCode;
		uint64_t	ExceptionFrame;
		uint64_t	TimeStampKlog;
	};
	uint64_t	Rip;
	uint16_t	SegCs;
	uint8_t	Fill0;
	uint8_t	Logging;
	uint16_t	Fill1[2];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint32_t	EFlags;
	uint32_t	Fill2;
	uint64_t	Rsp;
	uint16_t	SegSs;
	uint16_t	Fill3;
	uint32_t	Fill4;
}__attribute__((packed));

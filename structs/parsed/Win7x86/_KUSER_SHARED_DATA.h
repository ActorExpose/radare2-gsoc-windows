
/* TscQpcData */
#define	TscQpcEnabled	0x00000001
#define	TscQpcSpareFlag	0x00000002
#define	TscQpcShift	0x000000FC

/* SharedDataFlags */
#define	DbgErrorPortPresent	0x00000001
#define	DbgElevationEnabled	0x00000002
#define	DbgVirtEnabled	0x00000004
#define	DbgInstallerDetectEnabled	0x00000008
#define	DbgSystemDllRelocated	0x00000010
#define	DbgDynProcessorEnabled	0x00000020
#define	DbgSEHValidationEnabled	0x00000040
#define	SpareBits	0xFFFFFF80

struct _KUSER_SHARED_DATA {
	uint32_t	TickCountLowDeprecated;
	uint32_t	TickCountMultiplier;
	struct _KSYSTEM_TIME	InterruptTime;
	struct _KSYSTEM_TIME	SystemTime;
	struct _KSYSTEM_TIME	TimeZoneBias;
	uint16_t	ImageNumberLow;
	uint16_t	ImageNumberHigh;
	struct Wchar	NtSystemRoot[260];
	uint32_t	MaxStackTraceDepth;
	uint32_t	CryptoExponent;
	uint32_t	TimeZoneId;
	uint32_t	LargePageMinimum;
	uint32_t	Reserved2[7];
	struct _NT_PRODUCT_TYPE	NtProductType;
	uint8_t	ProductTypeIsValid;
	uint32_t	NtMajorVersion;
	uint32_t	NtMinorVersion;
	uint8_t	ProcessorFeatures[64];
	uint32_t	Reserved1;
	uint32_t	Reserved3;
	uint32_t	TimeSlip;
	struct _ALTERNATIVE_ARCHITECTURE_TYPE	AlternativeArchitecture;
	uint32_t	AltArchitecturePad[1];
	struct _LARGE_INTEGER	SystemExpirationDate;
	uint32_t	SuiteMask;
	uint8_t	KdDebuggerEnabled;
	uint8_t	NXSupportPolicy;
	uint32_t	ActiveConsoleId;
	uint32_t	DismountCount;
	uint32_t	ComPlusPackage;
	uint32_t	LastSystemRITEventTickCount;
	uint32_t	NumberOfPhysicalPages;
	uint8_t	SafeBootMode;
	uint8_t	TscQpcData;
	uint8_t	TscQpcPad[2];
	uint32_t	SharedDataFlags;
	uint32_t	DataFlagsPad[1];
	uint64_t	TestRetInstruction;
	uint32_t	SystemCall;
	uint32_t	SystemCallReturn;
	uint64_t	SystemCallPad[3];
	union {
		struct _KSYSTEM_TIME	TickCount;
		uint64_t	TickCountQuad;
		uint32_t	ReservedTickCountOverlay[3];
	};
	uint32_t	TickCountPad[1];
	uint32_t	Cookie;
	uint32_t	CookiePad[1];
	int64_t	ConsoleSessionForegroundProcessId;
	uint32_t	DEPRECATED_Wow64SharedInformation[16];
	uint16_t	UserModeGlobalLogger[16];
	uint32_t	ImageFileExecutionOptions;
	uint32_t	LangGenerationCount;
	uint64_t	Reserved5;
	uint64_t	InterruptTimeBias;
	uint64_t	TscQpcBias;
	uint32_t	ActiveProcessorCount;
	uint16_t	ActiveGroupCount;
	uint16_t	Reserved4;
	uint32_t	AitSamplingValue;
	uint32_t	AppCompatFlag;
	uint64_t	DEPRECATED_SystemDllNativeRelocation;
	uint32_t	DEPRECATED_SystemDllWowRelocation;
	uint32_t	XStatePad[1];
	struct _XSTATE_CONFIGURATION	XState;
}__attribute__((packed));
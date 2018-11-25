
struct _PROCESSOR_POWER_STATE {
	struct _PPM_IDLE_STATES	*IdleStates;
	struct _PROC_IDLE_ACCOUNTING	*IdleAccounting;
	uint64_t	IdleTimeLast;
	uint64_t	IdleTimeTotal;
	uint64_t	IdleTimeEntry;
	uint64_t	IdleTimeExpiration;
	uint8_t	NonInterruptibleTransition;
	uint8_t	PepWokenTransition;
	uint8_t	EfficiencyClass;
	uint8_t	SchedulingClass;
	uint32_t	TargetIdleState;
	struct _PROC_IDLE_POLICY	IdlePolicy;
	struct _PPM_IDLE_SYNCHRONIZATION_STATE	Synchronization;
	struct _PROC_FEEDBACK	PerfFeedback;
	struct _PROC_HYPERVISOR_STATE	Hypervisor;
	uint32_t	LastSysTime;
	uint64_t	WmiDispatchPtr;
	int32_t	WmiInterfaceEnabled;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _PPM_FFH_THROTTLE_STATE_INFO	FFHThrottleStateInfo;
	struct _KDPC	PerfActionDpc;
	int32_t	PerfActionMask;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _PROC_IDLE_SNAP	HvIdleCheck;
	struct _PROC_PERF_CHECK	*PerfCheck;
	struct _PROC_PERF_DOMAIN	*Domain;
	struct _PROC_PERF_CONSTRAINT	*PerfConstraint;
	struct _PPM_CONCURRENCY_ACCOUNTING	*Concurrency;
	struct _PROC_PERF_LOAD	*Load;
	struct _PROC_PERF_HISTORY	*PerfHistory;
	uint8_t	GuaranteedPerformancePercent;
	uint8_t	HvTargetState;
	uint8_t	Parked;
	uint8_t	__padding0__;
	uint32_t	LatestPerformancePercent;
	uint32_t	AveragePerformancePercent;
	uint32_t	LatestAffinitizedPercent;
	uint32_t	RelativePerformance;
	uint32_t	Utility;
	uint32_t	AffinitizedUtility;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	union {
		uint64_t	SnapTimeLast;
		uint64_t	EnergyConsumed;
	};
	uint64_t	ActiveTime;
	uint64_t	TotalTime;
}__attribute__((packed));

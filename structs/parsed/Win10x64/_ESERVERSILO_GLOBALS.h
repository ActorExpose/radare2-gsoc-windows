
struct _ESERVERSILO_GLOBALS {
	struct _OBP_SILODRIVERSTATE	ObSiloState;
	struct _SEP_SILOSTATE	SeSiloState;
	struct _SEP_RM_LSA_CONNECTION_STATE	SeRmSiloState;
	struct _ETW_SILODRIVERSTATE	*EtwSiloState;
	struct _EPROCESS	*MiSessionLeaderProcess;
	struct _EPROCESS	*ExpDefaultErrorPortProcess;
	void	*ExpDefaultErrorPort;
	uint32_t	HardErrorState;
	struct _WNF_SILODRIVERSTATE	WnfSiloState;
	void	*ApiSetSection;
	void	*ApiSetSchema;
	uint8_t	OneCoreForwardersEnabled;
	struct _UNICODE_STRING	SiloRootDirectoryName;
	struct _PSP_STORAGE	*Storage;
	struct _SERVERSILO_STATE	State;
	int32_t	ExitStatus;
	struct _KEVENT	*DeleteEvent;
	struct _SILO_USER_SHARED_DATA	UserSharedData;
	struct _WORK_QUEUE_ITEM	TerminateWorkItem;
}__attribute__((packed));
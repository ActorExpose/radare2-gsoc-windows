
/* Object */
#define	RefCnt	0x00000007

struct _EX_FAST_REF {
	union {
		voidstruct Ptr32	Object;
		uint32_t	Value;
	};
}__attribute__((packed));

#define PACKETLENGTH (1U<<12)   // 4kB

#define readIS_L1(pSC, pIO) readIS(pSC, pIO)
#define readIS_L2(pSC, pIO) (void)(pSC, pIO)

#define writeIS_L1(pSC, pIO) writeIS(pSC, pIO)
#define writeIS_L2(pSC, pIO) (void)(pSC, pIO)

#define FORCE_INLINE __forceinline
#define UINTPTR_T size_t
#define INTPTR_T size_t
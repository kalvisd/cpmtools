#ifndef CPMDIR_H
#define CPMDIR_H

struct PhysDirectoryEntry
{
  char status;
  char name[8];
  char ext[3];
  char extnol;
  char lrc;
  char extnoh;
  char blkcnt;
  char pointers[16];
};

#define EXTENT(low,high) (((low)&0x1f)|(((high)&0x3f)<<5))
#define EXTENTL(extent) ((extent)&0x1f)
#define EXTENTH(extent) (((extent>>5))&0x3f)

#endif

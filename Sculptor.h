#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
  float r,g,b; // Cores
  float a;// Transparencia
  bool isOn; // Inclui ou não
};

class Sculptor
{
private:
  Voxel ***v;  // 3D matrix
  int nx,ny,nz; // Dimensoes
  float r,g,b,a; // Cores
public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float r, float g, float b, float alpha);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void writeOFF(const char* filename);
};
#endif // SCULPTOR_H

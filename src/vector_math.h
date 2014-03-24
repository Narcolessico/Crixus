static __device__ __host__ inline uf4 operator+(uf4 a, const uf4& b){
  a.a[0] += b.a[0];
  a.a[1] += b.a[1];
  a.a[2] += b.a[2];
  a.a[3] += b.a[3];
  return a;
}

static __device__ __host__ inline uf4 operator-(uf4 a, const uf4& b){
  a.a[0] -= b.a[0];
  a.a[1] -= b.a[1];
  a.a[2] -= b.a[2];
  a.a[3] -= b.a[3];
  return a;
}

static __device__ __host__ inline float dot3(uf4 a, uf4 b){
  return(a.a[0]*b.a[0] + a.a[1]*b.a[1]+ a.a[2]*b.a[2]);
}

static __device__ __host__ inline float sqlength3(uf4 a){
  return dot3(a,a);
}

static __device__ __host__ inline float length3(uf4 a){
  return sqrt(sqlength3(a));
}

static __device__ __host__ inline uf4 cross(uf4 a, uf4 b){
  uf4 c;
  c.a[3] = 0.0;
  c.a[0] = a.a[1]*b.a[2] - a.a[2]*b.a[1];
  c.a[1] = a.a[2]*b.a[0] - a.a[0]*b.a[2];
  c.a[2] = a.a[0]*b.a[1] - a.a[1]*b.a[0];
  return c;
}

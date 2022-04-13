class Singleton {
 public:
  /**
   * Singletons should not be cloneable.
   */
  Singleton(Singleton &other) = delete;

  /**
   * Singletons should not be assignable.
   */
  void operator=(const Singleton &) = delete;

  /**
   * This is the static method that access to the
   * singleton instance.
   */
  static Singleton& GetInstance();

  /**
   * The Singleton's constructor should always be private to prevent direct
   * construction calls with the `new` operator.
   */

  void LOG();

 protected:
  Singleton() {} 
};

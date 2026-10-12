const cancellable = (fn, args, t) => {
  const timer = setTimeout(() => fn(...args), t);
  return () => clearTimeout(timer);
};
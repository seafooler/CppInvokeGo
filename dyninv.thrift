/**
 * dyninvThrift IDL
 * @author seafooler
 * @time 2016.8.10
 */

namespace go com.seafooler.project
namespace cpp com.seafooler.project

struct MyClass {
	1: required i32 userId;
	2: required string userName;
}

service dyninvThrift {
	void CallFunc(1:string funcname, 2:i32 id, 3:list<string> paraList, 4:set<string> paraSet, 5:map<i32, string> paraMap, 6:MyClass mycla),
}

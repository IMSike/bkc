#include <nlohmann/json.hpp>
#include "../include/adminConnector.hpp"
#include "../include/identity.hpp"

using json = nlohmann::json;

void bkc::node::admCon::masterProto()
{
	this->_masterProto.add(280, [=](std::string str){
		json j = {
			{"code", 280},
			{"data", ""},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		this->kill();
		bfc::masterThread::remove(str);
		return (0);
	});
	this->_masterProto.add(301, [=](std::string str){
		json j = {
			{"code", 301},
			{"data", str},
			{"user", bkc::myLog.printablePub()},
			{"sign", bkc::myLog.signPrintable(str)}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(305, [=](std::string str){
		json j = {
			{"code", 305},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(310, [=](std::string str){
		json j = {
			{"code", 310},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(320, [=](std::string str){
		json j = {
			{"code", 320},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(350, [=](std::string str){
		json j = {
			{"code", 350},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(352, [=](std::string str){
		json j = {
			{"code", 352},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(370, [=](std::string str){
		json j = {
			{"code", 370},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(402, [=](std::string str){
		json j = {
			{"code", 402},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
	this->_masterProto.add(470, [=](std::string str){
		json j = {
			{"code", 470},
			{"data", str},
			{"user", bkc::myLog.printablePub()}
		};

		this->_client << j.dump() << blc::endl << blc::endl;
		return (0);
	});
}
